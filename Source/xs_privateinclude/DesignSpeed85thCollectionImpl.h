#if !defined(__DESIGNSPEED85THCOLLECTIONIMPL_H)
#define __DESIGNSPEED85THCOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "DesignSpeed85th.h"
#include "DesignSpeed85thCollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "DesignSpeed85thImpl.h"
#endif

namespace LX
{
DesignSpeed85thCollection* createDesignSpeed85thCollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : DesignSpeed85thCollectionImpl
class DesignSpeed85thCollectionImpl : public ObjListTmpl<DesignSpeed85th, DesignSpeed85thCollection, DesignSpeed85thCollectionIterator, DesignSpeed85thCollectionConstIterator>
{
public:
    DesignSpeed85thCollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
