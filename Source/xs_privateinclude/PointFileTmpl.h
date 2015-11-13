#if !defined(__POINTFILETMPL_H)
#define __POINTFILETMPL_H

#include "PointFile.h"
#include "LXTypesTmpl.h"

namespace LX
{


// Class : PointFile
template<class T>
class PointFileTmpl : public ObjectTmpl<T>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    PointFileTmpl<T> (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~PointFileTmpl ();
public:
	// Collections

public:
	// Properties

    virtual String getFileName() const;
    virtual void setFileName(String value);
    virtual bool hasValue_FileName() const;
    virtual void resetValue_FileName();
    
    virtual String getFileType() const;
    virtual void setFileType(String value);
    virtual bool hasValue_FileType() const;
    virtual void resetValue_FileType();
    
    virtual String getFileFormat() const;
    virtual void setFileFormat(String value);
    virtual bool hasValue_FileFormat() const;
    virtual void resetValue_FileFormat();
    

    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    String m_FileName;
    bool m_bFileName_valueSet;
    String m_FileType;
    bool m_bFileType_valueSet;
    String m_FileFormat;
    bool m_bFileFormat_valueSet;
};
}; // namespace : LX
#endif
