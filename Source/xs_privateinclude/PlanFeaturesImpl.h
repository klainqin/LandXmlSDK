#if !defined(__PLANFEATURESIMPL_H)
#define __PLANFEATURESIMPL_H

#include "PlanFeaturesTmpl.h"
namespace LX
{


class PlanFeaturesImpl : public PlanFeaturesTmpl<PlanFeatures>
{
public:
    PlanFeaturesImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
