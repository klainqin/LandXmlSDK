#if !defined(__LX_VALUECOLLECTIONOBJECTSIMPL_H)
#define __LX_VALUECOLLECTIONOBJECTSIMPL_H

#include "ValueCollectionObjectsTmpl.h"
#include "ValueCollectionObjects.h"

namespace LX {

// Collection : IntegerCollectionImpl
typedef IndexedListValueCollectionTmpl<int, IntegerCollection, IntegerObjectImpl> IntegerCollectionImpl;

// Collection : UIntegerCollectionImpl
typedef IndexedListValueCollectionTmpl<unsigned int, UIntegerCollection, UIntegerObjectImpl> UIntegerCollectionImpl;

// Collection : StringCollectionImpl
typedef IndexedListValueCollectionTmpl<String, StringCollection, StringObjectImpl> StringCollectionImpl;

// Collection : DoubleCollectionImpl
typedef IndexedListValueCollectionTmpl<double, DoubleCollection,DoubleObjectImpl> DoubleCollectionImpl;

}; // End LX namespace

#endif
