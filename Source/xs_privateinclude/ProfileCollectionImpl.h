#if !defined(__PROFILECOLLECTIONIMPL_H)
#define __PROFILECOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "Profile.h"
#include "ProfileCollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "ProfileImpl.h"
#endif

namespace LX
{
ProfileCollection* createProfileCollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : ProfileCollectionImpl
class ProfileCollectionImpl : public NamedObjMultiMapTmpl<Profile, ProfileCollection, String, ProfileCollectionIterator, ProfileCollectionConstIterator>
{
public:
    ProfileCollectionImpl::ProfileCollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
