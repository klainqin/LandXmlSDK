#if !defined(__IRREGULARLINETMPL_H)
#define __IRREGULARLINETMPL_H

#include "IrregularLine.h"
#include "LXTypesTmpl.h"

namespace LX
{

class Start;
class End;
class FeatureCollection;

// Class : IrregularLine
template<class T>
class IrregularLineTmpl : public ObjectTmpl<T>, public IIdentifiable<String>
{

public:
	// Classes

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    IrregularLineTmpl (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~IrregularLineTmpl ();
public:
	// Collections
    virtual FeatureCollection& Feature();
    virtual const FeatureCollection& Feature() const;

    virtual bool getObjectId(const String*& pId) const;
    virtual ValueObject* id () const;
    
public:
	// Properties
    virtual Start* getStart() const;
    virtual void setStart(Start* value);

    virtual End* getEnd() const;
    virtual void setEnd(End* value);

    virtual Object* getPntList() const;
    virtual void setPntList(Object* value);


    virtual String getDesc() const;
    virtual void setDesc(String value);
    virtual bool hasValue_Desc() const;
    virtual void resetValue_Desc();
    
    virtual double getDir() const;
    virtual void setDir(double value);
    virtual bool hasValue_Dir() const;
    virtual void resetValue_Dir();
    
    virtual double getLength() const;
    virtual void setLength(double value);
    virtual bool hasValue_Length() const;
    virtual void resetValue_Length();
    
    virtual String getName() const;
    virtual void setName(String value);
    virtual bool hasValue_Name() const;
    virtual void resetValue_Name();
    
    virtual double getStaStart() const;
    virtual void setStaStart(double value);
    virtual bool hasValue_StaStart() const;
    virtual void resetValue_StaStart();
    
    virtual EnumStateType::Values getState() const;
    virtual void setState(EnumStateType::Values value);
    virtual bool hasValue_State() const;
    virtual void resetValue_State();
    
    virtual String getOID() const;
    virtual void setOID(String value);
    virtual bool hasValue_OID() const;
    virtual void resetValue_OID();
    
    virtual String getSource() const;
    virtual void setSource(String value);
    virtual bool hasValue_Source() const;
    virtual void resetValue_Source();
    
    virtual String getNote() const;
    virtual void setNote(String value);
    virtual bool hasValue_Note() const;
    virtual void resetValue_Note();
    

    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    Start *m_Start;
    End *m_End;
    Object *m_PntList;
    FeatureCollection *m_Feature;
    String m_Desc;
    bool m_bDesc_valueSet;
    double m_Dir;
    bool m_bDir_valueSet;
    double m_Length;
    bool m_bLength_valueSet;
    String m_Name;
    bool m_bName_valueSet;
    double m_StaStart;
    bool m_bStaStart_valueSet;
    EnumStateType::Values m_State;
    bool m_bState_valueSet;
    String m_OID;
    bool m_bOID_valueSet;
    String m_Source;
    bool m_bSource_valueSet;
    String m_Note;
    bool m_bNote_valueSet;
};
}; // namespace : LX
#endif
