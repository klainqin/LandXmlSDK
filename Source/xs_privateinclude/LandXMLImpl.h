#if !defined(__LANDXMLIMPL_H)
#define __LANDXMLIMPL_H

#include "LandXMLTmpl.h"
namespace LX
{


class LandXMLImpl : public LandXMLTmpl<LandXML>
{
public:
    LandXMLImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
