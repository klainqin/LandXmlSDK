#if !defined(__STAEQUATIONCOLLECTIONIMPL_H)
#define __STAEQUATIONCOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "StaEquation.h"
#include "StaEquationCollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "StaEquationImpl.h"
#endif

namespace LX
{
StaEquationCollection* createStaEquationCollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : StaEquationCollectionImpl
class StaEquationCollectionImpl : public ObjListTmpl<StaEquation, StaEquationCollection, StaEquationCollectionIterator, StaEquationCollectionConstIterator>
{
public:
    StaEquationCollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
