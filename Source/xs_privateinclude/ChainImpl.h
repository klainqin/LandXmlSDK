#if !defined(__CHAINIMPL_H)
#define __CHAINIMPL_H

#include "ChainTmpl.h"
namespace LX
{


class ChainImpl : public ChainTmpl<Chain>
{
public:
    ChainImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
