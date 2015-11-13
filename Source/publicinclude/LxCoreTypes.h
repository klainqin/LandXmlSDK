#if !defined(__LXCORETYPES_H)
#define __LXCORETYPES_H


// I hate disabling warnings but...
// This is to disable the "name being truncated to 255 characters for debug info"
// warning that gets spit out when using STL.  This was hiding "real" problems.
#pragma warning( disable : 4786)


#include "Object.h"
#include "ObjList.h"
#include "Map.h"
#include "ValueTypeObjects.h"
#include "ValueCollectionObjects.h"
#include "ObjectCollection.h"
 
#endif
  