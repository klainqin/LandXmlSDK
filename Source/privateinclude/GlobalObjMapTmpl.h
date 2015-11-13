#if !defined(__LX_GLOBALOBJMAPTMPL_H)
#define __LX_GLOBALOBJMAPTMPL_H
/////////////////////////////////////////////////////////////////////////////
//
// File: GlobalObjMapTmpl.h
//
// Description: 
//
/////////////////////////////////////////////////////////////////////////////

#include "LXDefs.h"
#include "NamedObjMapTmpl.h"
#include "Map.h"

namespace LX
{

template <class T_Obj, class T_Base, class T_Id, class T_Iterator, class T_ConstIterator>
class GlobalObjMapTmpl : public NamedObjMapTmpl<T_Obj, T_Base, T_Id, T_Iterator, T_ConstIterator>
{
protected:	

	typedef Map<T_Obj, T_Id, T_Iterator, T_ConstIterator> object_map_t;

    // Callbacks for derived classes.
    virtual void itemPreAdd (T_Obj* pObject);

    virtual void itemAdded (XRefItem* pItem);

    virtual void itemRemoved (T_Obj* pObject);

    object_map_t* getObjectsGlobalCollection (
        ICollectable* pCollectable);   

};

}; // End Namespace.

#endif
  