#if !defined(__FEATURETMPL_H)
#define __FEATURETMPL_H

#include "Feature.h"
#include "LXTypesTmpl.h"

namespace LX
{

class PropertyCollection;
class DocFileRefCollection;

// Class : Feature
template<class T>
class FeatureTmpl : public ObjectTmpl<T>, public IIdentifiable<String>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    FeatureTmpl (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~FeatureTmpl ();
public:
	// Collections
    virtual PropertyCollection& Property();
    virtual const PropertyCollection& Property() const;
    virtual DocFileRefCollection& DocFileRef();
    virtual const DocFileRefCollection& DocFileRef() const;

    virtual bool getObjectId(const String*& pId) const;
    virtual ValueObject* id () const;
    
public:
	// Properties

    virtual String getName() const;
    virtual void setName(String value);
    virtual bool hasValue_Name() const;
    virtual void resetValue_Name();
    
    virtual String getCode() const;
    virtual void setCode(String value);
    virtual bool hasValue_Code() const;
    virtual void resetValue_Code();
    
    virtual String getSource() const;
    virtual void setSource(String value);
    virtual bool hasValue_Source() const;
    virtual void resetValue_Source();
    

    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    PropertyCollection *m_Property;
    DocFileRefCollection *m_DocFileRef;
    String m_Name;
    bool m_bName_valueSet;
    String m_Code;
    bool m_bCode_valueSet;
    String m_Source;
    bool m_bSource_valueSet;
};
}; // namespace : LX
#endif
