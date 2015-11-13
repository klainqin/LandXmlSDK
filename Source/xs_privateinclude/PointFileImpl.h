#if !defined(__POINTFILEIMPL_H)
#define __POINTFILEIMPL_H

#include "PointFileTmpl.h"
namespace LX
{


class PointFileImpl : public PointFileTmpl<PointFile>
{
public:
    PointFileImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
