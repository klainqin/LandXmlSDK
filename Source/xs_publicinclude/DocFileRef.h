#if !defined(__DOCFILEREF_H)
#define __DOCFILEREF_H

#include "DocFileRef.h"
#include "LXTypes.h"

namespace LX
{


// Class : DocFileRef
class DocFileRef : public Object
{

public:
	virtual void toXml (IStream& stream) = 0;
public:
	// Collections

public:
	// Properties
    
    virtual String getName() const = 0;
    virtual void setName(String value) = 0;
    virtual bool hasValue_Name() const = 0;
    virtual void resetValue_Name() = 0;
    
    virtual String getLocation() const = 0;
    virtual void setLocation(String value) = 0;
    virtual bool hasValue_Location() const = 0;
    virtual void resetValue_Location() = 0;
    
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
