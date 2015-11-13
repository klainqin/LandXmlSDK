#if !defined(__CONTOURCOLLECTIONIMPL_H)
#define __CONTOURCOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "Contour.h"
#include "ContourCollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "ContourImpl.h"
#endif

namespace LX
{
ContourCollection* createContourCollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : ContourCollectionImpl
class ContourCollectionImpl : public ObjListTmpl<Contour, ContourCollection, ContourCollectionIterator, ContourCollectionConstIterator>
{
public:
    ContourCollectionImpl::ContourCollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
