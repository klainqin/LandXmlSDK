#if !defined(__PIMPL_H)
#define __PIMPL_H

#include "PTmpl.h"
namespace LX
{


class PImpl : public PTmpl<P>
{
public:
    PImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
