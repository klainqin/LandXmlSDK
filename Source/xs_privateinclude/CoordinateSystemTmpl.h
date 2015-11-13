#if !defined(__COORDINATESYSTEMTMPL_H)
#define __COORDINATESYSTEMTMPL_H

#include "CoordinateSystem.h"
#include "LXTypesTmpl.h"

namespace LX
{

class Start;
class FieldNoteCollection;
class FeatureCollection;

// Class : CoordinateSystem
template<class T>
class CoordinateSystemTmpl : public ObjectTmpl<T>, public IIdentifiable<String>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    CoordinateSystemTmpl<T> (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~CoordinateSystemTmpl ();
public:
	// Collections
    virtual FieldNoteCollection& FieldNote();
    virtual const FieldNoteCollection& FieldNote() const;
    virtual FeatureCollection& Feature();
    virtual const FeatureCollection& Feature() const;

    virtual bool getObjectId(const String*& pId) const;
    virtual ValueObject* id () const;
    
public:
	// Properties
    virtual Start* getStart() const;
    virtual void setStart(Start* value);


    virtual String getDesc() const;
    virtual void setDesc(String value);
    virtual bool hasValue_Desc() const;
    virtual void resetValue_Desc();
    
    virtual String getName() const;
    virtual void setName(String value);
    virtual bool hasValue_Name() const;
    virtual void resetValue_Name();
    
    virtual String getEpsgCode() const;
    virtual void setEpsgCode(String value);
    virtual bool hasValue_EpsgCode() const;
    virtual void resetValue_EpsgCode();
    
    virtual String getOgcWktCode() const;
    virtual void setOgcWktCode(String value);
    virtual bool hasValue_OgcWktCode() const;
    virtual void resetValue_OgcWktCode();
    
    virtual String getHorizontalDatum() const;
    virtual void setHorizontalDatum(String value);
    virtual bool hasValue_HorizontalDatum() const;
    virtual void resetValue_HorizontalDatum();
    
    virtual String getVerticalDatum() const;
    virtual void setVerticalDatum(String value);
    virtual bool hasValue_VerticalDatum() const;
    virtual void resetValue_VerticalDatum();
    
    virtual String getEllipsoidName() const;
    virtual void setEllipsoidName(String value);
    virtual bool hasValue_EllipsoidName() const;
    virtual void resetValue_EllipsoidName();
    
    virtual String getHorizontalCoordinateSystemName() const;
    virtual void setHorizontalCoordinateSystemName(String value);
    virtual bool hasValue_HorizontalCoordinateSystemName() const;
    virtual void resetValue_HorizontalCoordinateSystemName();
    
    virtual String getGeocentricCoordinateSystemName() const;
    virtual void setGeocentricCoordinateSystemName(String value);
    virtual bool hasValue_GeocentricCoordinateSystemName() const;
    virtual void resetValue_GeocentricCoordinateSystemName();
    
    virtual String getFileLocation() const;
    virtual void setFileLocation(String value);
    virtual bool hasValue_FileLocation() const;
    virtual void resetValue_FileLocation();
    
    virtual double getRotationAngle() const;
    virtual void setRotationAngle(double value);
    virtual bool hasValue_RotationAngle() const;
    virtual void resetValue_RotationAngle();
    
    virtual String getDatum() const;
    virtual void setDatum(String value);
    virtual bool hasValue_Datum() const;
    virtual void resetValue_Datum();
    
    virtual String getFittedCoordinateSystemName() const;
    virtual void setFittedCoordinateSystemName(String value);
    virtual bool hasValue_FittedCoordinateSystemName() const;
    virtual void resetValue_FittedCoordinateSystemName();
    
    virtual String getCompoundCoordinateSystemName() const;
    virtual void setCompoundCoordinateSystemName(String value);
    virtual bool hasValue_CompoundCoordinateSystemName() const;
    virtual void resetValue_CompoundCoordinateSystemName();
    
    virtual String getLocalCoordinateSystemName() const;
    virtual void setLocalCoordinateSystemName(String value);
    virtual bool hasValue_LocalCoordinateSystemName() const;
    virtual void resetValue_LocalCoordinateSystemName();
    
    virtual String getGeographicCoordinateSystemName() const;
    virtual void setGeographicCoordinateSystemName(String value);
    virtual bool hasValue_GeographicCoordinateSystemName() const;
    virtual void resetValue_GeographicCoordinateSystemName();
    
    virtual String getProjectedCoordinateSystemName() const;
    virtual void setProjectedCoordinateSystemName(String value);
    virtual bool hasValue_ProjectedCoordinateSystemName() const;
    virtual void resetValue_ProjectedCoordinateSystemName();
    
    virtual String getVerticalCoordinateSystemName() const;
    virtual void setVerticalCoordinateSystemName(String value);
    virtual bool hasValue_VerticalCoordinateSystemName() const;
    virtual void resetValue_VerticalCoordinateSystemName();
    

    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    Start *m_Start;
    FieldNoteCollection *m_FieldNote;
    FeatureCollection *m_Feature;
    String m_Desc;
    bool m_bDesc_valueSet;
    String m_Name;
    bool m_bName_valueSet;
    String m_EpsgCode;
    bool m_bEpsgCode_valueSet;
    String m_OgcWktCode;
    bool m_bOgcWktCode_valueSet;
    String m_HorizontalDatum;
    bool m_bHorizontalDatum_valueSet;
    String m_VerticalDatum;
    bool m_bVerticalDatum_valueSet;
    String m_EllipsoidName;
    bool m_bEllipsoidName_valueSet;
    String m_HorizontalCoordinateSystemName;
    bool m_bHorizontalCoordinateSystemName_valueSet;
    String m_GeocentricCoordinateSystemName;
    bool m_bGeocentricCoordinateSystemName_valueSet;
    String m_FileLocation;
    bool m_bFileLocation_valueSet;
    double m_RotationAngle;
    bool m_bRotationAngle_valueSet;
    String m_Datum;
    bool m_bDatum_valueSet;
    String m_FittedCoordinateSystemName;
    bool m_bFittedCoordinateSystemName_valueSet;
    String m_CompoundCoordinateSystemName;
    bool m_bCompoundCoordinateSystemName_valueSet;
    String m_LocalCoordinateSystemName;
    bool m_bLocalCoordinateSystemName_valueSet;
    String m_GeographicCoordinateSystemName;
    bool m_bGeographicCoordinateSystemName_valueSet;
    String m_ProjectedCoordinateSystemName;
    bool m_bProjectedCoordinateSystemName_valueSet;
    String m_VerticalCoordinateSystemName;
    bool m_bVerticalCoordinateSystemName_valueSet;
};
}; // namespace : LX
#endif
