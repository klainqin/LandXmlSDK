#if !defined(__GRADEMODELIMPL_H)
#define __GRADEMODELIMPL_H

#include "GradeModelTmpl.h"
#include "GradeModelCollection.h"
namespace LX
{


class GradeModelImpl : public GradeModelTmpl<GradeModel>
{
public:
    GradeModelImpl (DocumentImpl* pDoc);
    Object* getGlobalCollection ();
};
}; // namespace : LX
#endif
