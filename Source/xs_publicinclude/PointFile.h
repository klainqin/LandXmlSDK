#if !defined(__POINTFILE_H)
#define __POINTFILE_H

#include "PointFile.h"
#include "LXTypes.h"

namespace LX
{


// Class : PointFile
class PointFile : public Object
{

public:
	virtual void toXml (IStream& stream) = 0;
public:
	// Collections

public:
	// Properties
    
    virtual String getFileName() const = 0;
    virtual void setFileName(String value) = 0;
    virtual bool hasValue_FileName() const = 0;
    virtual void resetValue_FileName() = 0;
    
    virtual String getFileType() const = 0;
    virtual void setFileType(String value) = 0;
    virtual bool hasValue_FileType() const = 0;
    virtual void resetValue_FileType() = 0;
    
    virtual String getFileFormat() const = 0;
    virtual void setFileFormat(String value) = 0;
    virtual bool hasValue_FileFormat() const = 0;
    virtual void resetValue_FileFormat() = 0;
    
    
protected:
};
}; // namespace : LX
#endif
