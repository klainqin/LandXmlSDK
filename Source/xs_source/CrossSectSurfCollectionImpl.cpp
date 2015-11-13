#include "stdafx.h"
#include "LXTypes.h"
#include "LXTypesTmpl.inl"
#include "CrossSectSurfCollectionImpl.h"
namespace LX
{

CrossSectSurfCollection* createCrossSectSurfCollectionObject (DocumentImpl* pDocument)
{
    CrossSectSurfCollection* pCollection = new CrossSectSurfCollectionImpl(pDocument);
    if (!pCollection)
        throw Exception(Exception::kUnableToAllocateMemory, L"Unable to allocate member");
    return pCollection;
}

CrossSectSurfCollectionImpl::CrossSectSurfCollectionImpl (DocumentImpl* pDocument)
{
    m_pDoc = pDocument;
}
}; // namespace : LX
