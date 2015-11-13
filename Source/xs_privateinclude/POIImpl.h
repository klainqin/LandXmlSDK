#if !defined(__POIIMPL_H)
#define __POIIMPL_H

#include "POITmpl.h"
namespace LX
{


class POIImpl : public POITmpl<POI>
{
public:
    POIImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
