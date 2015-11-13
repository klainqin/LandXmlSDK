#if !defined(__HAZARDRATINGIMPL_H)
#define __HAZARDRATINGIMPL_H

#include "HazardRatingTmpl.h"
namespace LX
{


class HazardRatingImpl : public HazardRatingTmpl<HazardRating>
{
public:
    HazardRatingImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
