#if !defined(__LX_COLLECTABLEOBJMAPTMPL_H)
#define __LX_COLLECTABLEOBJMAPTMPL_H
/////////////////////////////////////////////////////////////////////////////
//
// File: CollectableObjMapTmpl.h
//
// Description: 
//
/////////////////////////////////////////////////////////////////////////////

#include "LXDefs.h"
#include "NamedObjMapTmpl.h"

namespace LX
{

template <class T_Obj, class T_Base, class T_Id, class T_Iterator, class T_ConstIterator>
class CollectableObjMapTmpl : public NamedObjMapTmpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>
{
protected:	
    // Callbacks for derived classes.
    virtual void itemPreAdd (T_Obj* pObject);

    virtual void itemAdded (XRefItem* pItem);

    virtual void itemRemoved (T_Obj* pObject);
};

}; // End Namespace.

#endif
  