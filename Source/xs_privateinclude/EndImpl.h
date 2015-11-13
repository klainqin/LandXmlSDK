#if !defined(__ENDIMPL_H)
#define __ENDIMPL_H

#include "EndTmpl.h"
namespace LX
{


class EndImpl : public EndTmpl<End>
{
public:
    EndImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
