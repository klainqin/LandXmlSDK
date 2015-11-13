#include "stdafx.h"
#include "LXTypes.h"
#include "CrossSectSurf.h"
#include "PntList2D.h"
#include "FeatureCollection.h"
#include "LXTypesTmpl.h"
#include "CrossSectSurfImpl.h"
#include "PntList2DImpl.h"
#include "FeatureCollectionImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
CrossSectSurfTmpl<T>::CrossSectSurfTmpl<T> (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_PntList2D = NULL;
    m_Feature = createFeatureCollectionObject(pDoc);
    m_Name = L"";
    m_bName_valueSet = false;
    m_Desc = L"";
    m_bDesc_valueSet = false;
    m_State = EnumStateType::Values::k_null;
    m_bState_valueSet = false;
}


template<class T>
CrossSectSurfTmpl<T>::~CrossSectSurfTmpl<T> ()
{
    if (m_PntList2D != NULL)
    {
        m_PntList2D->release();
        m_PntList2D = NULL;
    }
    if (m_Feature != NULL)
    {
        m_Feature->release();
        m_Feature = NULL;
    }
}


template <class T>
bool CrossSectSurfTmpl<T>::getObjectId(const String*& pId) const
{
    if (m_bName_valueSet)
    {
        pId = &m_Name;
        return true;
    }
    else
    {
        pId = NULL;
        return false;
    }
}

template <class T>
ValueObject* CrossSectSurfTmpl<T>::id() const
{
    if (m_bName_valueSet)
    {
        ValueObject* pValue = new StringObjectTmpl<StringObject>(m_Name);
        if (!pValue)
	         throw Exception(Exception::kUnableToAllocateMemory, L"Out of Memory.");
        return pValue;
    }
    else
        return NULL;
}

template <class T>
FeatureCollection& CrossSectSurfTmpl<T>::Feature()
{
    return *m_Feature;
}

template <class T>
const FeatureCollection& CrossSectSurfTmpl<T>::Feature() const
{
    return *m_Feature;
}


template <class T>
PntList2D* CrossSectSurfTmpl<T>::getPntList2D() const
{
    return m_PntList2D;
}

template <class T>
void CrossSectSurfTmpl<T>::setPntList2D(PntList2D* pValue)
{
    m_PntList2D = pValue;
}


template <class T>
String CrossSectSurfTmpl<T>::getName() const
{
    return m_Name;
}

template <class T>
void CrossSectSurfTmpl<T>::setName(String value)
{
    String oldValue = m_Name;
    m_Name = value;
    if (m_pCollectionLocation)
    {
        // We are in a collection. Now check to make sure we are in a named collection.
        NamedCollectionLocation* pNamedCollLoc = dynamic_cast<NamedCollectionLocation*>(m_pCollectionLocation);
        if (pNamedCollLoc)
        {
            try
            {
                // First check the name.
                if (!pNamedCollLoc->objectCheckNewName())
	                 throw Exception(Exception::kObjectIdCollectionConflict, L"Unable to change identifying member, because collection name conflict.");
                // We are in a named collection. Now tell the collection the object has been renamed.
                if (!pNamedCollLoc->objectRenamed())
                    // Object could not be renamed within the collection.
	                 throw Exception(Exception::kObjectRenamedFailed, L"Could not rename object within collection.");
            }
            catch (Exception e)
            {
                m_Name = oldValue;
                throw;
            }
        }
    }
    m_bName_valueSet = true;
}

template <class T>
bool CrossSectSurfTmpl<T>::hasValue_Name() const
{
    return m_bName_valueSet;
}

template <class T>
void CrossSectSurfTmpl<T>::resetValue_Name()
{
    m_bName_valueSet = false;
}


template <class T>
String CrossSectSurfTmpl<T>::getDesc() const
{
    return m_Desc;
}

template <class T>
void CrossSectSurfTmpl<T>::setDesc(String value)
{
    m_Desc = value;
    m_bDesc_valueSet = true;
}

template <class T>
bool CrossSectSurfTmpl<T>::hasValue_Desc() const
{
    return m_bDesc_valueSet;
}

template <class T>
void CrossSectSurfTmpl<T>::resetValue_Desc()
{
    m_bDesc_valueSet = false;
}


template <class T>
EnumStateType::Values CrossSectSurfTmpl<T>::getState() const
{
    return m_State;
}

template <class T>
void CrossSectSurfTmpl<T>::setState(EnumStateType::Values value)
{
    m_State = value;
    m_bState_valueSet = true;
}

template <class T>
bool CrossSectSurfTmpl<T>::hasValue_State() const
{
    return m_bState_valueSet;
}

template <class T>
void CrossSectSurfTmpl<T>::resetValue_State()
{
    m_bState_valueSet = false;
}



template <class T>
void CrossSectSurfTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"CrossSectSurf";
    stream.write(L"<");
    stream.write(kstrElementName);
    if (m_bName_valueSet)
    {
        stream.write(L" name=\"");
        StringObjectImpl::streamOut(m_Name, stream);
        stream.write(L"\"");
    }
    if (m_bDesc_valueSet)
    {
        stream.write(L" desc=\"");
        StringObjectImpl::streamOut(m_Desc, stream);
        stream.write(L"\"");
    }
    if (m_bState_valueSet)
    {
        stream.write(L" state=\"");
        EnumStateTypeImpl::streamOut(m_State, stream);
        stream.write(L"\"");
    }
    stream.write(L">");
    if (m_PntList2D)
    {
    	m_PntList2D->toXml(stream);
    }
    if (m_Feature)
    {
    	m_Feature->toXml(stream);
    }
    stream.write(L"</");
    stream.write(kstrElementName);
    stream.write(L">");
}

template <class T>
Object::ValidityEnum CrossSectSurfTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    if (m_PntList2D)
    {
        if (m_PntList2D->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_Feature)
    {
        if (m_Feature->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (!m_bName_valueSet)
    {
        pEventSink->onEvent(IValidationEventSink::EventCode::kRequiredValueNotSet, this, L"Name", L"Required value not set");
        returnCode = Object::kInvalid;
    }
    return returnCode;
}

}; // namespace : LX
