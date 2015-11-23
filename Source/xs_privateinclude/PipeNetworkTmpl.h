#if !defined(__PIPENETWORKTMPL_H)
#define __PIPENETWORKTMPL_H

#include "PipeNetwork.h"
#include "LXTypesTmpl.h"

namespace LX
{

class Structs;
class Pipes;
class FeatureCollection;

// Class : PipeNetwork
template<class T>
class PipeNetworkTmpl : public ObjectTmpl<T>, public IIdentifiable<String>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    PipeNetworkTmpl (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~PipeNetworkTmpl ();
public:
	// Collections
    virtual FeatureCollection& Feature();
    virtual const FeatureCollection& Feature() const;

    virtual bool getObjectId(const String*& pId) const;
    virtual ValueObject* id () const;
    
public:
	// Properties
    virtual Structs* getStructs() const;
    virtual void setStructs(Structs* value);

    virtual Pipes* getPipes() const;
    virtual void setPipes(Pipes* value);


    virtual String getName() const;
    virtual void setName(String value);
    virtual bool hasValue_Name() const;
    virtual void resetValue_Name();
    
    virtual EnumPipeNetworkType::Values getPipeNetType() const;
    virtual void setPipeNetType(EnumPipeNetworkType::Values value);
    virtual bool hasValue_PipeNetType() const;
    virtual void resetValue_PipeNetType();
    
    virtual String getAlignmentRef() const;
    virtual void setAlignmentRef(String value);
    virtual bool hasValue_AlignmentRef() const;
    virtual void resetValue_AlignmentRef();
    
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
    Structs *m_Structs;
    Pipes *m_Pipes;
    FeatureCollection *m_Feature;
    String m_Name;
    bool m_bName_valueSet;
    EnumPipeNetworkType::Values m_PipeNetType;
    bool m_bPipeNetType_valueSet;
    String m_AlignmentRef;
    bool m_bAlignmentRef_valueSet;
    String m_Desc;
    bool m_bDesc_valueSet;
    String m_OID;
    bool m_bOID_valueSet;
    EnumStateType::Values m_State;
    bool m_bState_valueSet;
};
}; // namespace : LX
#endif
