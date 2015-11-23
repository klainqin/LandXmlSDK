#if !defined(__OUTLETTMPL_H)
#define __OUTLETTMPL_H

#include "Outlet.h"
#include "LXTypesTmpl.h"
#include "PointType3dReqImpl.h"

namespace LX
{


// Class : Outlet
template<class T>
class OutletTmpl : public PointType3dReqTmpl<T>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    OutletTmpl (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~OutletTmpl ();
public:
	// Collections

    virtual bool getObjectId(const String*& pId) const;
    virtual ValueObject* id () const;
    
public:
	// Properties

    virtual String getRefWS() const;
    virtual void setRefWS(String value);
    virtual bool hasValue_RefWS() const;
    virtual void resetValue_RefWS();
    

    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    String m_RefWS;
    bool m_bRefWS_valueSet;
};
}; // namespace : LX
#endif
