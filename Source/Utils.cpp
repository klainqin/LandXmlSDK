
#include "stdafx.h"
#include "LXString.h"
#include "Utils.h"

namespace LX
{

const wchar_t* Utils::k_strDelimiters = L" \n\t";


void Utils::print(
	wchar_t* strBuffer,
	const wchar_t * pwchFmt,
    const wchar_t *pwchVal,
    int cchVal)
{
    static wchar_t val[1000];
	cchVal = cchVal>999 ? 999 : cchVal;
    wcsncpy( val, pwchVal, cchVal );
	val[cchVal] = 0;
    //swprintf(strBuffer, pwchFmt,val);
    swprintf(strBuffer, sizeof(strBuffer)/sizeof(wchar_t), pwchFmt, val); //@IOS
}


bool Utils::compareStrings (
	const wchar_t* str1,
	int nLen1, 
	const wchar_t* str2, 
	int nLen2)
{
	// Make sure the lengths are equal.
	if (nLen1 != nLen2) 
		return false;

	// Now compare the strings.
	if (wcsncmp(str1, str2, nLen1) != 0)
		return false;

	return true;
}


bool Utils::tokenizeString (
	const wchar_t* strValue, 
	int nValueLen, 
	const wchar_t* strDelimiters, 
	int nStartPosition, 
	int& nTokenPosition, 
	int& nTokenLen)
{
	// First Iterate through any delimiter space at the begining.
	int i = nStartPosition;
	bool bDataFound = false;
	while (i < nValueLen && !bDataFound)
	{
		if (!wcschr(strDelimiters, strValue[i]))
		{
			nTokenPosition = i;
			bDataFound = true;
		}
		else
		{
			i++;
		}
	}

	// If no data was found then return false)
	if (!bDataFound)
		return false;

	// Otherwise find the end of the token.
	while (i < nValueLen)
	{
		if (wcschr(strDelimiters, strValue[i]))
		{
			nTokenLen = i - nTokenPosition;
			return true;
		}
		else
		{
			i++;
		}
	}

	nTokenLen = nValueLen - nTokenPosition;

	return true;
}


int Utils::findNextNonDigit (
	const wchar_t* str, 
	int nLength)
{
	const static wchar_t* strDigits = L"0123456789";
	int i = 0;
	while (i < nLength && str != 0 && wcschr(strDigits, *str) != NULL)
	{
		str++;
		i++;
	}

	return i;
}

void Utils::PrettyPrintXML(String filename)
{
      char fn[1024];
      mbstate_t mbs;
      mbrlen (NULL,0,&mbs);
      const wchar_t* str = filename.c_str();
      size_t ret = wcsrtombs(fn, &str, 1024, &mbs);
      if (ret == (size_t) - 1)
          return;
    
      FILE* pFileRead = fopen(fn, "r");
      String sPretty;
      wchar_t buffer [100024];
      int iTabCnt = 0;
      int iState = 0;
      const int openE = 1;
      const int endE = 3;
      const int termE = 4;
      size_t numRead = 0;
      char a = ' ';
      char aNext = ' ';


      while((numRead = fread(buffer, sizeof( wchar_t ), 100024, pFileRead)) != 0)
      {
            for(int z = 0; z < numRead; z++)
            {
                  a = buffer[z];
                  aNext = ' ';

                  if(z < numRead - 1)
                  {
                        aNext = buffer[z + 1];
                  }

                  if(a == '\n' || a == '\f' || a == '\r' || a == '\t')
                  {
                        // ignore these characters
                  }
                  else
                  {
                        if(a == '<')
                        {
                              if(aNext == '/')
                              {
                                    if(iState == termE)
                                    {
                                          sPretty += '\n';

                                          for(int i = 0; i < iTabCnt; i++)
                                          {
                                                sPretty += '\t';
                                          }
                                    }
                                    else
                                    {
                                          iState = endE;
                                    }
                              }
                              else if(aNext == '?')
                              {
                                    iState = endE;
                              }
                              else
                              {
                                    iState = openE;
                                    iTabCnt++;
                                    sPretty += '\n';

                                    for(int i = 0; i < iTabCnt; i++)
                                    {
                                          sPretty += '\t';
                                    }
                              }
                        }

                        sPretty += buffer[z];
                        if(a == '/' && aNext == '>')
                        {
                              iState = termE;
                        }

                        if(a == '>')
                        {
                              if(iState == endE)
                              {
                                    iState = termE;
                                    iTabCnt--;
                              }
                              else if (iState == termE)
                              {
                                    iTabCnt--;
                              }
                              else
                              {
                                    iState = openE;
                              }
                        }
                  }
            }
      }

      // Close read file

      fclose(pFileRead);

      // rewrite new file with pretty formatting

      FILE* pFileWrite = fopen(fn, "w+");

      size_t iPrettyLen = sPretty.length();

      fwrite(sPretty.c_str(), sizeof( wchar_t ), iPrettyLen, pFileWrite );

      fclose(pFileWrite);
}
    
bool Utils::wcs2mbs(const wchar_t* wstr, char** str, int& len)
{
    if (wstr == NULL)
        return false;
    
    std::mbstate_t state = std::mbstate_t();
    
    len = std::wcsrtombs(NULL, &wstr, 0, &state);
    if (len < 0)
        return false;
    
    *str = new char[len + 1];
    *str[len] = L'\0';
    
    int ret = std::wcsrtombs(*str, &wstr, len, &state);
    if (ret < 0)
        return false;
    
    return true;
}

/*
bool Utils::mbs2wcs(const char* str, wchar_t** wstr, int& len)
{
    if (str == NULL)
        return false;
    
    std::mbstate_t state = std::mbstate_t();
    
    len = std::mbsrtowcs(NULL, &str, 0, &state);
    if (len < 0)
        return false;
    
    *wstr = new wchar_t[len + 1];
    *wstr[len] = L'\0';
    
    int ret = std::mbsrtowcs(*wstr, &str, len, &state);
    if (ret < 0)
        return false;

    return true;
}

bool Utils::mbs2wcs(const char* str, String& wstr)
{
    wchar_t* dst = NULL;
    int len;
    if (Utils::mbs2wcs(str, &dst, len))
    {
        wstr = dst;
        delete[] dst;
        return true;
    }
    
    return false;
}
 */

}; // End namespace LX
