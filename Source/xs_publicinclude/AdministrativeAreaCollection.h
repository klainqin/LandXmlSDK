#if !defined(__ADMINISTRATIVEAREACOLLECTION_H)
#define __ADMINISTRATIVEAREACOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "AdministrativeArea.h"
namespace LX
{

// Iterator : AdministrativeAreaCollection
class AdministrativeAreaCollectionIterator : public Iterator<AdministrativeArea*>
{
};

class AdministrativeAreaCollectionConstIterator : public ConstIterator<AdministrativeArea>
{
};

// Collection : AdministrativeAreaCollection
class AdministrativeAreaCollection : public ObjList<AdministrativeArea, AdministrativeAreaCollectionIterator, AdministrativeAreaCollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
