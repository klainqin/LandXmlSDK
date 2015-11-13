#if !defined(__INLETSTRUCTIMPL_H)
#define __INLETSTRUCTIMPL_H

#include "InletStructTmpl.h"
namespace LX
{


class InletStructImpl : public InletStructTmpl<InletStruct>
{
public:
    InletStructImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
