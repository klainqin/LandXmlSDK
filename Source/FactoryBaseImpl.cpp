#include "FactoryBaseImpl.h"
#include "ValueCollectionObjectsImpl.h"

namespace LX
{
IntegerCollection* FactoryBaseImpl::createIntegerCollection ()
{
    return new IntegerCollectionImpl();
}

UIntegerCollection* FactoryBaseImpl::createUIntegerCollection ()
{
    return new UIntegerCollectionImpl();
}

StringCollection* FactoryBaseImpl::createStringCollection ()
{
    return new StringCollectionImpl();
}

DoubleCollection* FactoryBaseImpl::createDoubleCollection ()
{
    return new DoubleCollectionImpl();
}
};