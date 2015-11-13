#if !defined(__LX_EXCEPTION_H)
#define __LX_EXCEPTION_H

/////////////////////////////////////////////////////////////////////////////
//
// File: Exception.h
//
// Description: 
//		Contains the definition of the Exception class.
//
// $History: Exception.h $
//
/////////////////////////////////////////////////////////////////////////////

#include "LXDefs.h"
#include "LXString.h"

namespace LX
{

class LX_DECLSPEC Exception
{
public:
	enum Code
	{
		kFail = 1,
		kParserFailure,
		kUnableToInsertDuplicateItemInCollection, 
		kOperationCancelledByUser, 
		kSaxException,
        kWin32Exception,
		kUnableToAllocateMemory,
		kCollectionMapInsertFailed,
		kUnableToAddDuplicateItemPointer,
        kUnableToCreateDocumentObject,
        kObjectIsAlreadyInCollection,
        kInvalidCollectionItem,
        kItemIsAlreadyInACollection,
        kIteratorNextElementDoesNotExist,
        kObjectIdCollectionConflict,
        kObjectRenamedFailed,
        kObjectIdHasGlobalConflict,
        kObjectDoesNotBelongToDocument,
        kIteratorCurrentElementDoesNotExist,
        kUnresolvableCoorDueToBadPntRef, 
        kUnresolvableCoorNoValueOrReference,
	};

	Exception (
		const Code eCode, 
		const String strMessage);

	virtual Code getCode () const;

	virtual String getMessage () const;

protected:
	String m_strMessage;
	Code m_eCode;
};

};

#endif