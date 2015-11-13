#if !defined(__LX_OBJCOLLECTIONTMPL_INL)
#define __LX_OBJCOLLECTIONTMPL_INL

#include "LXDefs.h"
#include "ObjCollectionTmpl.h"
#include "Exception.h"

#include "ObjectTmpl.inl"


namespace LX
{
template<class T_Obj, class T_Base>
ICollectable* ObjCollectionTmpl<T_Obj, T_Base>::castObjectToICollectable (
	T_Obj* pObject) const
{
    ICollectable* pCollectable = dynamic_cast<ICollectable*>(pObject);

    if (!pCollectable)
    {
        throw Exception(Exception::kInvalidCollectionItem, L"Item does not implement the ICollectable interface.");
    }

    return pCollectable;
}

}; // End namespace LX
 
#endif