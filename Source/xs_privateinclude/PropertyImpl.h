#if !defined(__PROPERTYIMPL_H)
#define __PROPERTYIMPL_H

#include "PropertyTmpl.h"
namespace LX
{


class PropertyImpl : public PropertyTmpl<Property>
{
public:
    PropertyImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
