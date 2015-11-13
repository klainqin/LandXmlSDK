#if !defined(__STATIONIMPL_H)
#define __STATIONIMPL_H

#include "StationTmpl.h"
namespace LX
{


class StationImpl : public StationTmpl<Station>
{
public:
    StationImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
