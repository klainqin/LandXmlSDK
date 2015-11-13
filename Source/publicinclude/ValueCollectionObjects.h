#if !defined(__LX_VALUECOLLECTIONOBJECTS_H)
#define __LX_VALUECOLLECTIONOBJECTS_H

#include "LXDefs.h"
#include "LXString.h"
#include "ValueTypeObjects.h"
#include "IndexedListValueCollection.h"

namespace LX {

#pragma warning (push)
#pragma warning (disable: 4786 4231 4710) 
									 // Disabling : Debug symbol length exceedeing 256.
									 // Disabling : nonstandard extension used : 'extern' before template explicit instantiation
									 // Disabling : ? not inlined

template class IndexedListValueCollection<int>;
template class IndexedListValueCollection<unsigned int>;
template class IndexedListValueCollection<String>;
template class IndexedListValueCollection<double>;

// Collection : IntegerCollection
typedef IndexedListValueCollection<int> IntegerCollection;

// Collection : IntegerCollection
typedef IndexedListValueCollection<unsigned int> UIntegerCollection;

// Collection : StringCollection
typedef IndexedListValueCollection<String> StringCollection;

// Collection : DoubleCollection
typedef IndexedListValueCollection<double> DoubleCollection;

#pragma warning(pop)
}; // End LX namespace

#endif
