#if !defined(__POSTEDSPEEDIMPL_H)
#define __POSTEDSPEEDIMPL_H

#include "PostedSpeedTmpl.h"
namespace LX
{


class PostedSpeedImpl : public PostedSpeedTmpl<PostedSpeed>
{
public:
    PostedSpeedImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
