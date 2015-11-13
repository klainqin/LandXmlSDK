#if !defined(__ZONEMATERIALIMPL_H)
#define __ZONEMATERIALIMPL_H

#include "ZoneMaterialTmpl.h"
namespace LX
{


class ZoneMaterialImpl : public ZoneMaterialTmpl<ZoneMaterial>
{
public:
    ZoneMaterialImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
