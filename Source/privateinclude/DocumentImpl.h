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

#include "Document.h"
#include <libxml/parser.h>
#include <libxml/tree.h>


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

	virtual LandXML* loadDataFromDOMTree(xmlDocPtr doc);

    virtual void release ();

	virtual short releaseDOMDocument();

	virtual xmlDocPtr getDOMDocument();

private:
    void initialize ();

    LandXML* m_pRoot;
    IFactory* m_pFactory;
    GlobalNamedObjectsImpl m_globalObjs;
    xmlDocPtr m_domDoc;
	//XERCES_CPP_NAMESPACE::DOMDocument* m_domDoc;

};

};

#endif


