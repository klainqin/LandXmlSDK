#if !defined(__RECTSTRUCTIMPL_H)
#define __RECTSTRUCTIMPL_H

#include "RectStructTmpl.h"
namespace LX
{


class RectStructImpl : public RectStructTmpl<RectStruct>
{
public:
    RectStructImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
