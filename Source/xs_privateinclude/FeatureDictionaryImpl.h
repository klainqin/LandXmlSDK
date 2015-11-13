#if !defined(__FEATUREDICTIONARYIMPL_H)
#define __FEATUREDICTIONARYIMPL_H

#include "FeatureDictionaryTmpl.h"
namespace LX
{


class FeatureDictionaryImpl : public FeatureDictionaryTmpl<FeatureDictionary>
{
public:
    FeatureDictionaryImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
