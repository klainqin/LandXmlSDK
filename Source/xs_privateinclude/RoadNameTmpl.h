#if !defined(__ROADNAMETMPL_H)
#define __ROADNAMETMPL_H

#include "RoadName.h"
#include "LXTypesTmpl.h"

namespace LX
{


// Class : RoadName
template<class T>
class RoadNameTmpl : public ObjectTmpl<T>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    RoadNameTmpl<T> (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~RoadNameTmpl ();
public:
	// Collections

public:
	// Properties
    virtual StringCollection* getPclRef() const;
    virtual void setPclRef(StringCollection* value);


    virtual String getRoadNameType() const;
    virtual void setRoadNameType(String value);
    virtual bool hasValue_RoadNameType() const;
    virtual void resetValue_RoadNameType();
    
    virtual String getRoadName() const;
    virtual void setRoadName(String value);
    virtual bool hasValue_RoadName() const;
    virtual void resetValue_RoadName();
    
    virtual String getRoadNameSuffix() const;
    virtual void setRoadNameSuffix(String value);
    virtual bool hasValue_RoadNameSuffix() const;
    virtual void resetValue_RoadNameSuffix();
    
    virtual String getRoadType() const;
    virtual void setRoadType(String value);
    virtual bool hasValue_RoadType() const;
    virtual void resetValue_RoadType();
    

    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    String m_RoadNameType;
    bool m_bRoadNameType_valueSet;
    String m_RoadName;
    bool m_bRoadName_valueSet;
    String m_RoadNameSuffix;
    bool m_bRoadNameSuffix_valueSet;
    String m_RoadType;
    bool m_bRoadType_valueSet;
    StringCollection *m_PclRef;
};
}; // namespace : LX
#endif
