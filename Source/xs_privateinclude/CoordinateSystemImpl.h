#if !defined(__COORDINATESYSTEMIMPL_H)
#define __COORDINATESYSTEMIMPL_H

#include "CoordinateSystemTmpl.h"
namespace LX
{


class CoordinateSystemImpl : public CoordinateSystemTmpl<CoordinateSystem>
{
public:
    CoordinateSystemImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
