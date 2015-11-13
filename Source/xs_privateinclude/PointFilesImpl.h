#if !defined(__POINTFILESIMPL_H)
#define __POINTFILESIMPL_H

#include "PointFilesTmpl.h"
namespace LX
{


class PointFilesImpl : public PointFilesTmpl<PointFiles>
{
public:
    PointFilesImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
