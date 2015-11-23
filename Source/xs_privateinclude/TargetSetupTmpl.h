#if !defined(__TARGETSETUPTMPL_H)
#define __TARGETSETUPTMPL_H

#include "TargetSetup.h"
#include "LXTypesTmpl.h"

namespace LX
{

class FieldNoteCollection;
class FeatureCollection;

// Class : TargetSetup
template<class T>
class TargetSetupTmpl : public ObjectTmpl<T>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    TargetSetupTmpl (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~TargetSetupTmpl ();
public:
	// Collections
    virtual FieldNoteCollection& FieldNote();
    virtual const FieldNoteCollection& FieldNote() const;
    virtual FeatureCollection& Feature();
    virtual const FeatureCollection& Feature() const;

public:
	// Properties

    virtual String getId() const;
    virtual void setId(String value);
    virtual bool hasValue_Id() const;
    virtual void resetValue_Id();
    
    virtual double getTargetHeight() const;
    virtual void setTargetHeight(double value);
    virtual bool hasValue_TargetHeight() const;
    virtual void resetValue_TargetHeight();
    
    virtual double getEdmTargetVertOffset() const;
    virtual void setEdmTargetVertOffset(double value);
    virtual bool hasValue_EdmTargetVertOffset() const;
    virtual void resetValue_EdmTargetVertOffset();
    
    virtual double getPrismConstant() const;
    virtual void setPrismConstant(double value);
    virtual bool hasValue_PrismConstant() const;
    virtual void resetValue_PrismConstant();
    

    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    FieldNoteCollection *m_FieldNote;
    FeatureCollection *m_Feature;
    String m_Id;
    bool m_bId_valueSet;
    double m_TargetHeight;
    bool m_bTargetHeight_valueSet;
    double m_EdmTargetVertOffset;
    bool m_bEdmTargetVertOffset_valueSet;
    double m_PrismConstant;
    bool m_bPrismConstant_valueSet;
};
}; // namespace : LX
#endif
