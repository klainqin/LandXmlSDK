#if !defined(__WIDENINGLANEIMPL_H)
#define __WIDENINGLANEIMPL_H

#include "WideningLaneTmpl.h"
namespace LX
{


class WideningLaneImpl : public WideningLaneTmpl<WideningLane>
{
public:
    WideningLaneImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
