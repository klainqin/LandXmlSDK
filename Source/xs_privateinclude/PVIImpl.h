#if !defined(__PVIIMPL_H)
#define __PVIIMPL_H

#include "PVITmpl.h"
namespace LX
{


class PVIImpl : public PVITmpl<PVI>
{
public:
    PVIImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
