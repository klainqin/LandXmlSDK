#if !defined(__TITLEIMPL_H)
#define __TITLEIMPL_H

#include "TitleTmpl.h"
namespace LX
{


class TitleImpl : public TitleTmpl<Title>
{
public:
    TitleImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
