#if !defined(__RETWALLPNTIMPL_H)
#define __RETWALLPNTIMPL_H

#include "RetWallPntTmpl.h"
namespace LX
{


class RetWallPntImpl : public RetWallPntTmpl<RetWallPnt>
{
public:
    RetWallPntImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
