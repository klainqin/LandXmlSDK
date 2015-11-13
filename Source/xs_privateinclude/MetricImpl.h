#if !defined(__METRICIMPL_H)
#define __METRICIMPL_H

#include "MetricTmpl.h"
namespace LX
{


class MetricImpl : public MetricTmpl<Metric>
{
public:
    MetricImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
