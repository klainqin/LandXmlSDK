#if !defined(__LX_VALUECOLLECTIONOBJECTSTMPL_H)
#define __LX_VALUECOLLECTIONOBJECTSTMPL_H

#include "LXDefs.h"
#include "LXString.h"
#include "ValueTypeObjectsImpl.h"
#include "IndexedListValueCollectionTmpl.h"

namespace LX {

#define LX_INDEXED_COLLECTION_CLASS_DEF(TypeName, ItemType, ItemTypeObject) \
template <class T> \
class TypeName : public IndexedListValueCollectionTmpl<ItemType, T, ItemTypeObject> \
{ \
public: \
    typedef TypeName<T>* Type; \
\
    TypeName<T> (); \
    TypeName<T> (DocumentImpl* m_pDoc); \
	TypeName<T> (const TypeName<T>& value); \
    Object::ValidityEnum validate (IValidationEventSink* pEventSink) const; \
};

// Collection : IntegerCollectionTmpl
LX_INDEXED_COLLECTION_CLASS_DEF(IntegerCollectionTmpl, int, IntegerObjectImpl)

// Collection : UIntegerCollectionTmpl
LX_INDEXED_COLLECTION_CLASS_DEF(UIntegerCollectionTmpl, unsigned int, UIntegerObjectImpl)

// Collection : StringCollectionTmpl
LX_INDEXED_COLLECTION_CLASS_DEF(StringCollectionTmpl, String, StringObjectImpl)

// Collection : DoubleCollectionTmpl
LX_INDEXED_COLLECTION_CLASS_DEF(DoubleCollectionTmpl, double, DoubleObjectImpl)

}; // End LX namespace

#endif
