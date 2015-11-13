#if !defined(__BACKSIGHTPOINTIMPL_H)
#define __BACKSIGHTPOINTIMPL_H

#include "BacksightPointTmpl.h"
namespace LX
{


class BacksightPointImpl : public BacksightPointTmpl<BacksightPoint>
{
public:
    BacksightPointImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
