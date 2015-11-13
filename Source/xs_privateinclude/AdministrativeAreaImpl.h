#if !defined(__ADMINISTRATIVEAREAIMPL_H)
#define __ADMINISTRATIVEAREAIMPL_H

#include "AdministrativeAreaTmpl.h"
namespace LX
{


class AdministrativeAreaImpl : public AdministrativeAreaTmpl<AdministrativeArea>
{
public:
    AdministrativeAreaImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
