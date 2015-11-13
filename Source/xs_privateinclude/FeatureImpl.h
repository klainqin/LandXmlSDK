#if !defined(__FEATUREIMPL_H)
#define __FEATUREIMPL_H

#include "FeatureTmpl.h"
namespace LX
{


class FeatureImpl : public FeatureTmpl<Feature>
{
public:
    FeatureImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
