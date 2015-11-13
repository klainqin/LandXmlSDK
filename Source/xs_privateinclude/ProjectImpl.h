#if !defined(__PROJECTIMPL_H)
#define __PROJECTIMPL_H

#include "ProjectTmpl.h"
namespace LX
{


class ProjectImpl : public ProjectTmpl<Project>
{
public:
    ProjectImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
