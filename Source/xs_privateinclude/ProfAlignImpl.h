#if !defined(__PROFALIGNIMPL_H)
#define __PROFALIGNIMPL_H

#include "ProfAlignTmpl.h"
namespace LX
{


class ProfAlignImpl : public ProfAlignTmpl<ProfAlign>
{
public:
    ProfAlignImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
