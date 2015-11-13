#if !defined(__AMENDMENTIMPL_H)
#define __AMENDMENTIMPL_H

#include "AmendmentTmpl.h"
namespace LX
{


class AmendmentImpl : public AmendmentTmpl<Amendment>
{
public:
    AmendmentImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
