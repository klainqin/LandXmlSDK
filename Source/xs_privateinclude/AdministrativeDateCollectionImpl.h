#if !defined(__ADMINISTRATIVEDATECOLLECTIONIMPL_H)
#define __ADMINISTRATIVEDATECOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "AdministrativeDate.h"
#include "AdministrativeDateCollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "AdministrativeDateImpl.h"
#endif

namespace LX
{
AdministrativeDateCollection* createAdministrativeDateCollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : AdministrativeDateCollectionImpl
class AdministrativeDateCollectionImpl : public ObjListTmpl<AdministrativeDate, AdministrativeDateCollection, AdministrativeDateCollectionIterator, AdministrativeDateCollectionConstIterator>
{
public:
    AdministrativeDateCollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
