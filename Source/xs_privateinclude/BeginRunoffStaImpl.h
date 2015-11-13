#if !defined(__BEGINRUNOFFSTAIMPL_H)
#define __BEGINRUNOFFSTAIMPL_H

#include "BeginRunoffStaTmpl.h"
namespace LX
{


class BeginRunoffStaImpl : public BeginRunoffStaTmpl<BeginRunoffSta>
{
public:
    BeginRunoffStaImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
