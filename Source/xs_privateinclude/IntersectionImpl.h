#if !defined(__INTERSECTIONIMPL_H)
#define __INTERSECTIONIMPL_H

#include "IntersectionTmpl.h"
namespace LX
{


class IntersectionImpl : public IntersectionTmpl<Intersection>
{
public:
    IntersectionImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
