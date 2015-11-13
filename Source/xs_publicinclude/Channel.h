#if !defined(__CHANNEL_H)
#define __CHANNEL_H

#include "Channel.h"
#include "LXTypes.h"

namespace LX
{

class FeatureCollection;

// Class : Channel
class Channel : public Object
{

public:
	virtual void toXml (IStream& stream) = 0;
public:
	// Collections
    virtual FeatureCollection& Feature() = 0;
    virtual const FeatureCollection& Feature() const = 0;

public:
	// Properties
    
    virtual double getHeight() const = 0;
    virtual void setHeight(double value) = 0;
    virtual bool hasValue_Height() const = 0;
    virtual void resetValue_Height() = 0;
    
    virtual double getWidthTop() const = 0;
    virtual void setWidthTop(double value) = 0;
    virtual bool hasValue_WidthTop() const = 0;
    virtual void resetValue_WidthTop() = 0;
    
    virtual double getWidthBottom() const = 0;
    virtual void setWidthBottom(double value) = 0;
    virtual bool hasValue_WidthBottom() const = 0;
    virtual void resetValue_WidthBottom() = 0;
    
    virtual String getDesc() const = 0;
    virtual void setDesc(String value) = 0;
    virtual bool hasValue_Desc() const = 0;
    virtual void resetValue_Desc() = 0;
    
    virtual double getHazenWilliams() const = 0;
    virtual void setHazenWilliams(double value) = 0;
    virtual bool hasValue_HazenWilliams() const = 0;
    virtual void resetValue_HazenWilliams() = 0;
    
    virtual double getMannings() const = 0;
    virtual void setMannings(double value) = 0;
    virtual bool hasValue_Mannings() const = 0;
    virtual void resetValue_Mannings() = 0;
    
    virtual String getMaterial() const = 0;
    virtual void setMaterial(String value) = 0;
    virtual bool hasValue_Material() const = 0;
    virtual void resetValue_Material() = 0;
    
    virtual double getThickness() const = 0;
    virtual void setThickness(double value) = 0;
    virtual bool hasValue_Thickness() const = 0;
    virtual void resetValue_Thickness() = 0;
    
    
protected:
};
}; // namespace : LX
#endif
