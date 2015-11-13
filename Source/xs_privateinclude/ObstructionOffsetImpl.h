#if !defined(__OBSTRUCTIONOFFSETIMPL_H)
#define __OBSTRUCTIONOFFSETIMPL_H

#include "ObstructionOffsetTmpl.h"
namespace LX
{


class ObstructionOffsetImpl : public ObstructionOffsetTmpl<ObstructionOffset>
{
public:
    ObstructionOffsetImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
