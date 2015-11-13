#include "stdafx.h"
#include "LXTypes.h"
#include "LXDefs.h"
#include "FactoryImpl.h"
#include "ImperialImpl.h"
#include "BeginRunoutStaImpl.h"
#include "DesignSpeedImpl.h"

namespace LX
{
Imperial* FactoryImpl::createImperial()
{
    return new ImperialImpl(&m_doc);
}

BeginRunoutSta* FactoryImpl::createBeginRunoutSta()
{
    return new BeginRunoutStaImpl(&m_doc);
}

DesignSpeed* FactoryImpl::createDesignSpeed()
{
    return new DesignSpeedImpl(&m_doc);
}

}; // namespace : LX
