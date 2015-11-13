#if !defined(__BRIDGEELEMENTIMPL_H)
#define __BRIDGEELEMENTIMPL_H

#include "BridgeElementTmpl.h"
namespace LX
{


class BridgeElementImpl : public BridgeElementTmpl<BridgeElement>
{
public:
    BridgeElementImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
