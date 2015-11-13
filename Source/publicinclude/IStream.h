#if !defined(__LX_ISTREAM_H)
#define __LX_ISTREAM_H

/**
 * \file IStream.h
 *
 * Contains the definition of the IStream interface.
 */

#include "LXDefs.h"

// Start an element: left brack at the start of a new line.
#define  ELEM_START L"\n<"

namespace LX
{
/**
 * IStream is the interface pass to certain methods that require an output stream.
 */
class IStream
{
public:

    /**
     * The write method writes a null terminated string to the stream.
     *
     * @param str null terminated string.
     */
	virtual void write (
		const wchar_t* str) = 0;
};
};

#endif

