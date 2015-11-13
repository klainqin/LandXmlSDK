#if !defined(__PERSONNELCOLLECTIONIMPL_H)
#define __PERSONNELCOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "Personnel.h"
#include "PersonnelCollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "PersonnelImpl.h"
#endif

namespace LX
{
PersonnelCollection* createPersonnelCollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : PersonnelCollectionImpl
class PersonnelCollectionImpl : public NamedObjMultiMapTmpl<Personnel, PersonnelCollection, String, PersonnelCollectionIterator, PersonnelCollectionConstIterator>
{
public:
    PersonnelCollectionImpl::PersonnelCollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
