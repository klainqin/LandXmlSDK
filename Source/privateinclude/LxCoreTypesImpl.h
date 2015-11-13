#if !defined(__LXCORETYPESIMPL_H)
#define __LXCORETYPESIMPL_H


// I hate disabling warnings but...
// This is to disable the "name being truncated to 255 characters for debug info"
// warning that gets spit out when using STL.  This was hiding "real" problems.
#pragma warning( disable : 4786)


#include "ObjectImpl.h"
#include "DocumentImpl.h"
#include "ValueTypeObjectsImpl.h"
#include "ValueCollectionObjectsImpl.h"
#include "ObjectCollectionImpl.h"
 
#endif
  