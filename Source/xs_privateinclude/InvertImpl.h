#if !defined(__INVERTIMPL_H)
#define __INVERTIMPL_H

#include "InvertTmpl.h"
namespace LX
{


class InvertImpl : public InvertTmpl<Invert>
{
public:
    InvertImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
