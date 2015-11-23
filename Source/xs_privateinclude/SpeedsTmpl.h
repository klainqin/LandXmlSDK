#if !defined(__SPEEDSTMPL_H)
#define __SPEEDSTMPL_H

#include "Speeds.h"
#include "LXTypesTmpl.h"

namespace LX
{

class DesignSpeedCollection;
class DesignSpeed85thCollection;
class PostedSpeedCollection;
class FeatureCollection;

// Class : Speeds
template<class T>
class SpeedsTmpl : public ObjectTmpl<T>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    SpeedsTmpl (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~SpeedsTmpl ();
public:
	// Collections
    virtual DesignSpeedCollection& DesignSpeed();
    virtual const DesignSpeedCollection& DesignSpeed() const;
    virtual DesignSpeed85thCollection& DesignSpeed85th();
    virtual const DesignSpeed85thCollection& DesignSpeed85th() const;
    virtual PostedSpeedCollection& PostedSpeed();
    virtual const PostedSpeedCollection& PostedSpeed() const;
    virtual FeatureCollection& Feature();
    virtual const FeatureCollection& Feature() const;

public:
	// Properties


    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    DesignSpeedCollection *m_DesignSpeed;
    DesignSpeed85thCollection *m_DesignSpeed85th;
    PostedSpeedCollection *m_PostedSpeed;
    FeatureCollection *m_Feature;
};
}; // namespace : LX
#endif
