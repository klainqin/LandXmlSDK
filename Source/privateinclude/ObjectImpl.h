#if !defined(__LX_OBJECTIMPL_H)
#define __LX_OBJECTIMPL_H

#include "LXDefs.h"
#include "IStream.h"
#include "LXString.h"
#include "Object.h"
#include "ObjectTmpl.h"

/////////////////////////////////////////////////////////////////////////////
//
// File: ObjectImpl.h
//
// Description: 
//		Contains the definition of the ObjectImpl class
//
/////////////////////////////////////////////////////////////////////////////

namespace LX
{
typedef ObjectTmpl<Object> ObjectImpl;

};

#endif