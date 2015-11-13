#if !defined(__STARTIMPL_H)
#define __STARTIMPL_H

#include "StartTmpl.h"
namespace LX
{


class StartImpl : public StartTmpl<Start>
{
public:
    StartImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
