#if !defined(__ADDRESSPOINTIMPL_H)
#define __ADDRESSPOINTIMPL_H

#include "AddressPointTmpl.h"
namespace LX
{


class AddressPointImpl : public AddressPointTmpl<AddressPoint>
{
public:
    AddressPointImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
