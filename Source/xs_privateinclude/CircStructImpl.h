#if !defined(__CIRCSTRUCTIMPL_H)
#define __CIRCSTRUCTIMPL_H

#include "CircStructTmpl.h"
namespace LX
{


class CircStructImpl : public CircStructTmpl<CircStruct>
{
public:
    CircStructImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
