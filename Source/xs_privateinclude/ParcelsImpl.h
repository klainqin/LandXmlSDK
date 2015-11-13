#if !defined(__PARCELSIMPL_H)
#define __PARCELSIMPL_H

#include "ParcelsTmpl.h"
namespace LX
{


class ParcelsImpl : public ParcelsTmpl<Parcels>
{
public:
    ParcelsImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
