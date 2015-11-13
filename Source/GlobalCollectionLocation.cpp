#include "LXDefs.h"
#include "GlobalCollectionLocation.h"
#include "Exception.h"

namespace LX
{
GlobalCollectionLocation::GlobalCollectionLocation (
    NamedCollectionLocation* pLocalLocation, 
    NamedCollectionLocation* pGlobalLocation)
{
    m_pLocalLocation = pLocalLocation;
    m_pGlobalLocation = pGlobalLocation;
}


GlobalCollectionLocation::~GlobalCollectionLocation ()
{
    m_pLocalLocation->release();
    m_pGlobalLocation->release();
}

NamedCollectionLocation* GlobalCollectionLocation::getLocalLocation ()
{
    return m_pLocalLocation;
}


NamedCollectionLocation* GlobalCollectionLocation::getGlobalLocation ()
{
    return m_pGlobalLocation;
}


bool GlobalCollectionLocation::objectCheckNewName ()
{
    if (!m_pLocalLocation->objectCheckNewName())
        throw Exception(Exception::kObjectIdCollectionConflict, L"Could not rename object within collection.");

    if (!m_pGlobalLocation->objectCheckNewName())
        throw Exception(Exception::kObjectIdHasGlobalConflict, L"Could not rename object within global collection.");

    return true;
}


bool GlobalCollectionLocation::objectRenamed ()
{
    if (!m_pLocalLocation->objectRenamed())
        throw Exception(Exception::kObjectRenamedFailed, L"Rename failed.");

    if (!m_pGlobalLocation->objectRenamed())
        throw Exception(Exception::kObjectRenamedFailed, L"Rename failed.");

    return true;
}


void GlobalCollectionLocation::objectRemoved ()
{
    m_pLocalLocation->objectRemoved();
    m_pGlobalLocation->objectRemoved();
}


void GlobalCollectionLocation::release ()
{
    delete this;
}

}; // End Namespace.

