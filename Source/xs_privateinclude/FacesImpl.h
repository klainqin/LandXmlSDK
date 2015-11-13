#if !defined(__FACESIMPL_H)
#define __FACESIMPL_H

#include "FacesTmpl.h"
namespace LX
{


class FacesImpl : public FacesTmpl<Faces>
{
public:
    FacesImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
