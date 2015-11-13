
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "IrregularLine.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "IrregularLineTmpl.inl"
namespace LX
{
template class IrregularLineTmpl<IrregularLine>;
IrregularLineImpl::IrregularLineImpl (DocumentImpl* pDoc)
    : IrregularLineTmpl<IrregularLine>(pDoc)
{
}
}; // namespace : LX
