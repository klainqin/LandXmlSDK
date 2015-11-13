#if !defined(__RETWALLIMPL_H)
#define __RETWALLIMPL_H

#include "RetWallTmpl.h"
namespace LX
{


class RetWallImpl : public RetWallTmpl<RetWall>
{
public:
    RetWallImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
