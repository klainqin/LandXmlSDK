#if !defined(__EXCLUSIONSIMPL_H)
#define __EXCLUSIONSIMPL_H

#include "ExclusionsTmpl.h"
namespace LX
{


class ExclusionsImpl : public ExclusionsTmpl<Exclusions>
{
public:
    ExclusionsImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
