#if !defined(__LX_ICOLLECTABLE_H)
#define __LX_ICOLLECTABLE_H
/////////////////////////////////////////////////////////////////////////////
//
// File: ICollectable.h
//
// Description: 
//      Contains the definition of the ICollectable interface.
//
/////////////////////////////////////////////////////////////////////////////
#include "LXDefs.h"
#include "CollectionLocation.h"

namespace LX
{

/////////////////////////////////////////////////////////////////////////////
//
// Class: ICollectable
//
// Description: 
//      The ICollectable interface must the implemented by any object that
//      wishes to be able to be contained in any of APIs collections 
//      (ObjList, NamedObjMap, etc).  
//
//      Basically this interface enables to collection to "bind" itself
//      to the added object through a CollectionLocation.  This also 
//      prevents the object from being added to more than one collection.
//     
//      When an object is added to one of the above collections, the collection
//      must bind itself to the object by call the setContainingCollectionLocation
//      with a CollectionLocation object.  When an object is removed from the 
//      collection, the collection should unbind itself from the object by 
//      calling the setContaingCollectionLocation with NULL.  The collections
//      should also forbid any objects from being added when the 
//      getContainingCollectionLocation method does not return a NULL.
//
/////////////////////////////////////////////////////////////////////////////
class ICollectable
{
public:
    virtual void setContainingCollectionLocation (
        CollectionLocation* pLocation) = 0;

    virtual CollectionLocation* getContainingCollectionLocation () = 0;

    virtual Object* getGlobalCollection () = 0;
};

}; // End Namespace.
 
#endif
  