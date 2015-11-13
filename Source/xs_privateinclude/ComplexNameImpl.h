#if !defined(__COMPLEXNAMEIMPL_H)
#define __COMPLEXNAMEIMPL_H

#include "ComplexNameTmpl.h"
namespace LX
{


class ComplexNameImpl : public ComplexNameTmpl<ComplexName>
{
public:
    ComplexNameImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
