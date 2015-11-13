#if !defined(__INVERTTMPL_H)
#define __INVERTTMPL_H

#include "Invert.h"
#include "LXTypesTmpl.h"

namespace LX
{

class Pipe;

// Class : Invert
template<class T>
class InvertTmpl : public ObjectTmpl<T>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    InvertTmpl<T> (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~InvertTmpl ();
public:
	// Collections

public:
	// Properties

    virtual String getDesc() const;
    virtual void setDesc(String value);
    virtual bool hasValue_Desc() const;
    virtual void resetValue_Desc();
    
    virtual double getElev() const;
    virtual void setElev(double value);
    virtual bool hasValue_Elev() const;
    virtual void resetValue_Elev();
    
    virtual EnumInOut::Values getFlowDir() const;
    virtual void setFlowDir(EnumInOut::Values value);
    virtual bool hasValue_FlowDir() const;
    virtual void resetValue_FlowDir();
    
    virtual String getRefPipe() const;
    virtual void setRefPipe(String value);
    virtual bool hasValue_RefPipe() const;
    virtual void resetValue_RefPipe();
    

public:
	// Resolvers
    virtual Pipe* resolveRefPipe();
    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    String m_Desc;
    bool m_bDesc_valueSet;
    double m_Elev;
    bool m_bElev_valueSet;
    EnumInOut::Values m_FlowDir;
    bool m_bFlowDir_valueSet;
    String m_RefPipe;
    bool m_bRefPipe_valueSet;
};
}; // namespace : LX
#endif
