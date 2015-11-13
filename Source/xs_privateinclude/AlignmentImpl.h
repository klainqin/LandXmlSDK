#if !defined(__ALIGNMENTIMPL_H)
#define __ALIGNMENTIMPL_H

#include "AlignmentTmpl.h"
#include "AlignmentCollection.h"
namespace LX
{


class AlignmentImpl : public AlignmentTmpl<Alignment>
{
public:
    AlignmentImpl (DocumentImpl* pDoc);
    Object* getGlobalCollection ();
};
}; // namespace : LX
#endif
