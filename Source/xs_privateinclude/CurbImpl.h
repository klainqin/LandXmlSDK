#if !defined(__CURBIMPL_H)
#define __CURBIMPL_H

#include "CurbTmpl.h"
namespace LX
{


class CurbImpl : public CurbTmpl<Curb>
{
public:
    CurbImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
