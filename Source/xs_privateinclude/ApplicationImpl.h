#if !defined(__APPLICATIONIMPL_H)
#define __APPLICATIONIMPL_H

#include "ApplicationTmpl.h"
namespace LX
{


class ApplicationImpl : public ApplicationTmpl<Application>
{
public:
    ApplicationImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
