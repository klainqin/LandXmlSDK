#if !defined(__PROPERTYCOLLECTION_H)
#define __PROPERTYCOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "Property.h"
namespace LX
{

// Iterator : PropertyCollection
class PropertyCollectionIterator : public Iterator<Property*>
{
};

class PropertyCollectionConstIterator : public ConstIterator<Property>
{
};

// Collection : PropertyCollection
class PropertyCollection : public ObjList<Property, PropertyCollectionIterator, PropertyCollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
