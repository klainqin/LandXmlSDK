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
#include "windows.h"
#include "Exception.h"

#include "FactoryImpl.h"
#include "LandXML.h"
#include "cargador.h"
#include "LXEnumTypesImpl.h"

#include <xercesc/dom/DOM.hpp>
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

	XERCES_CPP_NAMESPACE::XMLPlatformUtils::Terminate();
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

	XERCES_CPP_NAMESPACE::XMLPlatformUtils::Initialize();
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
	wchar_t* strURLCopy = NULL;

	// Copy the const into a local string.
	strURLCopy = new wchar_t[wcslen(strURL) + 1];
	wcscpy(strURLCopy, strURL);		

	//this section is used to load file into a DOM tree.

	XERCES_CPP_NAMESPACE::XercesDOMParser *parser = NULL;
	parser = new XERCES_CPP_NAMESPACE::XercesDOMParser;

	if (parser)
	{

	
/*	
		unsigned long dwStartTime, dwEndTime, dwThirdTime;
	#ifdef _DEBUG
		FILE* fp = fopen("c:\\temp\\LandXMLSDK_time08D.txt", "a");
	#else
		FILE* fp = fopen("c:\\temp\\LandXMLSDK08_time.txt", "a");
	#endif
*/
//		dwStartTime = GetTickCount();
	

		parser->parse((XMLCh*)(strURLCopy));
	   
		m_domDoc = parser->getDocument();

//		dwEndTime = GetTickCount();

		if (m_domDoc)
			m_pRoot = loadDataFromDOMTree(m_domDoc);

//		dwThirdTime	= GetTickCount();

		delete parser;
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
	}

	



	if (strURLCopy)
		delete [] strURLCopy;
 }

LandXML* DocumentImpl::loadDataFromDOMTree(XERCES_CPP_NAMESPACE::DOMDocument* doc)
{	
	LX::Cargador cargador(this);
    
    XERCES_CPP_NAMESPACE::DOMNodeList *nList    = NULL;
    XERCES_CPP_NAMESPACE::DOMElement *elem      = NULL;

    nList = doc->getElementsByTagName((XMLCh*)(L"LandXML"));
    
    if (nList->getLength() > 0)
         elem = static_cast<XERCES_CPP_NAMESPACE::DOMElement*>(nList->item(0));

	return cargador.LoadLandXML(elem);	
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

    LandXML* oldRoot = m_pRoot;
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

XERCES_CPP_NAMESPACE::DOMDocument* DocumentImpl::getDOMDocument()
{
	return m_domDoc;
}

short DocumentImpl::releaseDOMDocument()
{
	m_domDoc=NULL;

	return 1;
}

const wchar_t* DocumentImpl::kstrDefaultNamespaceUri = L"http://www.landxml.org/schema/LandXML-1.2";


};
