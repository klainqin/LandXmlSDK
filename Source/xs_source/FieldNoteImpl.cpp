
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "FieldNote.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "FieldNoteTmpl.inl"
namespace LX
{
template class FieldNoteTmpl<FieldNote>;
FieldNoteImpl::FieldNoteImpl (DocumentImpl* pDoc)
    : FieldNoteTmpl<FieldNote>(pDoc)
{
}
}; // namespace : LX
