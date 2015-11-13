#if !defined(__DITCHIMPL_H)
#define __DITCHIMPL_H

#include "DitchTmpl.h"
namespace LX
{


class DitchImpl : public DitchTmpl<Ditch>
{
public:
    DitchImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
