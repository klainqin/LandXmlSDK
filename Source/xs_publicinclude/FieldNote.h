#if !defined(__FIELDNOTE_H)
#define __FIELDNOTE_H

#include "FieldNote.h"
#include "LXTypes.h"

namespace LX
{


// Class : FieldNote
class FieldNote : public StringObject
{

public:
	virtual void toXml (IStream& stream) = 0;
public:
	// Collections

public:
	// Properties
    
    
protected:
};
}; // namespace : LX
#endif
