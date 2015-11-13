
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "Connection.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "ConnectionTmpl.inl"
namespace LX
{
template class ConnectionTmpl<Connection>;
ConnectionImpl::ConnectionImpl (DocumentImpl* pDoc)
    : ConnectionTmpl<Connection>(pDoc)
{
}
}; // namespace : LX
