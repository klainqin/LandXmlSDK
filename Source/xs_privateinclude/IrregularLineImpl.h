#if !defined(__IRREGULARLINEIMPL_H)
#define __IRREGULARLINEIMPL_H

#include "IrregularLineTmpl.h"
namespace LX
{


class IrregularLineImpl : public IrregularLineTmpl<IrregularLine>
{
public:
    IrregularLineImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
