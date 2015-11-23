#if !defined(__RETWALLPNTTMPL_H)
#define __RETWALLPNTTMPL_H

#include "RetWallPnt.h"
#include "LXTypesTmpl.h"
#include "PointType3dReqImpl.h"

namespace LX
{


// Class : RetWallPnt
template<class T>
class RetWallPntTmpl : public PointType3dReqTmpl<T>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    RetWallPntTmpl (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~RetWallPntTmpl ();
public:
	// Collections

    virtual bool getObjectId(const String*& pId) const;
    virtual ValueObject* id () const;
    
public:
	// Properties

    virtual double getHeight() const;
    virtual void setHeight(double value);
    virtual bool hasValue_Height() const;
    virtual void resetValue_Height();
    
    virtual double getOffset() const;
    virtual void setOffset(double value);
    virtual bool hasValue_Offset() const;
    virtual void resetValue_Offset();
    

    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    double m_Height;
    bool m_bHeight_valueSet;
    double m_Offset;
    bool m_bOffset_valueSet;
};
}; // namespace : LX
#endif
