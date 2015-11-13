
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "Metric.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "MetricTmpl.inl"
namespace LX
{
template class MetricTmpl<Metric>;
MetricImpl::MetricImpl (DocumentImpl* pDoc)
    : MetricTmpl<Metric>(pDoc)
{
}
}; // namespace : LX
