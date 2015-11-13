#if !defined(__LX_VALUEOBJECTMPL_INL)
#define __LX_VALUEOBJECTMPL_INL

/////////////////////////////////////////////////////////////////////////////
//
// File: ValueObject.cpp
//
// Description: 
//		Contains the implementation of the ValueObject class
//
//
/////////////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "ValueObjectTmpl.h"

#include "ObjectTmpl.inl"

namespace LX
{
template<class T>
ValueObjectTmpl<T>::ValueObjectTmpl<T> ()
{
	m_bNothing = true;
}

template<class T>
ValueObjectTmpl<T>::ValueObjectTmpl<T> (
    DocumentImpl* pDoc)
: ObjectTmpl<T>(pDoc)
{
	m_bNothing = true;
}

template<class T>
bool ValueObjectTmpl<T>::isNothing () const
{
	return m_bNothing;
}


template<class T>
void ValueObjectTmpl<T>::setToNothing ()
{
	m_bNothing = true;
}

}; // End namespace LX

#endif