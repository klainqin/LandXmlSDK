#if !defined(__STRUCTSIMPL_H)
#define __STRUCTSIMPL_H

#include "StructsTmpl.h"
namespace LX
{


class StructsImpl : public StructsTmpl<Structs>
{
public:
    StructsImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
