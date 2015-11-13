#if !defined(__LX_FACTORYBASEIMPL_H)
#define __LX_FACTORYBASEIMPL_H

#include "LXDefs.h"
#include "LXString.h"
#include "IFactoryBase.h"
#include "IFactory.h"
#include "ValueCollectionObjects.h"

namespace LX
{
class FactoryBaseImpl : public IFactory
{

public:

	virtual IntegerCollection* createIntegerCollection ();
    virtual UIntegerCollection* createUIntegerCollection ();
    virtual StringCollection* createStringCollection ();
    virtual DoubleCollection* createDoubleCollection ();
};
};

#endif