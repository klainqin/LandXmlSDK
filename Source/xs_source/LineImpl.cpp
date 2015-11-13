
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "Line.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "LineTmpl.inl"
namespace LX
{
template class LineTmpl<Line>;
LineImpl::LineImpl (DocumentImpl* pDoc)
    : LineTmpl<Line>(pDoc)
{
}
}; // namespace : LX
