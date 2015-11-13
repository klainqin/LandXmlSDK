#if !defined(__LX_GLOBALCOLLECTIONLOCATION_H)
#define __LX_GLOBALCOLLECTIONLOCATION_H

#include "LXDefs.h"
#include "NamedCollectionLocation.h"

namespace LX
{

/////////////////////////////////////////////////////////////////////////////
//
// Class: GlobalCollectionLocation
//
// Description: 
//      The GlobalCollectionLocation implements and overrides the 
//      NamedCollectionLocation interface.  The GlobalCollectionLocation
//      is passed to any object that has a reference stored both in a local collection 
//      (ie in containing parent object) and is also stored in one the document's
//      global collections.  This Location ensures that the object maintains
//      the same identity in both collections and gets removed and added to 
//      to both collections.
//
/////////////////////////////////////////////////////////////////////////////
class GlobalCollectionLocation : public NamedCollectionLocation
{
public:
    GlobalCollectionLocation (
        NamedCollectionLocation* pLocalLocation, 
        NamedCollectionLocation* pGlobalLocation);

    virtual ~GlobalCollectionLocation ();

    virtual bool objectCheckNewName ();

    virtual bool objectRenamed ();

    virtual void objectRemoved ();

    virtual NamedCollectionLocation* getLocalLocation ();

    virtual NamedCollectionLocation* getGlobalLocation ();

    virtual void release ();

private:
    NamedCollectionLocation* m_pLocalLocation;
    NamedCollectionLocation* m_pGlobalLocation;
};

}; // End Namespace.

 
#endif
  