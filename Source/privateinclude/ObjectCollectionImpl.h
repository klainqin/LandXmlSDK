#if !defined(__LX_OBJECTCOLLECTIONIMPL_H)
#define __LX_OBJECTCOLLECTIONIMPL_H

#include "LXDefs.h"
#include "LXString.h"
#include "ObjectCollection.h"
#include "ObjectCollectionTmpl.h"


namespace LX
{
ObjectCollection* createObjectCollectionObject (DocumentImpl* pDocument);

class ObjectCollectionImpl : public ObjectCollectionTmpl<ObjectCollection>
{
public:
    ObjectCollectionImpl (DocumentImpl* pDocument);
};

}; // End LX namespace

#endif
