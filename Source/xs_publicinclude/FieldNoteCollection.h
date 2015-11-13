#if !defined(__FIELDNOTECOLLECTION_H)
#define __FIELDNOTECOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "FieldNote.h"
namespace LX
{

// Iterator : FieldNoteCollection
class FieldNoteCollectionIterator : public Iterator<FieldNote*>
{
};

class FieldNoteCollectionConstIterator : public ConstIterator<FieldNote>
{
};

// Collection : FieldNoteCollection
class FieldNoteCollection : public ObjList<FieldNote, FieldNoteCollectionIterator, FieldNoteCollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
