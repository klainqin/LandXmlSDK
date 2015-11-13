#include "LXDefs.h"
#include "IStream.h"

namespace LX {

class Debug
{
public:
	static LX_DECLSPEC void setDebugStream(
		IStream* pStream);

	static void write (
		wchar_t* strEntry);

	static void writeLn (
		wchar_t* strEntry);

	static void writeBuffer ();

	static wchar_t Buffer[2000];

private:
	static IStream* m_pStream;
};

}; // End Namespace