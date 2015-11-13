#if !defined(__CHANNELIMPL_H)
#define __CHANNELIMPL_H

#include "ChannelTmpl.h"
namespace LX
{


class ChannelImpl : public ChannelTmpl<Channel>
{
public:
    ChannelImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
