#if !defined(__LXCORETYPESTMPL_INL)
#define __LXCORETYPESTMPL_INL


// I hate disabling warnings but...
// This is to disable the "name being truncated to 255 characters for debug info"
// warning that gets spit out when using STL.  This was hiding "real" problems.
#pragma warning( disable : 4786)


#include "ObjectTmpl.inl"
#include "ValueObjectTmpl.inl"
#include "ObjListTmpl.inl"
#include "NamedObjMapTmpl.inl"
#include "NamedObjMultiMapTmpl.inl"
#include "CollectableObjMapTmpl.inl"
#include "GlobalObjMapTmpl.inl"
#include "ValueTypeObjectsTmpl.inl"
#include "IndexedListValueCollectionTmpl.inl"
#include "ValueCollectionObjectsTmpl.inl"
 
#endif
  