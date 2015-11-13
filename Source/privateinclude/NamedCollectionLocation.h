#if !defined(__LX_NAMEDCOLLECTIONLOCATION_H)
#define __LX_NAMEDCOLLECTIONLOCATION_H

#include "LXDefs.h"
#include "CollectionLocation.h"

namespace LX
{

class NamedCollectionLocation : public CollectionLocation
{
public:
    virtual bool objectCheckNewName () = 0;
    virtual bool objectRenamed () = 0;
    virtual void objectRemoved () = 0;
};

}; // End Namespace.

 
#endif
  