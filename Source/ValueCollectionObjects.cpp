#include "stdafx.h"

#include "LXDefs.h"
#include "Object.h"
#include "ValueTypeObjects.h"
#include "ValueTypeObjectsImpl.h"
#include "IndexedListValueCollection.h"

// Inlines
#include "IndexedListValueCollectionTmpl.inl"


namespace LX {

// Instantiate the needed value collection templates.
template class IndexedListValueCollectionTmpl<int, IndexedListValueCollection<int>, IntegerObjectImpl>;

//template class IndexedListValueCollectionTmpl<unsigned int, IndexedListValueCollection<unsigned int>, UIntegerObjectImpl>;

//template class IndexedListValueCollectionTmpl<String, IndexedListValueCollection<String>, StringObjectImpl>;

template class IndexedListValueCollectionTmpl<double, IndexedListValueCollection<double>, DoubleObjectImpl>;
}; // End namespace LX

