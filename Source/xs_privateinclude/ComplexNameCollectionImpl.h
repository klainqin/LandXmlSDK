#if !defined(__COMPLEXNAMECOLLECTIONIMPL_H)
#define __COMPLEXNAMECOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "ComplexName.h"
#include "ComplexNameCollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "ComplexNameImpl.h"
#endif

namespace LX
{
ComplexNameCollection* createComplexNameCollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : ComplexNameCollectionImpl
class ComplexNameCollectionImpl : public ObjListTmpl<ComplexName, ComplexNameCollection, ComplexNameCollectionIterator, ComplexNameCollectionConstIterator>
{
public:
    ComplexNameCollectionImpl::ComplexNameCollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
