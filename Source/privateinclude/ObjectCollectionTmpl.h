#if !defined(__LX_OBJECTCOLLECTIONTMPL_H)
#define __LX_OBJECTCOLLECTIONTMPL_H

#include "LXDefs.h"
#include "LXString.h"
#include "Object.h"
#include "NamedObjMultiMapTmpl.h"
#include "ObjectCollection.h"


namespace LX
{

template <class T>
class ObjectCollectionTmpl : public NamedObjMultiMapTmpl<Object, T, String, ObjectCollectionIterator, ObjectCollectionConstIterator>
{
};

}; // End LX namespace

#endif
