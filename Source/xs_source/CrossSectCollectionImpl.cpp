#include "stdafx.h"
#include "LXTypes.h"
#include "LXTypesTmpl.inl"
#include "CrossSectCollectionImpl.h"
namespace LX
{

CrossSectCollection* createCrossSectCollectionObject (DocumentImpl* pDocument)
{
    CrossSectCollection* pCollection = new CrossSectCollectionImpl(pDocument);
    if (!pCollection)
        throw Exception(Exception::kUnableToAllocateMemory, L"Unable to allocate member");
    return pCollection;
}

CrossSectCollectionImpl::CrossSectCollectionImpl (DocumentImpl* pDocument)
{
    m_pDoc = pDocument;
}
}; // namespace : LX
