#if !defined(__LX_DOCUMENTIMPL_H)
#define __LX_DOCUMENTIMPL_H
/////////////////////////////////////////////////////////////////////////////
//
// File: Document.h
//
// Description: 
//		Contains the definition of the Document object 
//
/////////////////////////////////////////////////////////////////////////////

#include "LXDefs.h"
#include "IParserEventSink.h"
#include "IFactory.h"
#include "ILxNode.h"
#include "LXNodes.h"
#include "GlobalNamedObjectsImpl.h"

#include <xercesc/dom/DOM.hpp>
#include "Document.h"

#include <xercesc/dom/DOMImplementation.hpp>
#include <xercesc/dom/DOMImplementationLS.hpp>
#include <xercesc/dom/DOMWriter.hpp>
#include <xercesc/framework/StdOutFormatTarget.hpp>
#include <xercesc/framework/LocalFileFormatTarget.hpp>
#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/util/XMLUni.hpp>


namespace LX
{
class LandXML;

/////////////////////////////////////////////////////////////////////////////
//
// Class: DocumentImpl
//
// Description:
//		
/////////////////////////////////////////////////////////////////////////////
class DocumentImpl : public Document
{
public:
	const static wchar_t* kstrDefaultNamespaceUri;

    DocumentImpl ();

	DocumentImpl (
		const wchar_t* strURL, 
		IParserEventSink* pEventSink = NULL);

    virtual ~DocumentImpl ();

	virtual void loadXml (
		const wchar_t* strURL);

	virtual void loadXml (
		const wchar_t* strURL, 
		IParserEventSink* pEventSink);

 	virtual ILxNode* generateNodeTree () const; 

	virtual GlobalNamedObjects& getGlobalObjects ();

    virtual GlobalNamedObjectsImpl& getGlobalObjectsImpl ();

    virtual IFactory* getFactory ();

    virtual LandXML* rootObject () const;

    virtual void toXml (
		IStream& stream);


    virtual LandXML* setRootObject (LandXML* pRootObj);

	virtual LandXML* DocumentImpl::loadDataFromDOMTree(XERCES_CPP_NAMESPACE::DOMDocument* doc);

    virtual void release ();

	virtual short releaseDOMDocument();

	virtual XERCES_CPP_NAMESPACE::DOMDocument* getDOMDocument();

private:
    void initialize ();

    LandXML* m_pRoot;
    IFactory* m_pFactory;
    GlobalNamedObjectsImpl m_globalObjs;
	XERCES_CPP_NAMESPACE::DOMDocument* m_domDoc;

};

};

#endif


