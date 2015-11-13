#if !defined(__BACKSIGHTIMPL_H)
#define __BACKSIGHTIMPL_H

#include "BacksightTmpl.h"
namespace LX
{


class BacksightImpl : public BacksightTmpl<Backsight>
{
public:
    BacksightImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
