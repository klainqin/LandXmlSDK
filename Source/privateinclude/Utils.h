#if !defined(__LX_UTILS_HEADER)
#define __LX_UTILS_HEADER

namespace LX
{
    
class Utils
{
public:
	static void print (
		wchar_t* strBuffer, 
		const wchar_t * pwchFmt,
		const wchar_t *pwchVal,
		int cchVal);

	static bool compareStrings (
		const wchar_t* str1,
		int nLen1, 
		const wchar_t* str2, 
		int nLen2);

	static bool tokenizeString (
		const wchar_t* strValue, 
		int nValueLen, 
		const wchar_t* strDelimiters, 
		int nStartPosition, 
		int& nTokenPosition, 
		int& nTokenLen);

	static int findNextNonDigit (
		const wchar_t* str, 
		int nLength);

    static void PrettyPrintXML(String filename);
    
    static bool wcs2mbs(const wchar_t* wstr, char** str, int& len);
    
    //static bool xmlChar2mbs(xmlChar* wstr, char** str, int& len);
    
    //static bool mbs2wcs(const char* str, wchar_t** wstr, int& len);
    
    //static bool mbs2wcs(const char* str, String& wstr);

	const static wchar_t* k_strDelimiters;

};
		
}; // End namespace LX
#endif