#if !defined(__IMPERIALIMPL_H)
#define __IMPERIALIMPL_H

#include "ImperialTmpl.h"
namespace LX
{


class ImperialImpl : public ImperialTmpl<Imperial>
{
public:
    ImperialImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
