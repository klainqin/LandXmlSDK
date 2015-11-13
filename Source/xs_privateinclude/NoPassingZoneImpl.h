#if !defined(__NOPASSINGZONEIMPL_H)
#define __NOPASSINGZONEIMPL_H

#include "NoPassingZoneTmpl.h"
namespace LX
{


class NoPassingZoneImpl : public NoPassingZoneTmpl<NoPassingZone>
{
public:
    NoPassingZoneImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
