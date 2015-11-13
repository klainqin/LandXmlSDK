#if !defined(__CONTOURSIMPL_H)
#define __CONTOURSIMPL_H

#include "ContoursTmpl.h"
namespace LX
{


class ContoursImpl : public ContoursTmpl<Contours>
{
public:
    ContoursImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
