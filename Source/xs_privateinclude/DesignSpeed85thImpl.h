#if !defined(__DESIGNSPEED85THIMPL_H)
#define __DESIGNSPEED85THIMPL_H

#include "DesignSpeed85thTmpl.h"
namespace LX
{


class DesignSpeed85thImpl : public DesignSpeed85thTmpl<DesignSpeed85th>
{
public:
    DesignSpeed85thImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
