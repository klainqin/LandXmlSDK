#if !defined(__LX_OBJCOLLECTIONTMPL_H)
#define __LX_OBJCOLLECTIONTMPL_H
/////////////////////////////////////////////////////////////////////////////
//
// File: List.h
//
// Description: 
//		Contains the CollectionObject class definition.
//
/////////////////////////////////////////////////////////////////////////////

#include "LXDefs.h"
#include "ObjectTmpl.h"
#include "Iterator.h"
#include "ICollectable.h"
#include "CollectionLocation.h"

#include <list>

namespace LX
{

/////////////////////////////////////////////////////////////////////////////
//
// Class: ObjCollectionTmpl
//
// Description: 
//      The ObjCollectionTmpl is the base class for all the object
//      collections in the SDK (not scalar collections).  
//      
//      It mainly provides some core needed methods
//      used by all the object collections.
//
// Template Parameters
//      T_Obj : 
//          The object being stored in the collection
//      T_Base : 
//          The base interface being implemented.
//
/////////////////////////////////////////////////////////////////////////////
template<class T_Obj, class T_Base>
class ObjCollectionTmpl : public ObjectTmpl<T_Base>
{
protected:	
    ICollectable* castObjectToICollectable (
	    T_Obj* pObject) const;
};

}; // End Namespace.

#endif
