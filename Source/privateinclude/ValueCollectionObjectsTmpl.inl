#include "stdafx.h"

#include "LXDefs.h"
#include "Object.h"
#include "ValueCollectionObjectsTmpl.h"

#include "IndexedListValueCollectionTmpl.inl"

namespace LX
{
#define LX_INDEXED_COLLECTION_CLASS_IMPL(Type, ItemType, ItemTypeObject) \
template <class T> \
Type<T>::Type<T> () \
{ \
} \
\
template <class T> \
Type<T>::Type<T> (DocumentImpl* m_pDoc) \
: IndexedListValueCollectionTmpl<ItemType, T, ItemTypeObject>(m_pDoc) \
{ \
} \
\
template <class T> \
Type<T>::Type<T> (const Type<T>& value) \
: IndexedListValueCollectionTmpl<ItemType, T, ItemTypeObject>(m_pDoc) \
{ \
} \
\
template <class T> \
Object::ValidityEnum Type<T>::validate (IValidationEventSink* pEventSink) const \
{\
    return IndexedListValueCollectionTmpl<ItemType, T, ItemTypeObject>::validate(pEventSink);\
}
    



// Collection : IntegerCollectionTmpl
LX_INDEXED_COLLECTION_CLASS_IMPL(IntegerCollectionTmpl, int, IntegerObjectImpl)

// Collection : UIntegerCollectionTmpl
LX_INDEXED_COLLECTION_CLASS_IMPL(UIntegerCollectionTmpl, unsigned int, UIntegerObjectImpl)

// Collection : StringCollectionTmpl
LX_INDEXED_COLLECTION_CLASS_IMPL(StringCollectionTmpl, String, StringObjectImpl)

// Collection : DoubleCollectionTmpl
LX_INDEXED_COLLECTION_CLASS_IMPL(DoubleCollectionTmpl, double, DoubleObjectImpl)

} // End Namespace