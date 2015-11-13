#if !defined(__LX_HASHCOMPARE_H)
#define __LX_HASHCOMPARE_H
/////////////////////////////////////////////////////////////////////////////
//
// File: HashCompare.h
//
// Description: 
//      Contains the HashCompare class and implementation.
//
/////////////////////////////////////////////////////////////////////////////

#include "LXDefs.h"

namespace LX
{

/////////////////////////////////////////////////////////////////////////////
//
// Class: HashCompare
//
// Description: 
//      The HashCompare class implements the hash functionality needed by 
//      stl std::hash_map class used in Map objects.   Basically Microsoft
//      put in a hash map without putting in the hash.  This class fills
//      that space.
//
//      For some unknown reason STL forces us to hardcode the size of the
//      map.  I forced this to be 512, hopefully this will reduce the number
//      of reallocs.
//
//      This class contains functions for String, int, and unsigned int.
/////////////////////////////////////////////////////////////////////////////
class HashCompare
{	// traits class for hash containers
public:
    enum
    {
	    bucket_size = 4,	// 0 < bucket_size
	    min_buckets = 512   // min_buckets = 2 ^^ N, 0 < N
    };	

    HashCompare()
    {	// construct with default comparator
    }

    size_t operator()(const ::LX::String& strVal) const
    {	
        const wchar_t *p = (const wchar_t *)strVal.c_str();
        size_t hashval = 0;

        if (strVal.size() == 0)
            return 0;

        for (int i = strVal.size() - 1; i >= 0; --i)
            hashval += (*p++) * 31 ^ i;
        return (hashval);
    }

    size_t operator()(const int nValue) const
    {	
        return (size_t)nValue;
    }

    size_t operator()(const unsigned int nValue) const
    {	
        return (size_t)nValue;
    }

    size_t operator()(const double nValue) const
    {	
        return (size_t)nValue;
    }


    bool operator()(const ::LX::String& strVal1, const ::LX::String& strVal2) const
    {
        // test if _Keyval1 ordered before _Keyval2
	    return (strVal1 < strVal2);
    }

    bool operator()(const int nVal1, const int nVal2) const
    {
        // test if _Keyval1 ordered before _Keyval2
	    return (nVal1 < nVal2);
    }

    bool operator()(const unsigned int nVal1, const unsigned int nVal2) const
    {
        // test if _Keyval1 ordered before _Keyval2
	    return (nVal1 < nVal2);
    }

    bool operator()(const double nVal1, const double nVal2) const
    {
        // test if _Keyval1 ordered before _Keyval2
	    return (nVal1 < nVal2);
    }
};

}; // End namespace.
#endif