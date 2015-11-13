#if !defined(__PIPENETWORKSIMPL_H)
#define __PIPENETWORKSIMPL_H

#include "PipeNetworksTmpl.h"
namespace LX
{


class PipeNetworksImpl : public PipeNetworksTmpl<PipeNetworks>
{
public:
    PipeNetworksImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
