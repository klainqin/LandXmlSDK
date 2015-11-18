#if !defined(__LX_DEFS_H)
#define __LX_DEFS_H

#ifdef _windows_

#ifdef LANDXMLSDKDLL_EXPORTS
   #define LX_DECLSPEC __declspec(dllexport)
#else
   #define LX_DECLSPEC __declspec(dllimport)
#endif

#else

#define LX_DECLSPEC

#endif

#define LX_TEMPLATE_EXTERN extern

#pragma warning (disable : 4812 4996 4482)


#endif