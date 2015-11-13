#if !defined(__PIPESIMPL_H)
#define __PIPESIMPL_H

#include "PipesTmpl.h"
namespace LX
{


class PipesImpl : public PipesTmpl<Pipes>
{
public:
    PipesImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
