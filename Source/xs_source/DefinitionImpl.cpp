
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "Definition.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "DefinitionTmpl.inl"
namespace LX
{
template class DefinitionTmpl<Definition>;
DefinitionImpl::DefinitionImpl (DocumentImpl* pDoc)
    : DefinitionTmpl<Definition>(pDoc)
{
}
}; // namespace : LX
