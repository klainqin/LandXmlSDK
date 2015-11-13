#include "stdafx.h"

#include "LXDefs.h"
#include "Object.h"
#include "ValueTypeObjects.h"

// inlines 
#include "ValueTypeObjectsTmpl.inl"

/////////////////////////////////////////////////////////////////////////////
//
// File: ValueTypesObjectsImpl.cpp
//
// Description: 
//		Contains the expanded implementaions of all the value type 
//      template objects.
//
/////////////////////////////////////////////////////////////////////////////

// Explicity Instantiate the the value type templates
namespace LX
{
template StringObjectTmpl<StringObject>;
template DoubleObjectTmpl<DoubleObject>;
template IntegerObjectTmpl<IntegerObject>;
template BooleanObjectTmpl<BooleanObject>;
template UIntegerObjectTmpl<UIntegerObject>;
};

