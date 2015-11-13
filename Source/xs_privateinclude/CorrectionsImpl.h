#if !defined(__CORRECTIONSIMPL_H)
#define __CORRECTIONSIMPL_H

#include "CorrectionsTmpl.h"
namespace LX
{


class CorrectionsImpl : public CorrectionsTmpl<Corrections>
{
public:
    CorrectionsImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
