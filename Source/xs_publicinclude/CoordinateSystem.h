#if !defined(__COORDINATESYSTEM_H)
#define __COORDINATESYSTEM_H

#include "CoordinateSystem.h"
#include "LXTypes.h"

namespace LX
{

class Start;
class FieldNoteCollection;
class FeatureCollection;

// Class : CoordinateSystem
class CoordinateSystem : public Object
{

public:
	virtual void toXml (IStream& stream) = 0;
public:
	// Collections
    virtual FieldNoteCollection& FieldNote() = 0;
    virtual const FieldNoteCollection& FieldNote() const = 0;
    virtual FeatureCollection& Feature() = 0;
    virtual const FeatureCollection& Feature() const = 0;

public:
	// Properties
    virtual Start* getStart() const = 0;
    virtual void setStart(Start* value) = 0;
    
    
    virtual String getDesc() const = 0;
    virtual void setDesc(String value) = 0;
    virtual bool hasValue_Desc() const = 0;
    virtual void resetValue_Desc() = 0;
    
    virtual String getName() const = 0;
    virtual void setName(String value) = 0;
    virtual bool hasValue_Name() const = 0;
    virtual void resetValue_Name() = 0;
    
    virtual String getEpsgCode() const = 0;
    virtual void setEpsgCode(String value) = 0;
    virtual bool hasValue_EpsgCode() const = 0;
    virtual void resetValue_EpsgCode() = 0;
    
    virtual String getOgcWktCode() const = 0;
    virtual void setOgcWktCode(String value) = 0;
    virtual bool hasValue_OgcWktCode() const = 0;
    virtual void resetValue_OgcWktCode() = 0;
    
    virtual String getHorizontalDatum() const = 0;
    virtual void setHorizontalDatum(String value) = 0;
    virtual bool hasValue_HorizontalDatum() const = 0;
    virtual void resetValue_HorizontalDatum() = 0;
    
    virtual String getVerticalDatum() const = 0;
    virtual void setVerticalDatum(String value) = 0;
    virtual bool hasValue_VerticalDatum() const = 0;
    virtual void resetValue_VerticalDatum() = 0;
    
    virtual String getEllipsoidName() const = 0;
    virtual void setEllipsoidName(String value) = 0;
    virtual bool hasValue_EllipsoidName() const = 0;
    virtual void resetValue_EllipsoidName() = 0;
    
    virtual String getHorizontalCoordinateSystemName() const = 0;
    virtual void setHorizontalCoordinateSystemName(String value) = 0;
    virtual bool hasValue_HorizontalCoordinateSystemName() const = 0;
    virtual void resetValue_HorizontalCoordinateSystemName() = 0;
    
    virtual String getGeocentricCoordinateSystemName() const = 0;
    virtual void setGeocentricCoordinateSystemName(String value) = 0;
    virtual bool hasValue_GeocentricCoordinateSystemName() const = 0;
    virtual void resetValue_GeocentricCoordinateSystemName() = 0;
    
    virtual String getFileLocation() const = 0;
    virtual void setFileLocation(String value) = 0;
    virtual bool hasValue_FileLocation() const = 0;
    virtual void resetValue_FileLocation() = 0;
    
    virtual double getRotationAngle() const = 0;
    virtual void setRotationAngle(double value) = 0;
    virtual bool hasValue_RotationAngle() const = 0;
    virtual void resetValue_RotationAngle() = 0;
    
    virtual String getDatum() const = 0;
    virtual void setDatum(String value) = 0;
    virtual bool hasValue_Datum() const = 0;
    virtual void resetValue_Datum() = 0;
    
    virtual String getFittedCoordinateSystemName() const = 0;
    virtual void setFittedCoordinateSystemName(String value) = 0;
    virtual bool hasValue_FittedCoordinateSystemName() const = 0;
    virtual void resetValue_FittedCoordinateSystemName() = 0;
    
    virtual String getCompoundCoordinateSystemName() const = 0;
    virtual void setCompoundCoordinateSystemName(String value) = 0;
    virtual bool hasValue_CompoundCoordinateSystemName() const = 0;
    virtual void resetValue_CompoundCoordinateSystemName() = 0;
    
    virtual String getLocalCoordinateSystemName() const = 0;
    virtual void setLocalCoordinateSystemName(String value) = 0;
    virtual bool hasValue_LocalCoordinateSystemName() const = 0;
    virtual void resetValue_LocalCoordinateSystemName() = 0;
    
    virtual String getGeographicCoordinateSystemName() const = 0;
    virtual void setGeographicCoordinateSystemName(String value) = 0;
    virtual bool hasValue_GeographicCoordinateSystemName() const = 0;
    virtual void resetValue_GeographicCoordinateSystemName() = 0;
    
    virtual String getProjectedCoordinateSystemName() const = 0;
    virtual void setProjectedCoordinateSystemName(String value) = 0;
    virtual bool hasValue_ProjectedCoordinateSystemName() const = 0;
    virtual void resetValue_ProjectedCoordinateSystemName() = 0;
    
    virtual String getVerticalCoordinateSystemName() const = 0;
    virtual void setVerticalCoordinateSystemName(String value) = 0;
    virtual bool hasValue_VerticalCoordinateSystemName() const = 0;
    virtual void resetValue_VerticalCoordinateSystemName() = 0;
    
    
protected:
};
}; // namespace : LX
#endif
