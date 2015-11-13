#if !defined(__POINTRESULTSIMPL_H)
#define __POINTRESULTSIMPL_H

#include "PointResultsTmpl.h"
namespace LX
{


class PointResultsImpl : public PointResultsTmpl<PointResults>
{
public:
    PointResultsImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
