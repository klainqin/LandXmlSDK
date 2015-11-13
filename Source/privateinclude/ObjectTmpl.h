#if !defined(__LX_OBJECTTMPL_H)
#define __LX_OBJECTTMPL_H

#include "LXDefs.h"
#include "IStream.h"
#include "LXString.h"
#include "Object.h"
#include "ICollectable.h"
#include "CollectionLocation.h"

/////////////////////////////////////////////////////////////////////////////
//
// File: ObjectTmpl.h
//
// Description: 
//		Contains the definition of the ObjectTmpl class.
//
/////////////////////////////////////////////////////////////////////////////

namespace LX
{

class DocumentImpl;

template <class T>
class ObjectTmpl : public T, public ICollectable
{
public:
    ObjectTmpl<T> ();

    ObjectTmpl<T> (DocumentImpl* pDoc);

   	virtual ~ObjectTmpl<T> ();

	virtual void toXml (
		IStream& stream);
        
    virtual void toStream (
		IStream& stream) const;

	virtual String toString () const;

    virtual Document* getDocument ();

    virtual void setContainingCollectionLocation (
        CollectionLocation* pLocation);

    virtual CollectionLocation* getContainingCollectionLocation ();

    virtual Object* getGlobalCollection ();

    virtual Object::ValidityEnum validate(IValidationEventSink* pEventSink) const;

    virtual void release ();

protected:
    DocumentImpl* m_pDoc;
    CollectionLocation* m_pCollectionLocation;
};

};

#endif