#if !defined(__FACESCOLLECTION_H)
#define __FACESCOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "Faces.h"
namespace LX
{

// Iterator : FacesCollection
class FacesCollectionIterator : public Iterator<Faces*>
{
};

class FacesCollectionConstIterator : public ConstIterator<Faces>
{
};

// Collection : FacesCollection
class FacesCollection : public Map<Faces, String, FacesCollectionIterator, FacesCollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
