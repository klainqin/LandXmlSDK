#if !defined(__CONTOURTMPL_H)
#define __CONTOURTMPL_H

#include "Contour.h"
#include "LXTypesTmpl.h"

namespace LX
{

class PntList2D;
class FeatureCollection;

// Class : Contour
template<class T>
class ContourTmpl : public ObjectTmpl<T>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    ContourTmpl (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~ContourTmpl ();
public:
	// Collections
    virtual FeatureCollection& Feature();
    virtual const FeatureCollection& Feature() const;

public:
	// Properties
    virtual PntList2D* getPntList2D() const;
    virtual void setPntList2D(PntList2D* value);


    virtual double getElev() const;
    virtual void setElev(double value);
    virtual bool hasValue_Elev() const;
    virtual void resetValue_Elev();
    

    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    PntList2D *m_PntList2D;
    FeatureCollection *m_Feature;
    double m_Elev;
    bool m_bElev_valueSet;
};
}; // namespace : LX
#endif
