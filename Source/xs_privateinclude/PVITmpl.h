#if !defined(__PVITMPL_H)
#define __PVITMPL_H

#include "PVI.h"
#include "LXTypesTmpl.h"

namespace LX
{


// Class : PVI
template<class T>
class PVITmpl : public DoubleCollectionTmpl<T>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    PVITmpl (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~PVITmpl ();
public:
	// Collections

public:
	// Properties

    virtual String getDesc() const;
    virtual void setDesc(String value);
    virtual bool hasValue_Desc() const;
    virtual void resetValue_Desc();
    

    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    String m_Desc;
    bool m_bDesc_valueSet;
};
}; // namespace : LX
#endif
