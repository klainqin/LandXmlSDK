#if !defined(__BRIDGEELEMENTTMPL_H)
#define __BRIDGEELEMENTTMPL_H

#include "BridgeElement.h"
#include "LXTypesTmpl.h"

namespace LX
{


// Class : BridgeElement
template<class T>
class BridgeElementTmpl : public ObjectTmpl<T>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    BridgeElementTmpl (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~BridgeElementTmpl ();
public:
	// Collections

public:
	// Properties

    virtual double getStaStart() const;
    virtual void setStaStart(double value);
    virtual bool hasValue_StaStart() const;
    virtual void resetValue_StaStart();
    
    virtual double getStaEnd() const;
    virtual void setStaEnd(double value);
    virtual bool hasValue_StaEnd() const;
    virtual void resetValue_StaEnd();
    
    virtual double getWidth() const;
    virtual void setWidth(double value);
    virtual bool hasValue_Width() const;
    virtual void resetValue_Width();
    
    virtual EnumBridgeProjectType::Values getProjectType() const;
    virtual void setProjectType(EnumBridgeProjectType::Values value);
    virtual bool hasValue_ProjectType() const;
    virtual void resetValue_ProjectType();
    

    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    double m_StaStart;
    bool m_bStaStart_valueSet;
    double m_StaEnd;
    bool m_bStaEnd_valueSet;
    double m_Width;
    bool m_bWidth_valueSet;
    EnumBridgeProjectType::Values m_ProjectType;
    bool m_bProjectType_valueSet;
};
}; // namespace : LX
#endif
