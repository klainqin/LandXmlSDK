#if !defined(__TRAFFICVOLUMETMPL_H)
#define __TRAFFICVOLUMETMPL_H

#include "TrafficVolume.h"
#include "LXTypesTmpl.h"

namespace LX
{

class DailyTrafficVolume;
class DesignHour;
class PeakHour;
class FeatureCollection;

// Class : TrafficVolume
template<class T>
class TrafficVolumeTmpl : public ObjectTmpl<T>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    TrafficVolumeTmpl (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~TrafficVolumeTmpl ();
public:
	// Collections
    virtual FeatureCollection& Feature();
    virtual const FeatureCollection& Feature() const;

public:
	// Properties
    virtual DailyTrafficVolume* getDailyTrafficVolume() const;
    virtual void setDailyTrafficVolume(DailyTrafficVolume* value);

    virtual DesignHour* getDesignHour() const;
    virtual void setDesignHour(DesignHour* value);

    virtual PeakHour* getPeakHour() const;
    virtual void setPeakHour(PeakHour* value);



    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    DailyTrafficVolume *m_DailyTrafficVolume;
    DesignHour *m_DesignHour;
    PeakHour *m_PeakHour;
    FeatureCollection *m_Feature;
};
}; // namespace : LX
#endif
