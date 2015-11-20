/////////////////////////////////////////////////////////////////////////////
//
// File: Document.cpp
//
// Description: 
//		Contains the implementation of the Document object
//
// $History: Document.cpp $
//
/////////////////////////////////////////////////////////////////////////////
/* $id$
 * 
 * $Log: DocumentImpl.cpp,v $
 * Revision 1.2  2003/09/08 01:57:18  nathancrews
 * *** empty log message ***
 *
 *
 */
#include "stdafx.h"
#include "Exception.h"

#include "FactoryImpl.h"
#include "LandXML.h"
#include "cargador.h"
#include "LXEnumTypesImpl.h"

#include "DocumentImpl.h"

#include <sys/timeb.h>
#include <time.h>



namespace LX 
{ 

LX_DECLSPEC Document* createDocumentObject ()
{
    return new DocumentImpl();
}
 

DocumentImpl::DocumentImpl () 
{
    m_pRoot = NULL;
	m_domDoc = NULL;

	initialize();
}

DocumentImpl::DocumentImpl (
	const wchar_t* strURL, 
	IParserEventSink* pEventSink)
{
    initialize();

    loadXml(strURL, pEventSink);
}

DocumentImpl::~DocumentImpl ()
{
    if( m_pRoot )
        m_pRoot->release();

    if (m_pFactory )
        delete m_pFactory;

    m_pRoot = NULL;
	m_pFactory = NULL;

	releaseDOMDocument();
}


void DocumentImpl::initialize ()
{
    m_pRoot = NULL;
	m_domDoc = NULL;

	// Create a factory.  Make sure the pointer was allocated.
    m_pFactory = new FactoryImpl(*this);
    if (!m_pFactory)
    {
        throw Exception(Exception::kUnableToCreateDocumentObject, L"Unable to create inner factory object.");
    }
}


void DocumentImpl::loadXml (
	const wchar_t* strURL)
{
	loadXml(strURL, NULL);
}

void DocumentImpl::loadXml (
	const wchar_t* strURL, 
	IParserEventSink* pEventSink)
{
    // convert the file name from wchar to char
    char filename[1024];
    mbstate_t mbs;
    mbrlen (NULL, 0, &mbs);
    size_t ret = wcsrtombs(filename, &strURL, 1024, &mbs);
    if (ret == (size_t) - 1)
        return;

#ifdef DEBUG
    //unsigned long dwStartTime, dwEndTime, dwThirdTime;
    //FILE* fp = fopen("c:\\temp\\LandXMLSDK_time08.txt", "a");
    
    //dwStartTime = GetTickCount();
#endif
    
	//this section is used to load file into a DOM tree.
    m_domDoc = xmlReadFile(filename, NULL, 0);

#ifdef DEBUG
//	dwEndTime = GetTickCount();
#endif
    
    if (m_domDoc) {
        m_pRoot = loadDataFromDOMTree(m_domDoc);
    }

#ifdef DEBUG
//	dwThirdTime	= GetTickCount();
    
/*
    char buf[256]={0};
    sprintf(buf, "LandXML File: %s\n", strURLCopy);
    fprintf(fp, buf);
     
    sprintf(buf, "s1 = %d\n", dwEndTime - dwStartTime );
    fprintf(fp, buf);
    sprintf(buf, "s2 = %d\n", dwThirdTime - dwEndTime);
    fprintf(fp, buf);
    sprintf(buf, "----------------------------------------\n\n");
    fprintf(fp, buf);
    fclose(fp);
*/
#endif
}

LandXML* DocumentImpl::loadDataFromDOMTree(xmlDocPtr doc)
{	
	LX::Cargador cargador(this);
    
    // Get the root element node for "LandXML"
    xmlNodePtr root_element = xmlDocGetRootElement(doc);

	return cargador.LoadLandXML(root_element);
}

LandXML* DocumentImpl::rootObject () const
{
    return m_pRoot;
}

LandXML* DocumentImpl::setRootObject (
    LandXML* pNewRoot) 
{
    // Check to make sure the new root was created using this document.
    if (pNewRoot->getDocument() != dynamic_cast<Document*>(this))
        throw Exception(Exception::kObjectDoesNotBelongToDocument, L"Object was not instantiated with this document.");

    // LandXML* oldRoot = m_pRoot;
    m_pRoot = pNewRoot;
    return m_pRoot;
}

ILxNode* DocumentImpl::generateNodeTree () const
{
	if (m_pRoot)
		return new LandXMLNode(m_pRoot);

	return NULL;
}

IFactory*  DocumentImpl::getFactory ()
{
    return m_pFactory;
}

GlobalNamedObjects& DocumentImpl::getGlobalObjects () 
{
    return m_globalObjs;
}


GlobalNamedObjectsImpl& DocumentImpl::getGlobalObjectsImpl () 
{
    return m_globalObjs;
}

void DocumentImpl::toXml (IStream& stream)
{
    stream.write(L"<?xml version=\"1.0\"?>\n");
    m_pRoot->toXml(stream);
}

void DocumentImpl::release ()
{
    delete this;
}

xmlDocPtr DocumentImpl::getDOMDocument()
{
	return m_domDoc;
}

short DocumentImpl::releaseDOMDocument()
{
    /*free the document */
    xmlFreeDoc(m_domDoc);
    
    /*
     *Free the global variables that may
     *have been allocated by the parser.
     */
    xmlCleanupParser();
    
    m_domDoc=NULL;

	return 1;
}

const wchar_t* DocumentImpl::kstrDefaultNamespaceUri = L"http://www.landxml.org/schema/LandXML-1.2";


};
