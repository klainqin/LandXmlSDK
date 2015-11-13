#if !defined(__CRASHDATAIMPL_H)
#define __CRASHDATAIMPL_H

#include "CrashDataTmpl.h"
namespace LX
{


class CrashDataImpl : public CrashDataTmpl<CrashData>
{
public:
    CrashDataImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
