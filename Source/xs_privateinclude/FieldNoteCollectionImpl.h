#if !defined(__FIELDNOTECOLLECTIONIMPL_H)
#define __FIELDNOTECOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "FieldNote.h"
#include "FieldNoteCollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "FieldNoteImpl.h"
#endif

namespace LX
{
FieldNoteCollection* createFieldNoteCollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : FieldNoteCollectionImpl
class FieldNoteCollectionImpl : public ObjListTmpl<FieldNote, FieldNoteCollection, FieldNoteCollectionIterator, FieldNoteCollectionConstIterator>
{
public:
    FieldNoteCollectionImpl::FieldNoteCollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
