#if !defined(__AMENDMENTITEMIMPL_H)
#define __AMENDMENTITEMIMPL_H

#include "AmendmentItemTmpl.h"
namespace LX
{


class AmendmentItemImpl : public AmendmentItemTmpl<AmendmentItem>
{
public:
    AmendmentItemImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
