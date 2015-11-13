#if !defined(__ADVERSESEIMPL_H)
#define __ADVERSESEIMPL_H

#include "AdverseSETmpl.h"
namespace LX
{


class AdverseSEImpl : public AdverseSETmpl<AdverseSE>
{
public:
    AdverseSEImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
