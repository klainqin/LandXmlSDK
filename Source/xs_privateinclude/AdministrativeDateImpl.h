#if !defined(__ADMINISTRATIVEDATEIMPL_H)
#define __ADMINISTRATIVEDATEIMPL_H

#include "AdministrativeDateTmpl.h"
namespace LX
{


class AdministrativeDateImpl : public AdministrativeDateTmpl<AdministrativeDate>
{
public:
    AdministrativeDateImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
