#if !defined(__FEATURECOLLECTIONIMPL_H)
#define __FEATURECOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "Feature.h"
#include "FeatureCollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "FeatureImpl.h"
#endif

namespace LX
{
FeatureCollection* createFeatureCollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : FeatureCollectionImpl
class FeatureCollectionImpl : public NamedObjMultiMapTmpl<Feature, FeatureCollection, String, FeatureCollectionIterator, FeatureCollectionConstIterator>
{
public:
    FeatureCollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
