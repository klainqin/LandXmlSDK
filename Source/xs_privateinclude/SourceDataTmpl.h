#if !defined(__SOURCEDATATMPL_H)
#define __SOURCEDATATMPL_H

#include "SourceData.h"
#include "LXTypesTmpl.h"

namespace LX
{

class ChainCollection;
class PointFiles;
class Boundaries;
class Breaklines;
class Contours;
class DataPointsCollection;
class FeatureCollection;

// Class : SourceData
template<class T>
class SourceDataTmpl : public ObjectTmpl<T>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    SourceDataTmpl (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~SourceDataTmpl ();
public:
	// Collections
    virtual ChainCollection& Chain();
    virtual const ChainCollection& Chain() const;
    virtual DataPointsCollection& DataPoints();
    virtual const DataPointsCollection& DataPoints() const;
    virtual FeatureCollection& Feature();
    virtual const FeatureCollection& Feature() const;

public:
	// Properties
    virtual PointFiles* getPointFiles() const;
    virtual void setPointFiles(PointFiles* value);

    virtual Boundaries* getBoundaries() const;
    virtual void setBoundaries(Boundaries* value);

    virtual Breaklines* getBreaklines() const;
    virtual void setBreaklines(Breaklines* value);

    virtual Contours* getContours() const;
    virtual void setContours(Contours* value);



    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    ChainCollection *m_Chain;
    PointFiles *m_PointFiles;
    Boundaries *m_Boundaries;
    Breaklines *m_Breaklines;
    Contours *m_Contours;
    DataPointsCollection *m_DataPoints;
    FeatureCollection *m_Feature;
};
}; // namespace : LX
#endif
