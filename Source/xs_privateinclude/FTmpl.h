#if !defined(__FTMPL_H)
#define __FTMPL_H

#include "F.h"
#include "LXTypesTmpl.h"

namespace LX
{


// Class : F
template<class T>
class FTmpl : public IntegerCollectionTmpl<T>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    FTmpl (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~FTmpl ();
public:
	// Collections

public:
	// Properties
    virtual IntegerCollection* getN() const;
    virtual void setN(IntegerCollection* value);


    virtual int getI() const;
    virtual void setI(int value);
    virtual bool hasValue_I() const;
    virtual void resetValue_I();
    
    virtual unsigned int getB() const;
    virtual void setB(unsigned int value);
    virtual bool hasValue_B() const;
    virtual void resetValue_B();
    

    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    int m_I;
    bool m_bI_valueSet;
    IntegerCollection *m_N;
    unsigned int m_B;
    bool m_bB_valueSet;
};
}; // namespace : LX
#endif
