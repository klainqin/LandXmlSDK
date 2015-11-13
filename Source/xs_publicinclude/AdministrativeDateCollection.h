#if !defined(__ADMINISTRATIVEDATECOLLECTION_H)
#define __ADMINISTRATIVEDATECOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "AdministrativeDate.h"
namespace LX
{

// Iterator : AdministrativeDateCollection
class AdministrativeDateCollectionIterator : public Iterator<AdministrativeDate*>
{
};

class AdministrativeDateCollectionConstIterator : public ConstIterator<AdministrativeDate>
{
};

// Collection : AdministrativeDateCollection
class AdministrativeDateCollection : public ObjList<AdministrativeDate, AdministrativeDateCollectionIterator, AdministrativeDateCollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
