#if !defined(__DESIGNSPEEDCOLLECTIONIMPL_H)
#define __DESIGNSPEEDCOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "DesignSpeed.h"
#include "DesignSpeedCollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "DesignSpeedImpl.h"
#endif

namespace LX
{
DesignSpeedCollection* createDesignSpeedCollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : DesignSpeedCollectionImpl
class DesignSpeedCollectionImpl : public ObjListTmpl<DesignSpeed, DesignSpeedCollection, DesignSpeedCollectionIterator, DesignSpeedCollectionConstIterator>
{
public:
    DesignSpeedCollectionImpl::DesignSpeedCollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
