#if !defined(__DEFINITIONIMPL_H)
#define __DEFINITIONIMPL_H

#include "DefinitionTmpl.h"
namespace LX
{


class DefinitionImpl : public DefinitionTmpl<Definition>
{
public:
    DefinitionImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
