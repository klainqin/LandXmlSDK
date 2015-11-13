#if !defined(__FIMPL_H)
#define __FIMPL_H

#include "FTmpl.h"
namespace LX
{


class FImpl : public FTmpl<F>
{
public:
    FImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
