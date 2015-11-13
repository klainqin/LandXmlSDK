#if !defined(__RETWALLPNT_H)
#define __RETWALLPNT_H

#include "RetWallPnt.h"
#include "LXTypes.h"
#include "PointType3dReq.h"

namespace LX
{


// Class : RetWallPnt
class RetWallPnt : public PointType3dReq
{

public:
	virtual void toXml (IStream& stream) = 0;
public:
	// Collections

public:
	// Properties
    
    virtual double getHeight() const = 0;
    virtual void setHeight(double value) = 0;
    virtual bool hasValue_Height() const = 0;
    virtual void resetValue_Height() = 0;
    
    virtual double getOffset() const = 0;
    virtual void setOffset(double value) = 0;
    virtual bool hasValue_Offset() const = 0;
    virtual void resetValue_Offset() = 0;
    
    
protected:
};
}; // namespace : LX
#endif
