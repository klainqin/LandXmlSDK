#if !defined(__FIELDNOTEIMPL_H)
#define __FIELDNOTEIMPL_H

#include "FieldNoteTmpl.h"
namespace LX
{


class FieldNoteImpl : public FieldNoteTmpl<FieldNote>
{
public:
    FieldNoteImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
