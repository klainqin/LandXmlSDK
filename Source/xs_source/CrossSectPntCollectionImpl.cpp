#include "stdafx.h"
#include "LXTypes.h"
#include "LXTypesTmpl.inl"
#include "CrossSectPntCollectionImpl.h"
namespace LX
{

CrossSectPntCollection* createCrossSectPntCollectionObject (DocumentImpl* pDocument)
{
    CrossSectPntCollection* pCollection = new CrossSectPntCollectionImpl(pDocument);
    if (!pCollection)
        throw Exception(Exception::kUnableToAllocateMemory, L"Unable to allocate member");
    return pCollection;
}

CrossSectPntCollectionImpl::CrossSectPntCollectionImpl (DocumentImpl* pDocument)
{
    m_pDoc = pDocument;
}
}; // namespace : LX
