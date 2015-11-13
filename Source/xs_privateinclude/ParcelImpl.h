#if !defined(__PARCELIMPL_H)
#define __PARCELIMPL_H

#include "ParcelTmpl.h"
#include "ParcelCollection.h"
namespace LX
{


class ParcelImpl : public ParcelTmpl<Parcel>
{
public:
    ParcelImpl (DocumentImpl* pDoc);
    Object* getGlobalCollection ();
};
}; // namespace : LX
#endif
