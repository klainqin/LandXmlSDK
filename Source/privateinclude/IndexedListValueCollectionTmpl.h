#if !defined(__LX_INDEXEDLISTVALUECOLLECTIONTMPL_H)
#define __LX_INDEXEDLISTVALUECOLLECTIONTMPL_H


#include "LXDefs.h"

// I hate disabling warnings but...
// This is to disable the "name being truncated to 255 characters for debug info"
// warning that gets spit out when using STL.  This was hiding "real" problems.
#pragma warning(push, 1)
#include <vector>
#pragma warning(pop)

#include "ValueObjectTmpl.h"
#include "IStream.h"
#include "IParserEventSink.h"
#include "IndexedListValueCollection.h"


namespace LX
{
#pragma warning(push)
#pragma warning(disable : 4251 4786 4710 4097) 

template <class T, class BaseT, class TObject>
class IndexedListValueCollectionTmpl : public ValueObjectTmpl<BaseT>
{
public:
	typedef IndexedListValueCollectionTmpl<T, BaseT, TObject>* Type;

	IndexedListValueCollectionTmpl ();
    
    ~IndexedListValueCollectionTmpl ();

	IndexedListValueCollectionTmpl (DocumentImpl* pDoc);

	IndexedListValueCollectionTmpl (
		const IndexedListValueCollectionTmpl<T, BaseT, TObject>& value);

	IndexedListValueCollectionTmpl (
		IndexedListValueCollectionTmpl<T, BaseT, TObject>* pValue);

	IndexedListValueCollectionTmpl (
		IndexedListValueCollection<T>* pValue);

  	IndexedListValueCollectionTmpl (
		const IndexedListValueCollection<T>& pValue);

    void copy (
	    const IndexedListValueCollection<T>& value);

	void addItem (
		T item);

	void addParsedItems (
		const wchar_t* strValue, 
		int nValueLen);

	IndexedListValueCollection<T>& value();

	const IndexedListValueCollection<T>& value() const;

	void toStream (
		IStream& stream) const;

  	String toString () const;

	int size () const;

    void reserve (int nSize);

        void clearItems ();

	const T& at (
		const int i) const;

	T& at (
		const int i);

	const T& operator[] (
		const int i) const;

	T& operator[] (
		const int i);

	static IndexedListValueCollectionTmpl<T, BaseT, TObject>* parseString (
		const wchar_t* strValue, 
		int nValueLen);

	static  IParserEventSink::EventCode parseString (
		const wchar_t* strValue, 
		int nValueLen, 
		Type& value);

	static void streamOut (
		const IndexedListValueCollection<T>* pVec, 
		IStream& stream);

protected:
	// WARNING : DO NOT USE THIS MEMBER IN A DERIVED CLASS ACROSS A DLL BOUNDARY.
	// The std::vector type should not be exported across DLL boundaries.
	std::vector<T> m_arrValues;
};

#pragma warning (pop)

}; // End Namespace.


#endif
  
