#if !defined(__AUTHORIMPL_H)
#define __AUTHORIMPL_H

#include "AuthorTmpl.h"
namespace LX
{


class AuthorImpl : public AuthorTmpl<Author>
{
public:
    AuthorImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
