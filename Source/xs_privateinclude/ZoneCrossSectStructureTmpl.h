#if !defined(__ZONECROSSSECTSTRUCTURETMPL_H)
#define __ZONECROSSSECTSTRUCTURETMPL_H

#include "ZoneCrossSectStructure.h"
#include "LXTypesTmpl.h"

namespace LX
{

class PntList2D;
class FeatureCollection;

// Class : ZoneCrossSectStructure
template<class T>
class ZoneCrossSectStructureTmpl : public ObjectTmpl<T>, public IIdentifiable<String>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    ZoneCrossSectStructureTmpl<T> (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~ZoneCrossSectStructureTmpl ();
public:
	// Collections
    virtual FeatureCollection& Feature();
    virtual const FeatureCollection& Feature() const;

    virtual bool getObjectId(const String*& pId) const;
    virtual ValueObject* id () const;
    
public:
	// Properties
    virtual PntList2D* getPntList2D() const;
    virtual void setPntList2D(PntList2D* value);

    virtual DoubleCollection* getInnerConnectPnt() const;
    virtual void setInnerConnectPnt(DoubleCollection* value);

    virtual DoubleCollection* getOuterConnectPnt() const;
    virtual void setOuterConnectPnt(DoubleCollection* value);


    virtual String getName() const;
    virtual void setName(String value);
    virtual bool hasValue_Name() const;
    virtual void resetValue_Name();
    
    virtual EnumZoneOffsetType::Values getOffsetMode() const;
    virtual void setOffsetMode(EnumZoneOffsetType::Values value);
    virtual bool hasValue_OffsetMode() const;
    virtual void resetValue_OffsetMode();
    
    virtual double getStartOffset() const;
    virtual void setStartOffset(double value);
    virtual bool hasValue_StartOffset() const;
    virtual void resetValue_StartOffset();
    
    virtual double getStartOffsetElev() const;
    virtual void setStartOffsetElev(double value);
    virtual bool hasValue_StartOffsetElev() const;
    virtual void resetValue_StartOffsetElev();
    
    virtual double getEndOffset() const;
    virtual void setEndOffset(double value);
    virtual bool hasValue_EndOffset() const;
    virtual void resetValue_EndOffset();
    
    virtual double getEndOffsetElev() const;
    virtual void setEndOffsetElev(double value);
    virtual bool hasValue_EndOffsetElev() const;
    virtual void resetValue_EndOffsetElev();
    
    virtual EnumZoneTransitionType::Values getTransition() const;
    virtual void setTransition(EnumZoneTransitionType::Values value);
    virtual bool hasValue_Transition() const;
    virtual void resetValue_Transition();
    
    virtual EnumZonePlacementType::Values getPlacement() const;
    virtual void setPlacement(EnumZonePlacementType::Values value);
    virtual bool hasValue_Placement() const;
    virtual void resetValue_Placement();
    
    virtual String getCatalogReference() const;
    virtual void setCatalogReference(String value);
    virtual bool hasValue_CatalogReference() const;
    virtual void resetValue_CatalogReference();
    

    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    PntList2D *m_PntList2D;
    FeatureCollection *m_Feature;
    String m_Name;
    bool m_bName_valueSet;
    DoubleCollection *m_InnerConnectPnt;
    DoubleCollection *m_OuterConnectPnt;
    EnumZoneOffsetType::Values m_OffsetMode;
    bool m_bOffsetMode_valueSet;
    double m_StartOffset;
    bool m_bStartOffset_valueSet;
    double m_StartOffsetElev;
    bool m_bStartOffsetElev_valueSet;
    double m_EndOffset;
    bool m_bEndOffset_valueSet;
    double m_EndOffsetElev;
    bool m_bEndOffsetElev_valueSet;
    EnumZoneTransitionType::Values m_Transition;
    bool m_bTransition_valueSet;
    EnumZonePlacementType::Values m_Placement;
    bool m_bPlacement_valueSet;
    String m_CatalogReference;
    bool m_bCatalogReference_valueSet;
};
}; // namespace : LX
#endif
