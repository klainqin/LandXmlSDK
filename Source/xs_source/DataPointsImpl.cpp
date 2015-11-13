
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "DataPoints.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "DataPointsTmpl.inl"
namespace LX
{
template class DataPointsTmpl<DataPoints>;
DataPointsImpl::DataPointsImpl (DocumentImpl* pDoc)
    : DataPointsTmpl<DataPoints>(pDoc)
{
}
}; // namespace : LX
