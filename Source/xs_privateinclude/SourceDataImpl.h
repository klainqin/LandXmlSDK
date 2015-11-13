#if !defined(__SOURCEDATAIMPL_H)
#define __SOURCEDATAIMPL_H

#include "SourceDataTmpl.h"
namespace LX
{


class SourceDataImpl : public SourceDataTmpl<SourceData>
{
public:
    SourceDataImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
