#if !defined(__FULLSUPERELEVIMPL_H)
#define __FULLSUPERELEVIMPL_H

#include "FullSuperelevTmpl.h"
namespace LX
{


class FullSuperelevImpl : public FullSuperelevTmpl<FullSuperelev>
{
public:
    FullSuperelevImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
