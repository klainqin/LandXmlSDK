#if !defined(__PTMPL_H)
#define __PTMPL_H

#include "P.h"
#include "LXTypesTmpl.h"
#include "PointTypeImpl.h"

namespace LX
{

class CgPoint;

// Class : P
template<class T>
class PTmpl : public PointTypeTmpl<T>, public IIdentifiable<unsigned int>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    PTmpl (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~PTmpl ();
public:
	// Collections

    virtual bool getObjectId(const unsigned int*& pId) const;
    virtual ValueObject* id () const;
    
public:
	// Properties

    virtual unsigned int getId() const;
    virtual void setId(unsigned int value);
    virtual bool hasValue_Id() const;
    virtual void resetValue_Id();
    

public:
	// Resolvers
    virtual CgPoint* resolvePntRef();
    virtual const DoubleCollection& resolveCoor() const;
    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    unsigned int m_Id;
    bool m_bId_valueSet;
};
}; // namespace : LX
#endif
