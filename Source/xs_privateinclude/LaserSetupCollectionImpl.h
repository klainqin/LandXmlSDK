#if !defined(__LASERSETUPCOLLECTIONIMPL_H)
#define __LASERSETUPCOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "LaserSetup.h"
#include "LaserSetupCollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "LaserSetupImpl.h"
#endif

namespace LX
{
LaserSetupCollection* createLaserSetupCollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : LaserSetupCollectionImpl
class LaserSetupCollectionImpl : public ObjListTmpl<LaserSetup, LaserSetupCollection, LaserSetupCollectionIterator, LaserSetupCollectionConstIterator>
{
public:
    LaserSetupCollectionImpl::LaserSetupCollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
