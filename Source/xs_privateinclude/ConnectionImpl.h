#if !defined(__CONNECTIONIMPL_H)
#define __CONNECTIONIMPL_H

#include "ConnectionTmpl.h"
namespace LX
{


class ConnectionImpl : public ConnectionTmpl<Connection>
{
public:
    ConnectionImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
