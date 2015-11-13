#if !defined(__CANTSTATIONIMPL_H)
#define __CANTSTATIONIMPL_H

#include "CantStationTmpl.h"
namespace LX
{


class CantStationImpl : public CantStationTmpl<CantStation>
{
public:
    CantStationImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
