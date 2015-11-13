#if !defined(__CLASSIFICATIONIMPL_H)
#define __CLASSIFICATIONIMPL_H

#include "ClassificationTmpl.h"
namespace LX
{


class ClassificationImpl : public ClassificationTmpl<Classification>
{
public:
    ClassificationImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
