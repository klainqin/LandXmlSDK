#if !defined(__CRASHHISTORYIMPL_H)
#define __CRASHHISTORYIMPL_H

#include "CrashHistoryTmpl.h"
namespace LX
{


class CrashHistoryImpl : public CrashHistoryTmpl<CrashHistory>
{
public:
    CrashHistoryImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
