#if !defined(__DESIGNSPEEDIMPL_H)
#define __DESIGNSPEEDIMPL_H

#include "DesignSpeedTmpl.h"
namespace LX
{


class DesignSpeedImpl : public DesignSpeedTmpl<DesignSpeed>
{
public:
    DesignSpeedImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
