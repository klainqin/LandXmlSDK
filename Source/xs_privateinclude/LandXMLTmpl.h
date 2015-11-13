#if !defined(__LANDXMLTMPL_H)
#define __LANDXMLTMPL_H

#include "LandXML.h"
#include "LXTypesTmpl.h"

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
template<class T>
class LandXMLTmpl : public ObjectTmpl<T>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    LandXMLTmpl<T> (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~LandXMLTmpl ();
public:
	// Collections
    virtual CgPointsCollection& CgPoints();
    virtual const CgPointsCollection& CgPoints() const;
    virtual AlignmentsCollection& Alignments();
    virtual const AlignmentsCollection& Alignments() const;
    virtual AmendmentCollection& Amendment();
    virtual const AmendmentCollection& Amendment() const;
    virtual GradeModelCollection& GradeModel();
    virtual const GradeModelCollection& GradeModel() const;
    virtual MonumentsCollection& Monuments();
    virtual const MonumentsCollection& Monuments() const;
    virtual ParcelsCollection& Parcels();
    virtual const ParcelsCollection& Parcels() const;
    virtual PlanFeaturesCollection& PlanFeatures();
    virtual const PlanFeaturesCollection& PlanFeatures() const;
    virtual PipeNetworksCollection& PipeNetworks();
    virtual const PipeNetworksCollection& PipeNetworks() const;
    virtual RoadwaysCollection& Roadways();
    virtual const RoadwaysCollection& Roadways() const;
    virtual SurfacesCollection& Surfaces();
    virtual const SurfacesCollection& Surfaces() const;
    virtual SurveyCollection& Survey();
    virtual const SurveyCollection& Survey() const;
    virtual FeatureDictionaryCollection& FeatureDictionary();
    virtual const FeatureDictionaryCollection& FeatureDictionary() const;

public:
	// Properties
    virtual Units* getUnits() const;
    virtual void setUnits(Units* value);

    virtual CoordinateSystem* getCoordinateSystem() const;
    virtual void setCoordinateSystem(CoordinateSystem* value);

    virtual Project* getProject() const;
    virtual void setProject(Project* value);

    virtual Application* getApplication() const;
    virtual void setApplication(Application* value);

    virtual Object* getAnyXml() const;
    virtual void setAnyXml(Object* value);


    virtual String getDate() const;
    virtual void setDate(String value);
    virtual bool hasValue_Date() const;
    virtual void resetValue_Date();
    
    virtual String getTime() const;
    virtual void setTime(String value);
    virtual bool hasValue_Time() const;
    virtual void resetValue_Time();
    
    virtual String getVersion() const;
    virtual void setVersion(String value);
    virtual bool hasValue_Version() const;
    virtual void resetValue_Version();
    
    virtual String getLanguage() const;
    virtual void setLanguage(String value);
    virtual bool hasValue_Language() const;
    virtual void resetValue_Language();
    
    virtual bool getReadOnly() const;
    virtual void setReadOnly(bool value);
    virtual bool hasValue_ReadOnly() const;
    virtual void resetValue_ReadOnly();
    
    virtual int getLandXMLId() const;
    virtual void setLandXMLId(int value);
    virtual bool hasValue_LandXMLId() const;
    virtual void resetValue_LandXMLId();
    
    virtual int getCrc() const;
    virtual void setCrc(int value);
    virtual bool hasValue_Crc() const;
    virtual void resetValue_Crc();
    

    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    Units *m_Units;
    CoordinateSystem *m_CoordinateSystem;
    Project *m_Project;
    Application *m_Application;
    CgPointsCollection *m_CgPoints;
    AlignmentsCollection *m_Alignments;
    AmendmentCollection *m_Amendment;
    GradeModelCollection *m_GradeModel;
    MonumentsCollection *m_Monuments;
    ParcelsCollection *m_Parcels;
    PlanFeaturesCollection *m_PlanFeatures;
    PipeNetworksCollection *m_PipeNetworks;
    RoadwaysCollection *m_Roadways;
    SurfacesCollection *m_Surfaces;
    SurveyCollection *m_Survey;
    FeatureDictionaryCollection *m_FeatureDictionary;
    Object *m_AnyXml;
    String m_Date;
    bool m_bDate_valueSet;
    String m_Time;
    bool m_bTime_valueSet;
    String m_Version;
    bool m_bVersion_valueSet;
    String m_Language;
    bool m_bLanguage_valueSet;
    bool m_ReadOnly;
    bool m_bReadOnly_valueSet;
    int m_LandXMLId;
    bool m_bLandXMLId_valueSet;
    int m_Crc;
    bool m_bCrc_valueSet;
};
}; // namespace : LX
#endif
