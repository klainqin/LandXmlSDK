#if !defined(__PIPENETWORKIMPL_H)
#define __PIPENETWORKIMPL_H

#include "PipeNetworkTmpl.h"
#include "PipeNetworkCollection.h"
namespace LX
{


class PipeNetworkImpl : public PipeNetworkTmpl<PipeNetwork>
{
public:
    PipeNetworkImpl (DocumentImpl* pDoc);
    Object* getGlobalCollection ();
};
}; // namespace : LX
#endif
