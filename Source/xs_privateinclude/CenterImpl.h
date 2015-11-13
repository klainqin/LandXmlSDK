#if !defined(__CENTERIMPL_H)
#define __CENTERIMPL_H

#include "CenterTmpl.h"
namespace LX
{


class CenterImpl : public CenterTmpl<Center>
{
public:
    CenterImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
