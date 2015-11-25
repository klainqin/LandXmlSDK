#if !defined(__LX_VALUEOBJECTTMPL_H)
#define __LX_VALUEOBJECTTMPL_H

#include "LXDefs.h"
#include "LXString.h"
#include "ObjectTmpl.h"

/////////////////////////////////////////////////////////////////////////////
//
// File: ValueObject.h
//
// Description: 
//		Contains the definition of the for the ValueObject type
//
// $History: ValueObject.h $
//
/////////////////////////////////////////////////////////////////////////////

#pragma warning (push)
#pragma warning (disable : 4710) // ? not inlined/

namespace LX
{

template <class T>
class ValueObjectTmpl : public ObjectTmpl<T>
{
public:
	ValueObjectTmpl ();

    ValueObjectTmpl (
        DocumentImpl* pDoc);
    
    virtual ~ValueObjectTmpl();

	bool isNothing () const;

	void setToNothing ();

protected:
	bool m_bNothing;
};

#pragma warning (pop)

}; // Namespace LX

#endif // __LX_VALUEOBJECT_H