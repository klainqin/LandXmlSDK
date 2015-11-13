#if !defined(__FEATURECOLLECTION_H)
#define __FEATURECOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "Feature.h"
namespace LX
{

// Iterator : FeatureCollection
class FeatureCollectionIterator : public Iterator<Feature*>
{
};

class FeatureCollectionConstIterator : public ConstIterator<Feature>
{
};

// Collection : FeatureCollection
class FeatureCollection : public Map<Feature, String, FeatureCollectionIterator, FeatureCollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
