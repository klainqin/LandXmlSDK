#if !defined(__CGPOINTIMPL_H)
#define __CGPOINTIMPL_H

#include "CgPointTmpl.h"
#include "CgPointCollection.h"
namespace LX
{


class CgPointImpl : public CgPointTmpl<CgPoint>
{
public:
    CgPointImpl (DocumentImpl* pDoc);
    Object* getGlobalCollection ();
};
}; // namespace : LX
#endif
