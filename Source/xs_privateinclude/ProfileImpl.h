#if !defined(__PROFILEIMPL_H)
#define __PROFILEIMPL_H

#include "ProfileTmpl.h"
namespace LX
{


class ProfileImpl : public ProfileTmpl<Profile>
{
public:
    ProfileImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
