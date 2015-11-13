#if !defined(__STRUCTIMPL_H)
#define __STRUCTIMPL_H

#include "StructTmpl.h"
#include "StructCollection.h"
namespace LX
{


class StructImpl : public StructTmpl<Struct>
{
public:
    StructImpl (DocumentImpl* pDoc);
    Object* getGlobalCollection ();
};
}; // namespace : LX
#endif
