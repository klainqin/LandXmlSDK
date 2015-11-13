#if !defined(__ADMINISTRATIVEAREACOLLECTIONIMPL_H)
#define __ADMINISTRATIVEAREACOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "AdministrativeArea.h"
#include "AdministrativeAreaCollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "AdministrativeAreaImpl.h"
#endif

namespace LX
{
AdministrativeAreaCollection* createAdministrativeAreaCollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : AdministrativeAreaCollectionImpl
class AdministrativeAreaCollectionImpl : public ObjListTmpl<AdministrativeArea, AdministrativeAreaCollection, AdministrativeAreaCollectionIterator, AdministrativeAreaCollectionConstIterator>
{
public:
    AdministrativeAreaCollectionImpl::AdministrativeAreaCollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
