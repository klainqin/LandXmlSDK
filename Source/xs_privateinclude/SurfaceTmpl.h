#if !defined(__SURFACETMPL_H)
#define __SURFACETMPL_H

#include "Surface.h"
#include "LXTypesTmpl.h"

namespace LX
{

class SourceData;
class Definition;
class Watersheds;
class FeatureCollection;

// Class : Surface
template<class T>
class SurfaceTmpl : public ObjectTmpl<T>, public IIdentifiable<String>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    SurfaceTmpl<T> (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~SurfaceTmpl ();
public:
	// Collections
    virtual FeatureCollection& Feature();
    virtual const FeatureCollection& Feature() const;

    virtual bool getObjectId(const String*& pId) const;
    virtual ValueObject* id () const;
    
public:
	// Properties
    virtual SourceData* getSourceData() const;
    virtual void setSourceData(SourceData* value);

    virtual Definition* getDefinition() const;
    virtual void setDefinition(Definition* value);

    virtual Watersheds* getWatersheds() const;
    virtual void setWatersheds(Watersheds* value);


    virtual String getName() const;
    virtual void setName(String value);
    virtual bool hasValue_Name() const;
    virtual void resetValue_Name();
    
    virtual String getDesc() const;
    virtual void setDesc(String value);
    virtual bool hasValue_Desc() const;
    virtual void resetValue_Desc();
    
    virtual String getOID() const;
    virtual void setOID(String value);
    virtual bool hasValue_OID() const;
    virtual void resetValue_OID();
    
    virtual EnumStateType::Values getState() const;
    virtual void setState(EnumStateType::Values value);
    virtual bool hasValue_State() const;
    virtual void resetValue_State();
    

    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    SourceData *m_SourceData;
    Definition *m_Definition;
    Watersheds *m_Watersheds;
    FeatureCollection *m_Feature;
    String m_Name;
    bool m_bName_valueSet;
    String m_Desc;
    bool m_bDesc_valueSet;
    String m_OID;
    bool m_bOID_valueSet;
    EnumStateType::Values m_State;
    bool m_bState_valueSet;
};
}; // namespace : LX
#endif
