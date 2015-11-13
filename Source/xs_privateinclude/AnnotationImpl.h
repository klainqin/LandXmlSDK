#if !defined(__ANNOTATIONIMPL_H)
#define __ANNOTATIONIMPL_H

#include "AnnotationTmpl.h"
namespace LX
{


class AnnotationImpl : public AnnotationTmpl<Annotation>
{
public:
    AnnotationImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
