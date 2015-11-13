#if !defined(__PERSONNELCOLLECTION_H)
#define __PERSONNELCOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "Personnel.h"
namespace LX
{

// Iterator : PersonnelCollection
class PersonnelCollectionIterator : public Iterator<Personnel*>
{
};

class PersonnelCollectionConstIterator : public ConstIterator<Personnel>
{
};

// Collection : PersonnelCollection
class PersonnelCollection : public Map<Personnel, String, PersonnelCollectionIterator, PersonnelCollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
