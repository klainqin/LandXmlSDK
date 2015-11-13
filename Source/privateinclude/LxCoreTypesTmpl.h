#if !defined(__LXCORETYPESTMPL_H)
#define __LXCORETYPESTMPL_H


// I hate disabling warnings but...
// This is to disable the "name being truncated to 255 characters for debug info"
// warning that gets spit out when using STL.  This was hiding "real" problems.
#pragma warning( disable : 4786)


#include "ObjectTmpl.h"
#include "ObjListTmpl.h"
#include "IIdentifiable.h"
#include "NamedCollectionLocation.h"
#include "NamedObjMultiMapTmpl.h"
#include "NamedObjMapTmpl.h"
#include "CollectableObjMapTmpl.h"
#include "GlobalObjMapTmpl.h"
#include "ValueTypeObjectsTmpl.h"
#include "ValueCollectionObjectsTmpl.h"
#include "ObjectCollectionTmpl.h"
 
#endif
  