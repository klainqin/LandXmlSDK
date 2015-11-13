#if !defined(__DRIVEWAYDENSITYCOLLECTIONIMPL_H)
#define __DRIVEWAYDENSITYCOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "DrivewayDensity.h"
#include "DrivewayDensityCollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "DrivewayDensityImpl.h"
#endif

namespace LX
{
DrivewayDensityCollection* createDrivewayDensityCollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : DrivewayDensityCollectionImpl
class DrivewayDensityCollectionImpl : public ObjListTmpl<DrivewayDensity, DrivewayDensityCollection, DrivewayDensityCollectionIterator, DrivewayDensityCollectionConstIterator>
{
public:
    DrivewayDensityCollectionImpl::DrivewayDensityCollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
