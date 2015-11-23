#if !defined(__LANESTMPL_H)
#define __LANESTMPL_H

#include "Lanes.h"
#include "LXTypesTmpl.h"

namespace LX
{

class ThruLaneCollection;
class PassingLaneCollection;
class TurnLaneCollection;
class TwoWayLeftTurnLaneCollection;
class ClimbLaneCollection;
class OffsetLaneCollection;
class WideningLaneCollection;
class FeatureCollection;

// Class : Lanes
template<class T>
class LanesTmpl : public ObjectTmpl<T>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    LanesTmpl (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~LanesTmpl ();
public:
	// Collections
    virtual ThruLaneCollection& ThruLane();
    virtual const ThruLaneCollection& ThruLane() const;
    virtual PassingLaneCollection& PassingLane();
    virtual const PassingLaneCollection& PassingLane() const;
    virtual TurnLaneCollection& TurnLane();
    virtual const TurnLaneCollection& TurnLane() const;
    virtual TwoWayLeftTurnLaneCollection& TwoWayLeftTurnLane();
    virtual const TwoWayLeftTurnLaneCollection& TwoWayLeftTurnLane() const;
    virtual ClimbLaneCollection& ClimbLane();
    virtual const ClimbLaneCollection& ClimbLane() const;
    virtual OffsetLaneCollection& OffsetLane();
    virtual const OffsetLaneCollection& OffsetLane() const;
    virtual WideningLaneCollection& WideningLane();
    virtual const WideningLaneCollection& WideningLane() const;
    virtual FeatureCollection& Feature();
    virtual const FeatureCollection& Feature() const;

public:
	// Properties


    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    ThruLaneCollection *m_ThruLane;
    PassingLaneCollection *m_PassingLane;
    TurnLaneCollection *m_TurnLane;
    TwoWayLeftTurnLaneCollection *m_TwoWayLeftTurnLane;
    ClimbLaneCollection *m_ClimbLane;
    OffsetLaneCollection *m_OffsetLane;
    WideningLaneCollection *m_WideningLane;
    FeatureCollection *m_Feature;
};
}; // namespace : LX
#endif
