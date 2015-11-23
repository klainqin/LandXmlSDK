#if !defined(__PROPERTYCOLLECTIONIMPL_H)
#define __PROPERTYCOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "Property.h"
#include "PropertyCollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "PropertyImpl.h"
#endif

namespace LX
{
PropertyCollection* createPropertyCollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : PropertyCollectionImpl
class PropertyCollectionImpl : public ObjListTmpl<Property, PropertyCollection, PropertyCollectionIterator, PropertyCollectionConstIterator>
{
public:
    PropertyCollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
