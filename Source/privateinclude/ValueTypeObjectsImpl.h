#if !defined(__LX_VALUETYPESOBJECTSIMPL_H)
#define __LX_VALUETYPESOBJECTSIMPL_H

#include "stdafx.h"

#include "ValueTypeObjects.h"
#include "ValueTypeObjectsTmpl.h"

/////////////////////////////////////////////////////////////////////////////
//
// File: ValueTypesObjectsImpl.h
//
// Description: 
//		Contains the expanded headers of all the value type 
//      template objects.
//
/////////////////////////////////////////////////////////////////////////////

// Explicity Instantiate the the value type templates
namespace LX
{
typedef StringObjectTmpl<StringObject> StringObjectImpl;
typedef DoubleObjectTmpl<DoubleObject> DoubleObjectImpl;
typedef IntegerObjectTmpl<IntegerObject> IntegerObjectImpl;
typedef BooleanObjectTmpl<BooleanObject> BooleanObjectImpl;
typedef UIntegerObjectTmpl<UIntegerObject> UIntegerObjectImpl;
};

#endif
