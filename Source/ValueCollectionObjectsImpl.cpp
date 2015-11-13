#include "stdafx.h"

#include "LXDefs.h"
#include "Object.h"
#include "IndexedListValueCollectionTmpl.inl"
#include "ValueCollectionObjectsImpl.h"

namespace LX
{
// Collection : IntegerCollectionImpl
template IndexedListValueCollectionTmpl<int, IntegerCollection, IntegerObjectImpl>;

// Collection : UIntegerCollectionImpl
template IndexedListValueCollectionTmpl<unsigned int, UIntegerCollection, UIntegerObjectImpl>;

// Collection : StringCollectionImpl
template IndexedListValueCollectionTmpl<String, StringCollection, StringObjectImpl>;

// Collection : DoubleCollectionImpl
template IndexedListValueCollectionTmpl<double, DoubleCollection,DoubleObjectImpl>;

} // End Namespace