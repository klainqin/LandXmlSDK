#if !defined(__INTERSECTIONSIMPL_H)
#define __INTERSECTIONSIMPL_H

#include "IntersectionsTmpl.h"
namespace LX
{


class IntersectionsImpl : public IntersectionsTmpl<Intersections>
{
public:
    IntersectionsImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
