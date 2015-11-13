
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "InstrumentSetup.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "InstrumentSetupTmpl.inl"
namespace LX
{
template class InstrumentSetupTmpl<InstrumentSetup>;
InstrumentSetupImpl::InstrumentSetupImpl (DocumentImpl* pDoc)
    : InstrumentSetupTmpl<InstrumentSetup>(pDoc)
{
}
}; // namespace : LX
