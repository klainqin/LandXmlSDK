#if !defined(__LANDXML_H)
#define __LANDXML_H

#include "LandXML.h"
#include "LXTypes.h"

namespace LX
{

class Units;
class CoordinateSystem;
class Project;
class Application;
class CgPointsCollection;
class AlignmentsCollection;
class AmendmentCollection;
class GradeModelCollection;
class MonumentsCollection;
class ParcelsCollection;
class PlanFeaturesCollection;
class PipeNetworksCollection;
class RoadwaysCollection;
class SurfacesCollection;
class SurveyCollection;
class FeatureDictionaryCollection;

// Class : LandXML
class LandXML : public Object
{

public:
	virtual void toXml (IStream& stream) = 0;
public:
	// Collections
    virtual CgPointsCollection& CgPoints() = 0;
    virtual const CgPointsCollection& CgPoints() const = 0;
    virtual AlignmentsCollection& Alignments() = 0;
    virtual const AlignmentsCollection& Alignments() const = 0;
    virtual AmendmentCollection& Amendment() = 0;
    virtual const AmendmentCollection& Amendment() const = 0;
    virtual GradeModelCollection& GradeModel() = 0;
    virtual const GradeModelCollection& GradeModel() const = 0;
    virtual MonumentsCollection& Monuments() = 0;
    virtual const MonumentsCollection& Monuments() const = 0;
    virtual ParcelsCollection& Parcels() = 0;
    virtual const ParcelsCollection& Parcels() const = 0;
    virtual PlanFeaturesCollection& PlanFeatures() = 0;
    virtual const PlanFeaturesCollection& PlanFeatures() const = 0;
    virtual PipeNetworksCollection& PipeNetworks() = 0;
    virtual const PipeNetworksCollection& PipeNetworks() const = 0;
    virtual RoadwaysCollection& Roadways() = 0;
    virtual const RoadwaysCollection& Roadways() const = 0;
    virtual SurfacesCollection& Surfaces() = 0;
    virtual const SurfacesCollection& Surfaces() const = 0;
    virtual SurveyCollection& Survey() = 0;
    virtual const SurveyCollection& Survey() const = 0;
    virtual FeatureDictionaryCollection& FeatureDictionary() = 0;
    virtual const FeatureDictionaryCollection& FeatureDictionary() const = 0;

public:
	// Properties
    virtual Units* getUnits() const = 0;
    virtual void setUnits(Units* value) = 0;
    
    virtual CoordinateSystem* getCoordinateSystem() const = 0;
    virtual void setCoordinateSystem(CoordinateSystem* value) = 0;
    
    virtual Project* getProject() const = 0;
    virtual void setProject(Project* value) = 0;
    
    virtual Application* getApplication() const = 0;
    virtual void setApplication(Application* value) = 0;
    
    virtual Object* getAnyXml() const = 0;
    virtual void setAnyXml(Object* value) = 0;
    
    
    virtual String getDate() const = 0;
    virtual void setDate(String value) = 0;
    virtual bool hasValue_Date() const = 0;
    virtual void resetValue_Date() = 0;
    
    virtual String getTime() const = 0;
    virtual void setTime(String value) = 0;
    virtual bool hasValue_Time() const = 0;
    virtual void resetValue_Time() = 0;
    
    virtual String getVersion() const = 0;
    virtual void setVersion(String value) = 0;
    virtual bool hasValue_Version() const = 0;
    virtual void resetValue_Version() = 0;
    
    virtual String getLanguage() const = 0;
    virtual void setLanguage(String value) = 0;
    virtual bool hasValue_Language() const = 0;
    virtual void resetValue_Language() = 0;
    
    virtual bool getReadOnly() const = 0;
    virtual void setReadOnly(bool value) = 0;
    virtual bool hasValue_ReadOnly() const = 0;
    virtual void resetValue_ReadOnly() = 0;
    
    virtual int getLandXMLId() const = 0;
    virtual void setLandXMLId(int value) = 0;
    virtual bool hasValue_LandXMLId() const = 0;
    virtual void resetValue_LandXMLId() = 0;
    
    virtual int getCrc() const = 0;
    virtual void setCrc(int value) = 0;
    virtual bool hasValue_Crc() const = 0;
    virtual void resetValue_Crc() = 0;
    
    
protected:
};
}; // namespace : LX
#endif
