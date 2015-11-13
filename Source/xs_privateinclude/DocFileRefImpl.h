#if !defined(__DOCFILEREFIMPL_H)
#define __DOCFILEREFIMPL_H

#include "DocFileRefTmpl.h"
namespace LX
{


class DocFileRefImpl : public DocFileRefTmpl<DocFileRef>
{
public:
    DocFileRefImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
