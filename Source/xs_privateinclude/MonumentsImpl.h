#if !defined(__MONUMENTSIMPL_H)
#define __MONUMENTSIMPL_H

#include "MonumentsTmpl.h"
namespace LX
{


class MonumentsImpl : public MonumentsTmpl<Monuments>
{
public:
    MonumentsImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
