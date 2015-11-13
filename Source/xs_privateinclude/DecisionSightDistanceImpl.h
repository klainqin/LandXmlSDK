#if !defined(__DECISIONSIGHTDISTANCEIMPL_H)
#define __DECISIONSIGHTDISTANCEIMPL_H

#include "DecisionSightDistanceTmpl.h"
namespace LX
{


class DecisionSightDistanceImpl : public DecisionSightDistanceTmpl<DecisionSightDistance>
{
public:
    DecisionSightDistanceImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
