#if !defined(__MONUMENTIMPL_H)
#define __MONUMENTIMPL_H

#include "MonumentTmpl.h"
#include "MonumentCollection.h"
namespace LX
{


class MonumentImpl : public MonumentTmpl<Monument>
{
public:
    MonumentImpl (DocumentImpl* pDoc);
    Object* getGlobalCollection ();
};
}; // namespace : LX
#endif
