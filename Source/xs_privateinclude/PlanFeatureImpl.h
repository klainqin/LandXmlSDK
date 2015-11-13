#if !defined(__PLANFEATUREIMPL_H)
#define __PLANFEATUREIMPL_H

#include "PlanFeatureTmpl.h"
namespace LX
{


class PlanFeatureImpl : public PlanFeatureTmpl<PlanFeature>
{
public:
    PlanFeatureImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
