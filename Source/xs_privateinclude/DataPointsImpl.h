#if !defined(__DATAPOINTSIMPL_H)
#define __DATAPOINTSIMPL_H

#include "DataPointsTmpl.h"
namespace LX
{


class DataPointsImpl : public DataPointsTmpl<DataPoints>
{
public:
    DataPointsImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
