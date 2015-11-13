#if !defined(__LX_IIDENTIFIABLE_H)
#define __LX_IIDENTIFIABLE_H
/////////////////////////////////////////////////////////////////////////////
//
// File: IIdentifiable.h
//
// Description: 
//		Contains the template header for the IIdentifiable interface.
//
/////////////////////////////////////////////////////////////////////////////

#include "LXDefs.h"
#include "ObjectTmpl.h"

namespace LX
{

/////////////////////////////////////////////////////////////////////////////
//
// Class: IIdentifiable
//
// Description: 
//      This is the interface is used to return the identified name or key
//      of an object and of course to indicate the object has an name
//
//      More or less this is the strong typed id interface whereas the 
//      the parent class IIdentity is not strongly typed.  This interface
//      is used internally by the named object collections to has the identity
//      to the object.
//
// Template Parameters
//      T_Id : 
//          The Id type (String, int, etc),  Must implment default constructor
//          copy, equals, less than, etc...
//
/////////////////////////////////////////////////////////////////////////////
template<class T_Id>
class IIdentifiable 
{
public:	
	virtual bool getObjectId(const T_Id*& pId) const = 0;
};

}; // End namespace

#endif