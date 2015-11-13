#include "LXEnumTypesTmpl.h"
#include "LXEnumTypes.h"
#include "ValueTypeObjectsTmpl.inl"

namespace LX
{
template <class T>
const wchar_t* EnumPointGeometryTypeTmpl<T>::m_arrValues[] = {
    {L"null"},
    {L"point"},
    {L"curve"},
};

template<class T>
EnumPointGeometryTypeTmpl<T>::EnumPointGeometryTypeTmpl<T>() {m_eValue = k_null;}

template<class T>
EnumPointGeometryTypeTmpl<T>::EnumPointGeometryTypeTmpl<T>(DocumentImpl* pDoc) {m_eValue = k_null;}

template<class T>
EnumPointGeometryTypeTmpl<T>::EnumPointGeometryTypeTmpl<T> (EnumPointGeometryType::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
EnumPointGeometryType::Values EnumPointGeometryTypeTmpl<T>::value () {return m_eValue;}

template<class T>
void EnumPointGeometryTypeTmpl<T>::setValue (EnumPointGeometryType::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
void EnumPointGeometryTypeTmpl<T>::streamOut (EnumPointGeometryType::Values eVal, IStream& stream) {stream.write(m_arrValues[eVal]);}

template<class T>
const int EnumPointGeometryTypeTmpl<T>::k_iNumValues = 3;

template<class T>
EnumPointGeometryType::Values EnumPointGeometryTypeTmpl<T>::parseString(const wchar_t* strValue, int nValueLen)
{
	return static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
}

template<class T>
IParserEventSink::EventCode EnumPointGeometryTypeTmpl<T>::parseString(const wchar_t* strValue, int nValueLen, EnumPointGeometryType::Values& eValue)
{
	int iValue = findString(strValue, nValueLen,  m_arrValues, k_iNumValues);
	if (iValue == -1)
		return IParserEventSink::EventCode::kInvalidEnumerationValue;
	eValue = static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
	return IParserEventSink::EventCode::kOk;
}


template <class T>
const wchar_t* EnumElevationTypeTmpl<T>::m_arrValues[] = {
    {L"null"},
    {L"meter"},
    {L"kilometer"},
    {L"feet"},
    {L"miles"},
};

template<class T>
EnumElevationTypeTmpl<T>::EnumElevationTypeTmpl<T>() {m_eValue = k_null;}

template<class T>
EnumElevationTypeTmpl<T>::EnumElevationTypeTmpl<T>(DocumentImpl* pDoc) {m_eValue = k_null;}

template<class T>
EnumElevationTypeTmpl<T>::EnumElevationTypeTmpl<T> (EnumElevationType::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
EnumElevationType::Values EnumElevationTypeTmpl<T>::value () {return m_eValue;}

template<class T>
void EnumElevationTypeTmpl<T>::setValue (EnumElevationType::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
void EnumElevationTypeTmpl<T>::streamOut (EnumElevationType::Values eVal, IStream& stream) {stream.write(m_arrValues[eVal]);}

template<class T>
const int EnumElevationTypeTmpl<T>::k_iNumValues = 5;

template<class T>
EnumElevationType::Values EnumElevationTypeTmpl<T>::parseString(const wchar_t* strValue, int nValueLen)
{
	return static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
}

template<class T>
IParserEventSink::EventCode EnumElevationTypeTmpl<T>::parseString(const wchar_t* strValue, int nValueLen, EnumElevationType::Values& eValue)
{
	int iValue = findString(strValue, nValueLen,  m_arrValues, k_iNumValues);
	if (iValue == -1)
		return IParserEventSink::EventCode::kInvalidEnumerationValue;
	eValue = static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
	return IParserEventSink::EventCode::kOk;
}


template <class T>
const wchar_t* EnumTrafficTurnRestrictionTmpl<T>::m_arrValues[] = {
    {L"null"},
    {L"none"},
    {L"no-left-turn"},
    {L"no-right-turn"},
    {L"no-U-turn "},
    {L"no-turn "},
};

template<class T>
EnumTrafficTurnRestrictionTmpl<T>::EnumTrafficTurnRestrictionTmpl<T>() {m_eValue = k_null;}

template<class T>
EnumTrafficTurnRestrictionTmpl<T>::EnumTrafficTurnRestrictionTmpl<T>(DocumentImpl* pDoc) {m_eValue = k_null;}

template<class T>
EnumTrafficTurnRestrictionTmpl<T>::EnumTrafficTurnRestrictionTmpl<T> (EnumTrafficTurnRestriction::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
EnumTrafficTurnRestriction::Values EnumTrafficTurnRestrictionTmpl<T>::value () {return m_eValue;}

template<class T>
void EnumTrafficTurnRestrictionTmpl<T>::setValue (EnumTrafficTurnRestriction::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
void EnumTrafficTurnRestrictionTmpl<T>::streamOut (EnumTrafficTurnRestriction::Values eVal, IStream& stream) {stream.write(m_arrValues[eVal]);}

template<class T>
const int EnumTrafficTurnRestrictionTmpl<T>::k_iNumValues = 6;

template<class T>
EnumTrafficTurnRestriction::Values EnumTrafficTurnRestrictionTmpl<T>::parseString(const wchar_t* strValue, int nValueLen)
{
	return static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
}

template<class T>
IParserEventSink::EventCode EnumTrafficTurnRestrictionTmpl<T>::parseString(const wchar_t* strValue, int nValueLen, EnumTrafficTurnRestriction::Values& eValue)
{
	int iValue = findString(strValue, nValueLen,  m_arrValues, k_iNumValues);
	if (iValue == -1)
		return IParserEventSink::EventCode::kInvalidEnumerationValue;
	eValue = static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
	return IParserEventSink::EventCode::kOk;
}


template <class T>
const wchar_t* EnumAngularTypeTmpl<T>::m_arrValues[] = {
    {L"null"},
    {L"radians"},
    {L"grads"},
    {L"decimal degrees"},
    {L"decimal dd.mm.ss"},
};

template<class T>
EnumAngularTypeTmpl<T>::EnumAngularTypeTmpl<T>() {m_eValue = k_null;}

template<class T>
EnumAngularTypeTmpl<T>::EnumAngularTypeTmpl<T>(DocumentImpl* pDoc) {m_eValue = k_null;}

template<class T>
EnumAngularTypeTmpl<T>::EnumAngularTypeTmpl<T> (EnumAngularType::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
EnumAngularType::Values EnumAngularTypeTmpl<T>::value () {return m_eValue;}

template<class T>
void EnumAngularTypeTmpl<T>::setValue (EnumAngularType::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
void EnumAngularTypeTmpl<T>::streamOut (EnumAngularType::Values eVal, IStream& stream) {stream.write(m_arrValues[eVal]);}

template<class T>
const int EnumAngularTypeTmpl<T>::k_iNumValues = 5;

template<class T>
EnumAngularType::Values EnumAngularTypeTmpl<T>::parseString(const wchar_t* strValue, int nValueLen)
{
	return static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
}

template<class T>
IParserEventSink::EventCode EnumAngularTypeTmpl<T>::parseString(const wchar_t* strValue, int nValueLen, EnumAngularType::Values& eValue)
{
	int iValue = findString(strValue, nValueLen,  m_arrValues, k_iNumValues);
	if (iValue == -1)
		return IParserEventSink::EventCode::kInvalidEnumerationValue;
	eValue = static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
	return IParserEventSink::EventCode::kOk;
}


template <class T>
const wchar_t* EnumMetHeightTmpl<T>::m_arrValues[] = {
    {L"null"},
    {L"millimeter"},
    {L"centimeter"},
    {L"meter"},
    {L"kilometer"},
};

template<class T>
EnumMetHeightTmpl<T>::EnumMetHeightTmpl<T>() {m_eValue = k_null;}

template<class T>
EnumMetHeightTmpl<T>::EnumMetHeightTmpl<T>(DocumentImpl* pDoc) {m_eValue = k_null;}

template<class T>
EnumMetHeightTmpl<T>::EnumMetHeightTmpl<T> (EnumMetHeight::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
EnumMetHeight::Values EnumMetHeightTmpl<T>::value () {return m_eValue;}

template<class T>
void EnumMetHeightTmpl<T>::setValue (EnumMetHeight::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
void EnumMetHeightTmpl<T>::streamOut (EnumMetHeight::Values eVal, IStream& stream) {stream.write(m_arrValues[eVal]);}

template<class T>
const int EnumMetHeightTmpl<T>::k_iNumValues = 5;

template<class T>
EnumMetHeight::Values EnumMetHeightTmpl<T>::parseString(const wchar_t* strValue, int nValueLen)
{
	return static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
}

template<class T>
IParserEventSink::EventCode EnumMetHeightTmpl<T>::parseString(const wchar_t* strValue, int nValueLen, EnumMetHeight::Values& eValue)
{
	int iValue = findString(strValue, nValueLen,  m_arrValues, k_iNumValues);
	if (iValue == -1)
		return IParserEventSink::EventCode::kInvalidEnumerationValue;
	eValue = static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
	return IParserEventSink::EventCode::kOk;
}


template <class T>
const wchar_t* EnumZoneSurfaceTypeTmpl<T>::m_arrValues[] = {
    {L"null"},
    {L"finalSurface"},
    {L"subgrade"},
};

template<class T>
EnumZoneSurfaceTypeTmpl<T>::EnumZoneSurfaceTypeTmpl<T>() {m_eValue = k_null;}

template<class T>
EnumZoneSurfaceTypeTmpl<T>::EnumZoneSurfaceTypeTmpl<T>(DocumentImpl* pDoc) {m_eValue = k_null;}

template<class T>
EnumZoneSurfaceTypeTmpl<T>::EnumZoneSurfaceTypeTmpl<T> (EnumZoneSurfaceType::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
EnumZoneSurfaceType::Values EnumZoneSurfaceTypeTmpl<T>::value () {return m_eValue;}

template<class T>
void EnumZoneSurfaceTypeTmpl<T>::setValue (EnumZoneSurfaceType::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
void EnumZoneSurfaceTypeTmpl<T>::streamOut (EnumZoneSurfaceType::Values eVal, IStream& stream) {stream.write(m_arrValues[eVal]);}

template<class T>
const int EnumZoneSurfaceTypeTmpl<T>::k_iNumValues = 3;

template<class T>
EnumZoneSurfaceType::Values EnumZoneSurfaceTypeTmpl<T>::parseString(const wchar_t* strValue, int nValueLen)
{
	return static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
}

template<class T>
IParserEventSink::EventCode EnumZoneSurfaceTypeTmpl<T>::parseString(const wchar_t* strValue, int nValueLen, EnumZoneSurfaceType::Values& eValue)
{
	int iValue = findString(strValue, nValueLen,  m_arrValues, k_iNumValues);
	if (iValue == -1)
		return IParserEventSink::EventCode::kInvalidEnumerationValue;
	eValue = static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
	return IParserEventSink::EventCode::kOk;
}


template <class T>
const wchar_t* EnumFunctionalClassTypeTmpl<T>::m_arrValues[] = {
    {L"null"},
    {L"arterial"},
    {L"collector "},
    {L"local"},
};

template<class T>
EnumFunctionalClassTypeTmpl<T>::EnumFunctionalClassTypeTmpl<T>() {m_eValue = k_null;}

template<class T>
EnumFunctionalClassTypeTmpl<T>::EnumFunctionalClassTypeTmpl<T>(DocumentImpl* pDoc) {m_eValue = k_null;}

template<class T>
EnumFunctionalClassTypeTmpl<T>::EnumFunctionalClassTypeTmpl<T> (EnumFunctionalClassType::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
EnumFunctionalClassType::Values EnumFunctionalClassTypeTmpl<T>::value () {return m_eValue;}

template<class T>
void EnumFunctionalClassTypeTmpl<T>::setValue (EnumFunctionalClassType::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
void EnumFunctionalClassTypeTmpl<T>::streamOut (EnumFunctionalClassType::Values eVal, IStream& stream) {stream.write(m_arrValues[eVal]);}

template<class T>
const int EnumFunctionalClassTypeTmpl<T>::k_iNumValues = 4;

template<class T>
EnumFunctionalClassType::Values EnumFunctionalClassTypeTmpl<T>::parseString(const wchar_t* strValue, int nValueLen)
{
	return static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
}

template<class T>
IParserEventSink::EventCode EnumFunctionalClassTypeTmpl<T>::parseString(const wchar_t* strValue, int nValueLen, EnumFunctionalClassType::Values& eValue)
{
	int iValue = findString(strValue, nValueLen,  m_arrValues, k_iNumValues);
	if (iValue == -1)
		return IParserEventSink::EventCode::kInvalidEnumerationValue;
	eValue = static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
	return IParserEventSink::EventCode::kOk;
}


template <class T>
const wchar_t* EnumMetVolumeTmpl<T>::m_arrValues[] = {
    {L"null"},
    {L"cubicMeter"},
    {L"liter"},
    {L"hectareMeter"},
};

template<class T>
EnumMetVolumeTmpl<T>::EnumMetVolumeTmpl<T>() {m_eValue = k_null;}

template<class T>
EnumMetVolumeTmpl<T>::EnumMetVolumeTmpl<T>(DocumentImpl* pDoc) {m_eValue = k_null;}

template<class T>
EnumMetVolumeTmpl<T>::EnumMetVolumeTmpl<T> (EnumMetVolume::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
EnumMetVolume::Values EnumMetVolumeTmpl<T>::value () {return m_eValue;}

template<class T>
void EnumMetVolumeTmpl<T>::setValue (EnumMetVolume::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
void EnumMetVolumeTmpl<T>::streamOut (EnumMetVolume::Values eVal, IStream& stream) {stream.write(m_arrValues[eVal]);}

template<class T>
const int EnumMetVolumeTmpl<T>::k_iNumValues = 4;

template<class T>
EnumMetVolume::Values EnumMetVolumeTmpl<T>::parseString(const wchar_t* strValue, int nValueLen)
{
	return static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
}

template<class T>
IParserEventSink::EventCode EnumMetVolumeTmpl<T>::parseString(const wchar_t* strValue, int nValueLen, EnumMetVolume::Values& eValue)
{
	int iValue = findString(strValue, nValueLen,  m_arrValues, k_iNumValues);
	if (iValue == -1)
		return IParserEventSink::EventCode::kInvalidEnumerationValue;
	eValue = static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
	return IParserEventSink::EventCode::kOk;
}


template <class T>
const wchar_t* EnumBridgeProjectTypeTmpl<T>::m_arrValues[] = {
    {L"null"},
    {L"new"},
    {L"existing"},
};

template<class T>
EnumBridgeProjectTypeTmpl<T>::EnumBridgeProjectTypeTmpl<T>() {m_eValue = k_null;}

template<class T>
EnumBridgeProjectTypeTmpl<T>::EnumBridgeProjectTypeTmpl<T>(DocumentImpl* pDoc) {m_eValue = k_null;}

template<class T>
EnumBridgeProjectTypeTmpl<T>::EnumBridgeProjectTypeTmpl<T> (EnumBridgeProjectType::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
EnumBridgeProjectType::Values EnumBridgeProjectTypeTmpl<T>::value () {return m_eValue;}

template<class T>
void EnumBridgeProjectTypeTmpl<T>::setValue (EnumBridgeProjectType::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
void EnumBridgeProjectTypeTmpl<T>::streamOut (EnumBridgeProjectType::Values eVal, IStream& stream) {stream.write(m_arrValues[eVal]);}

template<class T>
const int EnumBridgeProjectTypeTmpl<T>::k_iNumValues = 3;

template<class T>
EnumBridgeProjectType::Values EnumBridgeProjectTypeTmpl<T>::parseString(const wchar_t* strValue, int nValueLen)
{
	return static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
}

template<class T>
IParserEventSink::EventCode EnumBridgeProjectTypeTmpl<T>::parseString(const wchar_t* strValue, int nValueLen, EnumBridgeProjectType::Values& eValue)
{
	int iValue = findString(strValue, nValueLen,  m_arrValues, k_iNumValues);
	if (iValue == -1)
		return IParserEventSink::EventCode::kInvalidEnumerationValue;
	eValue = static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
	return IParserEventSink::EventCode::kOk;
}


template <class T>
const wchar_t* EnumTrafficControlPositionTmpl<T>::m_arrValues[] = {
    {L"null"},
    {L"side"},
    {L"overhead"},
};

template<class T>
EnumTrafficControlPositionTmpl<T>::EnumTrafficControlPositionTmpl<T>() {m_eValue = k_null;}

template<class T>
EnumTrafficControlPositionTmpl<T>::EnumTrafficControlPositionTmpl<T>(DocumentImpl* pDoc) {m_eValue = k_null;}

template<class T>
EnumTrafficControlPositionTmpl<T>::EnumTrafficControlPositionTmpl<T> (EnumTrafficControlPosition::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
EnumTrafficControlPosition::Values EnumTrafficControlPositionTmpl<T>::value () {return m_eValue;}

template<class T>
void EnumTrafficControlPositionTmpl<T>::setValue (EnumTrafficControlPosition::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
void EnumTrafficControlPositionTmpl<T>::streamOut (EnumTrafficControlPosition::Values eVal, IStream& stream) {stream.write(m_arrValues[eVal]);}

template<class T>
const int EnumTrafficControlPositionTmpl<T>::k_iNumValues = 3;

template<class T>
EnumTrafficControlPosition::Values EnumTrafficControlPositionTmpl<T>::parseString(const wchar_t* strValue, int nValueLen)
{
	return static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
}

template<class T>
IParserEventSink::EventCode EnumTrafficControlPositionTmpl<T>::parseString(const wchar_t* strValue, int nValueLen, EnumTrafficControlPosition::Values& eValue)
{
	int iValue = findString(strValue, nValueLen,  m_arrValues, k_iNumValues);
	if (iValue == -1)
		return IParserEventSink::EventCode::kInvalidEnumerationValue;
	eValue = static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
	return IParserEventSink::EventCode::kOk;
}


template <class T>
const wchar_t* EnumImpVolumeTmpl<T>::m_arrValues[] = {
    {L"null"},
    {L"US_gallon"},
    {L"IMP_gallon"},
    {L"cubicInch"},
    {L"cubicFeet"},
    {L"cubicYard"},
    {L"acreFeet"},
};

template<class T>
EnumImpVolumeTmpl<T>::EnumImpVolumeTmpl<T>() {m_eValue = k_null;}

template<class T>
EnumImpVolumeTmpl<T>::EnumImpVolumeTmpl<T>(DocumentImpl* pDoc) {m_eValue = k_null;}

template<class T>
EnumImpVolumeTmpl<T>::EnumImpVolumeTmpl<T> (EnumImpVolume::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
EnumImpVolume::Values EnumImpVolumeTmpl<T>::value () {return m_eValue;}

template<class T>
void EnumImpVolumeTmpl<T>::setValue (EnumImpVolume::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
void EnumImpVolumeTmpl<T>::streamOut (EnumImpVolume::Values eVal, IStream& stream) {stream.write(m_arrValues[eVal]);}

template<class T>
const int EnumImpVolumeTmpl<T>::k_iNumValues = 7;

template<class T>
EnumImpVolume::Values EnumImpVolumeTmpl<T>::parseString(const wchar_t* strValue, int nValueLen)
{
	return static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
}

template<class T>
IParserEventSink::EventCode EnumImpVolumeTmpl<T>::parseString(const wchar_t* strValue, int nValueLen, EnumImpVolume::Values& eValue)
{
	int iValue = findString(strValue, nValueLen,  m_arrValues, k_iNumValues);
	if (iValue == -1)
		return IParserEventSink::EventCode::kInvalidEnumerationValue;
	eValue = static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
	return IParserEventSink::EventCode::kOk;
}


template <class T>
const wchar_t* EnumCurbTypeTmpl<T>::m_arrValues[] = {
    {L"null"},
    {L"unknown"},
};

template<class T>
EnumCurbTypeTmpl<T>::EnumCurbTypeTmpl<T>() {m_eValue = k_null;}

template<class T>
EnumCurbTypeTmpl<T>::EnumCurbTypeTmpl<T>(DocumentImpl* pDoc) {m_eValue = k_null;}

template<class T>
EnumCurbTypeTmpl<T>::EnumCurbTypeTmpl<T> (EnumCurbType::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
EnumCurbType::Values EnumCurbTypeTmpl<T>::value () {return m_eValue;}

template<class T>
void EnumCurbTypeTmpl<T>::setValue (EnumCurbType::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
void EnumCurbTypeTmpl<T>::streamOut (EnumCurbType::Values eVal, IStream& stream) {stream.write(m_arrValues[eVal]);}

template<class T>
const int EnumCurbTypeTmpl<T>::k_iNumValues = 2;

template<class T>
EnumCurbType::Values EnumCurbTypeTmpl<T>::parseString(const wchar_t* strValue, int nValueLen)
{
	return static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
}

template<class T>
IParserEventSink::EventCode EnumCurbTypeTmpl<T>::parseString(const wchar_t* strValue, int nValueLen, EnumCurbType::Values& eValue)
{
	int iValue = findString(strValue, nValueLen,  m_arrValues, k_iNumValues);
	if (iValue == -1)
		return IParserEventSink::EventCode::kInvalidEnumerationValue;
	eValue = static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
	return IParserEventSink::EventCode::kOk;
}


template <class T>
const wchar_t* EnumMetWidthTmpl<T>::m_arrValues[] = {
    {L"null"},
    {L"millimeter"},
    {L"centimeter"},
    {L"meter"},
    {L"kilometer"},
};

template<class T>
EnumMetWidthTmpl<T>::EnumMetWidthTmpl<T>() {m_eValue = k_null;}

template<class T>
EnumMetWidthTmpl<T>::EnumMetWidthTmpl<T>(DocumentImpl* pDoc) {m_eValue = k_null;}

template<class T>
EnumMetWidthTmpl<T>::EnumMetWidthTmpl<T> (EnumMetWidth::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
EnumMetWidth::Values EnumMetWidthTmpl<T>::value () {return m_eValue;}

template<class T>
void EnumMetWidthTmpl<T>::setValue (EnumMetWidth::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
void EnumMetWidthTmpl<T>::streamOut (EnumMetWidth::Values eVal, IStream& stream) {stream.write(m_arrValues[eVal]);}

template<class T>
const int EnumMetWidthTmpl<T>::k_iNumValues = 5;

template<class T>
EnumMetWidth::Values EnumMetWidthTmpl<T>::parseString(const wchar_t* strValue, int nValueLen)
{
	return static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
}

template<class T>
IParserEventSink::EventCode EnumMetWidthTmpl<T>::parseString(const wchar_t* strValue, int nValueLen, EnumMetWidth::Values& eValue)
{
	int iValue = findString(strValue, nValueLen,  m_arrValues, k_iNumValues);
	if (iValue == -1)
		return IParserEventSink::EventCode::kInvalidEnumerationValue;
	eValue = static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
	return IParserEventSink::EventCode::kOk;
}


template <class T>
const wchar_t* EnumZonePlacementTypeTmpl<T>::m_arrValues[] = {
    {L"null"},
    {L"dependent"},
    {L"independent"},
};

template<class T>
EnumZonePlacementTypeTmpl<T>::EnumZonePlacementTypeTmpl<T>() {m_eValue = k_null;}

template<class T>
EnumZonePlacementTypeTmpl<T>::EnumZonePlacementTypeTmpl<T>(DocumentImpl* pDoc) {m_eValue = k_null;}

template<class T>
EnumZonePlacementTypeTmpl<T>::EnumZonePlacementTypeTmpl<T> (EnumZonePlacementType::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
EnumZonePlacementType::Values EnumZonePlacementTypeTmpl<T>::value () {return m_eValue;}

template<class T>
void EnumZonePlacementTypeTmpl<T>::setValue (EnumZonePlacementType::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
void EnumZonePlacementTypeTmpl<T>::streamOut (EnumZonePlacementType::Values eVal, IStream& stream) {stream.write(m_arrValues[eVal]);}

template<class T>
const int EnumZonePlacementTypeTmpl<T>::k_iNumValues = 3;

template<class T>
EnumZonePlacementType::Values EnumZonePlacementTypeTmpl<T>::parseString(const wchar_t* strValue, int nValueLen)
{
	return static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
}

template<class T>
IParserEventSink::EventCode EnumZonePlacementTypeTmpl<T>::parseString(const wchar_t* strValue, int nValueLen, EnumZonePlacementType::Values& eValue)
{
	int iValue = findString(strValue, nValueLen,  m_arrValues, k_iNumValues);
	if (iValue == -1)
		return IParserEventSink::EventCode::kInvalidEnumerationValue;
	eValue = static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
	return IParserEventSink::EventCode::kOk;
}


template <class T>
const wchar_t* EnumAdverseSETypeTmpl<T>::m_arrValues[] = {
    {L"null"},
    {L"non-adverse"},
    {L"adverse"},
};

template<class T>
EnumAdverseSETypeTmpl<T>::EnumAdverseSETypeTmpl<T>() {m_eValue = k_null;}

template<class T>
EnumAdverseSETypeTmpl<T>::EnumAdverseSETypeTmpl<T>(DocumentImpl* pDoc) {m_eValue = k_null;}

template<class T>
EnumAdverseSETypeTmpl<T>::EnumAdverseSETypeTmpl<T> (EnumAdverseSEType::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
EnumAdverseSEType::Values EnumAdverseSETypeTmpl<T>::value () {return m_eValue;}

template<class T>
void EnumAdverseSETypeTmpl<T>::setValue (EnumAdverseSEType::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
void EnumAdverseSETypeTmpl<T>::streamOut (EnumAdverseSEType::Values eVal, IStream& stream) {stream.write(m_arrValues[eVal]);}

template<class T>
const int EnumAdverseSETypeTmpl<T>::k_iNumValues = 3;

template<class T>
EnumAdverseSEType::Values EnumAdverseSETypeTmpl<T>::parseString(const wchar_t* strValue, int nValueLen)
{
	return static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
}

template<class T>
IParserEventSink::EventCode EnumAdverseSETypeTmpl<T>::parseString(const wchar_t* strValue, int nValueLen, EnumAdverseSEType::Values& eValue)
{
	int iValue = findString(strValue, nValueLen,  m_arrValues, k_iNumValues);
	if (iValue == -1)
		return IParserEventSink::EventCode::kInvalidEnumerationValue;
	eValue = static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
	return IParserEventSink::EventCode::kOk;
}


template <class T>
const wchar_t* EnumCornerTypeTmpl<T>::m_arrValues[] = {
    {L"null"},
    {L"unknown"},
};

template<class T>
EnumCornerTypeTmpl<T>::EnumCornerTypeTmpl<T>() {m_eValue = k_null;}

template<class T>
EnumCornerTypeTmpl<T>::EnumCornerTypeTmpl<T>(DocumentImpl* pDoc) {m_eValue = k_null;}

template<class T>
EnumCornerTypeTmpl<T>::EnumCornerTypeTmpl<T> (EnumCornerType::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
EnumCornerType::Values EnumCornerTypeTmpl<T>::value () {return m_eValue;}

template<class T>
void EnumCornerTypeTmpl<T>::setValue (EnumCornerType::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
void EnumCornerTypeTmpl<T>::streamOut (EnumCornerType::Values eVal, IStream& stream) {stream.write(m_arrValues[eVal]);}

template<class T>
const int EnumCornerTypeTmpl<T>::k_iNumValues = 2;

template<class T>
EnumCornerType::Values EnumCornerTypeTmpl<T>::parseString(const wchar_t* strValue, int nValueLen)
{
	return static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
}

template<class T>
IParserEventSink::EventCode EnumCornerTypeTmpl<T>::parseString(const wchar_t* strValue, int nValueLen, EnumCornerType::Values& eValue)
{
	int iValue = findString(strValue, nValueLen,  m_arrValues, k_iNumValues);
	if (iValue == -1)
		return IParserEventSink::EventCode::kInvalidEnumerationValue;
	eValue = static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
	return IParserEventSink::EventCode::kOk;
}


template <class T>
const wchar_t* EnumMonumentCategoryTmpl<T>::m_arrValues[] = {
    {L"null"},
    {L"benchmark"},
    {L"central"},
    {L"reference"},
    {L"rural"},
    {L"standard traverse"},
    {L"urban standard traverse"},
};

template<class T>
EnumMonumentCategoryTmpl<T>::EnumMonumentCategoryTmpl<T>() {m_eValue = k_null;}

template<class T>
EnumMonumentCategoryTmpl<T>::EnumMonumentCategoryTmpl<T>(DocumentImpl* pDoc) {m_eValue = k_null;}

template<class T>
EnumMonumentCategoryTmpl<T>::EnumMonumentCategoryTmpl<T> (EnumMonumentCategory::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
EnumMonumentCategory::Values EnumMonumentCategoryTmpl<T>::value () {return m_eValue;}

template<class T>
void EnumMonumentCategoryTmpl<T>::setValue (EnumMonumentCategory::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
void EnumMonumentCategoryTmpl<T>::streamOut (EnumMonumentCategory::Values eVal, IStream& stream) {stream.write(m_arrValues[eVal]);}

template<class T>
const int EnumMonumentCategoryTmpl<T>::k_iNumValues = 7;

template<class T>
EnumMonumentCategory::Values EnumMonumentCategoryTmpl<T>::parseString(const wchar_t* strValue, int nValueLen)
{
	return static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
}

template<class T>
IParserEventSink::EventCode EnumMonumentCategoryTmpl<T>::parseString(const wchar_t* strValue, int nValueLen, EnumMonumentCategory::Values& eValue)
{
	int iValue = findString(strValue, nValueLen,  m_arrValues, k_iNumValues);
	if (iValue == -1)
		return IParserEventSink::EventCode::kInvalidEnumerationValue;
	eValue = static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
	return IParserEventSink::EventCode::kOk;
}


template <class T>
const wchar_t* EnumCrashSeverityTypeTmpl<T>::m_arrValues[] = {
    {L"null"},
    {L"fatal"},
    {L"nonfatal "},
    {L"propery-damage-only"},
};

template<class T>
EnumCrashSeverityTypeTmpl<T>::EnumCrashSeverityTypeTmpl<T>() {m_eValue = k_null;}

template<class T>
EnumCrashSeverityTypeTmpl<T>::EnumCrashSeverityTypeTmpl<T>(DocumentImpl* pDoc) {m_eValue = k_null;}

template<class T>
EnumCrashSeverityTypeTmpl<T>::EnumCrashSeverityTypeTmpl<T> (EnumCrashSeverityType::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
EnumCrashSeverityType::Values EnumCrashSeverityTypeTmpl<T>::value () {return m_eValue;}

template<class T>
void EnumCrashSeverityTypeTmpl<T>::setValue (EnumCrashSeverityType::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
void EnumCrashSeverityTypeTmpl<T>::streamOut (EnumCrashSeverityType::Values eVal, IStream& stream) {stream.write(m_arrValues[eVal]);}

template<class T>
const int EnumCrashSeverityTypeTmpl<T>::k_iNumValues = 4;

template<class T>
EnumCrashSeverityType::Values EnumCrashSeverityTypeTmpl<T>::parseString(const wchar_t* strValue, int nValueLen)
{
	return static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
}

template<class T>
IParserEventSink::EventCode EnumCrashSeverityTypeTmpl<T>::parseString(const wchar_t* strValue, int nValueLen, EnumCrashSeverityType::Values& eValue)
{
	int iValue = findString(strValue, nValueLen,  m_arrValues, k_iNumValues);
	if (iValue == -1)
		return IParserEventSink::EventCode::kInvalidEnumerationValue;
	eValue = static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
	return IParserEventSink::EventCode::kOk;
}


template <class T>
const wchar_t* EnumInOutTmpl<T>::m_arrValues[] = {
    {L"null"},
    {L"in"},
    {L"out"},
    {L"both"},
};

template<class T>
EnumInOutTmpl<T>::EnumInOutTmpl<T>() {m_eValue = k_null;}

template<class T>
EnumInOutTmpl<T>::EnumInOutTmpl<T>(DocumentImpl* pDoc) {m_eValue = k_null;}

template<class T>
EnumInOutTmpl<T>::EnumInOutTmpl<T> (EnumInOut::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
EnumInOut::Values EnumInOutTmpl<T>::value () {return m_eValue;}

template<class T>
void EnumInOutTmpl<T>::setValue (EnumInOut::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
void EnumInOutTmpl<T>::streamOut (EnumInOut::Values eVal, IStream& stream) {stream.write(m_arrValues[eVal]);}

template<class T>
const int EnumInOutTmpl<T>::k_iNumValues = 4;

template<class T>
EnumInOut::Values EnumInOutTmpl<T>::parseString(const wchar_t* strValue, int nValueLen)
{
	return static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
}

template<class T>
IParserEventSink::EventCode EnumInOutTmpl<T>::parseString(const wchar_t* strValue, int nValueLen, EnumInOut::Values& eValue)
{
	int iValue = findString(strValue, nValueLen,  m_arrValues, k_iNumValues);
	if (iValue == -1)
		return IParserEventSink::EventCode::kInvalidEnumerationValue;
	eValue = static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
	return IParserEventSink::EventCode::kOk;
}


template <class T>
const wchar_t* EnumBeaconTypeTmpl<T>::m_arrValues[] = {
    {L"null"},
    {L"cairn"},
    {L"chimney"},
    {L"large quadripod"},
    {L"lighthouse"},
    {L"marine beacon"},
    {L"mast"},
    {L"mast with targets"},
    {L"no beacon"},
    {L"other"},
    {L"pillar"},
    {L"post"},
    {L"small quadripod"},
    {L"tower"},
    {L"tripod"},
    {L"unknown"},
};

template<class T>
EnumBeaconTypeTmpl<T>::EnumBeaconTypeTmpl<T>() {m_eValue = k_null;}

template<class T>
EnumBeaconTypeTmpl<T>::EnumBeaconTypeTmpl<T>(DocumentImpl* pDoc) {m_eValue = k_null;}

template<class T>
EnumBeaconTypeTmpl<T>::EnumBeaconTypeTmpl<T> (EnumBeaconType::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
EnumBeaconType::Values EnumBeaconTypeTmpl<T>::value () {return m_eValue;}

template<class T>
void EnumBeaconTypeTmpl<T>::setValue (EnumBeaconType::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
void EnumBeaconTypeTmpl<T>::streamOut (EnumBeaconType::Values eVal, IStream& stream) {stream.write(m_arrValues[eVal]);}

template<class T>
const int EnumBeaconTypeTmpl<T>::k_iNumValues = 16;

template<class T>
EnumBeaconType::Values EnumBeaconTypeTmpl<T>::parseString(const wchar_t* strValue, int nValueLen)
{
	return static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
}

template<class T>
IParserEventSink::EventCode EnumBeaconTypeTmpl<T>::parseString(const wchar_t* strValue, int nValueLen, EnumBeaconType::Values& eValue)
{
	int iValue = findString(strValue, nValueLen,  m_arrValues, k_iNumValues);
	if (iValue == -1)
		return IParserEventSink::EventCode::kInvalidEnumerationValue;
	eValue = static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
	return IParserEventSink::EventCode::kOk;
}


template <class T>
const wchar_t* EnumMetVelocityTmpl<T>::m_arrValues[] = {
    {L"null"},
    {L"metersPerSecond"},
    {L"kilometersPerHour"},
};

template<class T>
EnumMetVelocityTmpl<T>::EnumMetVelocityTmpl<T>() {m_eValue = k_null;}

template<class T>
EnumMetVelocityTmpl<T>::EnumMetVelocityTmpl<T>(DocumentImpl* pDoc) {m_eValue = k_null;}

template<class T>
EnumMetVelocityTmpl<T>::EnumMetVelocityTmpl<T> (EnumMetVelocity::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
EnumMetVelocity::Values EnumMetVelocityTmpl<T>::value () {return m_eValue;}

template<class T>
void EnumMetVelocityTmpl<T>::setValue (EnumMetVelocity::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
void EnumMetVelocityTmpl<T>::streamOut (EnumMetVelocity::Values eVal, IStream& stream) {stream.write(m_arrValues[eVal]);}

template<class T>
const int EnumMetVelocityTmpl<T>::k_iNumValues = 3;

template<class T>
EnumMetVelocity::Values EnumMetVelocityTmpl<T>::parseString(const wchar_t* strValue, int nValueLen)
{
	return static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
}

template<class T>
IParserEventSink::EventCode EnumMetVelocityTmpl<T>::parseString(const wchar_t* strValue, int nValueLen, EnumMetVelocity::Values& eValue)
{
	int iValue = findString(strValue, nValueLen,  m_arrValues, k_iNumValues);
	if (iValue == -1)
		return IParserEventSink::EventCode::kInvalidEnumerationValue;
	eValue = static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
	return IParserEventSink::EventCode::kOk;
}


template <class T>
const wchar_t* EnumSurfTypeEnumTmpl<T>::m_arrValues[] = {
    {L"null"},
    {L"TIN"},
    {L"grid"},
};

template<class T>
EnumSurfTypeEnumTmpl<T>::EnumSurfTypeEnumTmpl<T>() {m_eValue = k_null;}

template<class T>
EnumSurfTypeEnumTmpl<T>::EnumSurfTypeEnumTmpl<T>(DocumentImpl* pDoc) {m_eValue = k_null;}

template<class T>
EnumSurfTypeEnumTmpl<T>::EnumSurfTypeEnumTmpl<T> (EnumSurfTypeEnum::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
EnumSurfTypeEnum::Values EnumSurfTypeEnumTmpl<T>::value () {return m_eValue;}

template<class T>
void EnumSurfTypeEnumTmpl<T>::setValue (EnumSurfTypeEnum::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
void EnumSurfTypeEnumTmpl<T>::streamOut (EnumSurfTypeEnum::Values eVal, IStream& stream) {stream.write(m_arrValues[eVal]);}

template<class T>
const int EnumSurfTypeEnumTmpl<T>::k_iNumValues = 3;

template<class T>
EnumSurfTypeEnum::Values EnumSurfTypeEnumTmpl<T>::parseString(const wchar_t* strValue, int nValueLen)
{
	return static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
}

template<class T>
IParserEventSink::EventCode EnumSurfTypeEnumTmpl<T>::parseString(const wchar_t* strValue, int nValueLen, EnumSurfTypeEnum::Values& eValue)
{
	int iValue = findString(strValue, nValueLen,  m_arrValues, k_iNumValues);
	if (iValue == -1)
		return IParserEventSink::EventCode::kInvalidEnumerationValue;
	eValue = static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
	return IParserEventSink::EventCode::kOk;
}


template <class T>
const wchar_t* EnumZoneOffsetTypeTmpl<T>::m_arrValues[] = {
    {L"null"},
    {L"centerline"},
    {L"zone"},
};

template<class T>
EnumZoneOffsetTypeTmpl<T>::EnumZoneOffsetTypeTmpl<T>() {m_eValue = k_null;}

template<class T>
EnumZoneOffsetTypeTmpl<T>::EnumZoneOffsetTypeTmpl<T>(DocumentImpl* pDoc) {m_eValue = k_null;}

template<class T>
EnumZoneOffsetTypeTmpl<T>::EnumZoneOffsetTypeTmpl<T> (EnumZoneOffsetType::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
EnumZoneOffsetType::Values EnumZoneOffsetTypeTmpl<T>::value () {return m_eValue;}

template<class T>
void EnumZoneOffsetTypeTmpl<T>::setValue (EnumZoneOffsetType::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
void EnumZoneOffsetTypeTmpl<T>::streamOut (EnumZoneOffsetType::Values eVal, IStream& stream) {stream.write(m_arrValues[eVal]);}

template<class T>
const int EnumZoneOffsetTypeTmpl<T>::k_iNumValues = 3;

template<class T>
EnumZoneOffsetType::Values EnumZoneOffsetTypeTmpl<T>::parseString(const wchar_t* strValue, int nValueLen)
{
	return static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
}

template<class T>
IParserEventSink::EventCode EnumZoneOffsetTypeTmpl<T>::parseString(const wchar_t* strValue, int nValueLen, EnumZoneOffsetType::Values& eValue)
{
	int iValue = findString(strValue, nValueLen,  m_arrValues, k_iNumValues);
	if (iValue == -1)
		return IParserEventSink::EventCode::kInvalidEnumerationValue;
	eValue = static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
	return IParserEventSink::EventCode::kOk;
}


template <class T>
const wchar_t* EnumStationIncrementDirectionTypeTmpl<T>::m_arrValues[] = {
    {L"null"},
    {L"increasing"},
    {L"decreasing"},
};

template<class T>
EnumStationIncrementDirectionTypeTmpl<T>::EnumStationIncrementDirectionTypeTmpl<T>() {m_eValue = k_null;}

template<class T>
EnumStationIncrementDirectionTypeTmpl<T>::EnumStationIncrementDirectionTypeTmpl<T>(DocumentImpl* pDoc) {m_eValue = k_null;}

template<class T>
EnumStationIncrementDirectionTypeTmpl<T>::EnumStationIncrementDirectionTypeTmpl<T> (EnumStationIncrementDirectionType::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
EnumStationIncrementDirectionType::Values EnumStationIncrementDirectionTypeTmpl<T>::value () {return m_eValue;}

template<class T>
void EnumStationIncrementDirectionTypeTmpl<T>::setValue (EnumStationIncrementDirectionType::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
void EnumStationIncrementDirectionTypeTmpl<T>::streamOut (EnumStationIncrementDirectionType::Values eVal, IStream& stream) {stream.write(m_arrValues[eVal]);}

template<class T>
const int EnumStationIncrementDirectionTypeTmpl<T>::k_iNumValues = 3;

template<class T>
EnumStationIncrementDirectionType::Values EnumStationIncrementDirectionTypeTmpl<T>::parseString(const wchar_t* strValue, int nValueLen)
{
	return static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
}

template<class T>
IParserEventSink::EventCode EnumStationIncrementDirectionTypeTmpl<T>::parseString(const wchar_t* strValue, int nValueLen, EnumStationIncrementDirectionType::Values& eValue)
{
	int iValue = findString(strValue, nValueLen,  m_arrValues, k_iNumValues);
	if (iValue == -1)
		return IParserEventSink::EventCode::kInvalidEnumerationValue;
	eValue = static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
	return IParserEventSink::EventCode::kOk;
}


template <class T>
const wchar_t* EnumImpAreaTmpl<T>::m_arrValues[] = {
    {L"null"},
    {L"acre"},
    {L"squareFoot"},
    {L"squareInch"},
    {L"squareMiles"},
};

template<class T>
EnumImpAreaTmpl<T>::EnumImpAreaTmpl<T>() {m_eValue = k_null;}

template<class T>
EnumImpAreaTmpl<T>::EnumImpAreaTmpl<T>(DocumentImpl* pDoc) {m_eValue = k_null;}

template<class T>
EnumImpAreaTmpl<T>::EnumImpAreaTmpl<T> (EnumImpArea::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
EnumImpArea::Values EnumImpAreaTmpl<T>::value () {return m_eValue;}

template<class T>
void EnumImpAreaTmpl<T>::setValue (EnumImpArea::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
void EnumImpAreaTmpl<T>::streamOut (EnumImpArea::Values eVal, IStream& stream) {stream.write(m_arrValues[eVal]);}

template<class T>
const int EnumImpAreaTmpl<T>::k_iNumValues = 5;

template<class T>
EnumImpArea::Values EnumImpAreaTmpl<T>::parseString(const wchar_t* strValue, int nValueLen)
{
	return static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
}

template<class T>
IParserEventSink::EventCode EnumImpAreaTmpl<T>::parseString(const wchar_t* strValue, int nValueLen, EnumImpArea::Values& eValue)
{
	int iValue = findString(strValue, nValueLen,  m_arrValues, k_iNumValues);
	if (iValue == -1)
		return IParserEventSink::EventCode::kInvalidEnumerationValue;
	eValue = static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
	return IParserEventSink::EventCode::kOk;
}


template <class T>
const wchar_t* EnumImpTemperatureTmpl<T>::m_arrValues[] = {
    {L"null"},
    {L"fahrenheit"},
    {L"kelvin"},
};

template<class T>
EnumImpTemperatureTmpl<T>::EnumImpTemperatureTmpl<T>() {m_eValue = k_null;}

template<class T>
EnumImpTemperatureTmpl<T>::EnumImpTemperatureTmpl<T>(DocumentImpl* pDoc) {m_eValue = k_null;}

template<class T>
EnumImpTemperatureTmpl<T>::EnumImpTemperatureTmpl<T> (EnumImpTemperature::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
EnumImpTemperature::Values EnumImpTemperatureTmpl<T>::value () {return m_eValue;}

template<class T>
void EnumImpTemperatureTmpl<T>::setValue (EnumImpTemperature::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
void EnumImpTemperatureTmpl<T>::streamOut (EnumImpTemperature::Values eVal, IStream& stream) {stream.write(m_arrValues[eVal]);}

template<class T>
const int EnumImpTemperatureTmpl<T>::k_iNumValues = 3;

template<class T>
EnumImpTemperature::Values EnumImpTemperatureTmpl<T>::parseString(const wchar_t* strValue, int nValueLen)
{
	return static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
}

template<class T>
IParserEventSink::EventCode EnumImpTemperatureTmpl<T>::parseString(const wchar_t* strValue, int nValueLen, EnumImpTemperature::Values& eValue)
{
	int iValue = findString(strValue, nValueLen,  m_arrValues, k_iNumValues);
	if (iValue == -1)
		return IParserEventSink::EventCode::kInvalidEnumerationValue;
	eValue = static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
	return IParserEventSink::EventCode::kOk;
}


template <class T>
const wchar_t* EnumManeuverTypeTmpl<T>::m_arrValues[] = {
    {L"null"},
    {L"A-stop-on-rural-road"},
    {L"C-speed-path-direction-change-on-rural-road"},
};

template<class T>
EnumManeuverTypeTmpl<T>::EnumManeuverTypeTmpl<T>() {m_eValue = k_null;}

template<class T>
EnumManeuverTypeTmpl<T>::EnumManeuverTypeTmpl<T>(DocumentImpl* pDoc) {m_eValue = k_null;}

template<class T>
EnumManeuverTypeTmpl<T>::EnumManeuverTypeTmpl<T> (EnumManeuverType::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
EnumManeuverType::Values EnumManeuverTypeTmpl<T>::value () {return m_eValue;}

template<class T>
void EnumManeuverTypeTmpl<T>::setValue (EnumManeuverType::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
void EnumManeuverTypeTmpl<T>::streamOut (EnumManeuverType::Values eVal, IStream& stream) {stream.write(m_arrValues[eVal]);}

template<class T>
const int EnumManeuverTypeTmpl<T>::k_iNumValues = 3;

template<class T>
EnumManeuverType::Values EnumManeuverTypeTmpl<T>::parseString(const wchar_t* strValue, int nValueLen)
{
	return static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
}

template<class T>
IParserEventSink::EventCode EnumManeuverTypeTmpl<T>::parseString(const wchar_t* strValue, int nValueLen, EnumManeuverType::Values& eValue)
{
	int iValue = findString(strValue, nValueLen,  m_arrValues, k_iNumValues);
	if (iValue == -1)
		return IParserEventSink::EventCode::kInvalidEnumerationValue;
	eValue = static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
	return IParserEventSink::EventCode::kOk;
}


template <class T>
const wchar_t* EnumZoneCategoryTypeTmpl<T>::m_arrValues[] = {
    {L"null"},
    {L"road surface"},
    {L"road subsurface"},
    {L"road shoulder"},
    {L"road foreSlope"},
    {L"road backSlope"},
    {L"road curb-gutter"},
    {L"bridge surface"},
    {L"bridge body"},
    {L"sidewalk"},
    {L"ground"},
    {L"ditch"},
    {L"wall"},
    {L"channel"},
    {L"bike facilities"},
    {L"obstruction offset"},
    {L"longitudinal barrier"},
    {L"sound barrier"},
    {L"bridge abutment"},
    {L"vertical pillar"},
};

template<class T>
EnumZoneCategoryTypeTmpl<T>::EnumZoneCategoryTypeTmpl<T>() {m_eValue = k_null;}

template<class T>
EnumZoneCategoryTypeTmpl<T>::EnumZoneCategoryTypeTmpl<T>(DocumentImpl* pDoc) {m_eValue = k_null;}

template<class T>
EnumZoneCategoryTypeTmpl<T>::EnumZoneCategoryTypeTmpl<T> (EnumZoneCategoryType::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
EnumZoneCategoryType::Values EnumZoneCategoryTypeTmpl<T>::value () {return m_eValue;}

template<class T>
void EnumZoneCategoryTypeTmpl<T>::setValue (EnumZoneCategoryType::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
void EnumZoneCategoryTypeTmpl<T>::streamOut (EnumZoneCategoryType::Values eVal, IStream& stream) {stream.write(m_arrValues[eVal]);}

template<class T>
const int EnumZoneCategoryTypeTmpl<T>::k_iNumValues = 20;

template<class T>
EnumZoneCategoryType::Values EnumZoneCategoryTypeTmpl<T>::parseString(const wchar_t* strValue, int nValueLen)
{
	return static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
}

template<class T>
IParserEventSink::EventCode EnumZoneCategoryTypeTmpl<T>::parseString(const wchar_t* strValue, int nValueLen, EnumZoneCategoryType::Values& eValue)
{
	int iValue = findString(strValue, nValueLen,  m_arrValues, k_iNumValues);
	if (iValue == -1)
		return IParserEventSink::EventCode::kInvalidEnumerationValue;
	eValue = static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
	return IParserEventSink::EventCode::kOk;
}


template <class T>
const wchar_t* EnumDTMAttributeTypeTmpl<T>::m_arrValues[] = {
    {L"null"},
    {L"determinebyfeature"},
    {L"donotinclude"},
    {L"spot"},
    {L"spotandbreak"},
    {L"void"},
    {L"drapevoid"},
    {L"breakvoid"},
    {L"island"},
    {L"boundary"},
    {L"contour"},
    {L"feature"},
    {L"ground"},
    {L"xsection"},
    {L"user"},
};

template<class T>
EnumDTMAttributeTypeTmpl<T>::EnumDTMAttributeTypeTmpl<T>() {m_eValue = k_null;}

template<class T>
EnumDTMAttributeTypeTmpl<T>::EnumDTMAttributeTypeTmpl<T>(DocumentImpl* pDoc) {m_eValue = k_null;}

template<class T>
EnumDTMAttributeTypeTmpl<T>::EnumDTMAttributeTypeTmpl<T> (EnumDTMAttributeType::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
EnumDTMAttributeType::Values EnumDTMAttributeTypeTmpl<T>::value () {return m_eValue;}

template<class T>
void EnumDTMAttributeTypeTmpl<T>::setValue (EnumDTMAttributeType::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
void EnumDTMAttributeTypeTmpl<T>::streamOut (EnumDTMAttributeType::Values eVal, IStream& stream) {stream.write(m_arrValues[eVal]);}

template<class T>
const int EnumDTMAttributeTypeTmpl<T>::k_iNumValues = 15;

template<class T>
EnumDTMAttributeType::Values EnumDTMAttributeTypeTmpl<T>::parseString(const wchar_t* strValue, int nValueLen)
{
	return static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
}

template<class T>
IParserEventSink::EventCode EnumDTMAttributeTypeTmpl<T>::parseString(const wchar_t* strValue, int nValueLen, EnumDTMAttributeType::Values& eValue)
{
	int iValue = findString(strValue, nValueLen,  m_arrValues, k_iNumValues);
	if (iValue == -1)
		return IParserEventSink::EventCode::kInvalidEnumerationValue;
	eValue = static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
	return IParserEventSink::EventCode::kOk;
}


template <class T>
const wchar_t* EnumImpFlowTmpl<T>::m_arrValues[] = {
    {L"null"},
    {L"US_gallonPerDay"},
    {L"IMP_gallonPerDay"},
    {L"cubicFeetDay"},
    {L"US_gallonPerMinute"},
    {L"IMP_gallonPerMinute"},
    {L"acreFeetDay"},
    {L"cubicFeetSecond"},
};

template<class T>
EnumImpFlowTmpl<T>::EnumImpFlowTmpl<T>() {m_eValue = k_null;}

template<class T>
EnumImpFlowTmpl<T>::EnumImpFlowTmpl<T>(DocumentImpl* pDoc) {m_eValue = k_null;}

template<class T>
EnumImpFlowTmpl<T>::EnumImpFlowTmpl<T> (EnumImpFlow::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
EnumImpFlow::Values EnumImpFlowTmpl<T>::value () {return m_eValue;}

template<class T>
void EnumImpFlowTmpl<T>::setValue (EnumImpFlow::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
void EnumImpFlowTmpl<T>::streamOut (EnumImpFlow::Values eVal, IStream& stream) {stream.write(m_arrValues[eVal]);}

template<class T>
const int EnumImpFlowTmpl<T>::k_iNumValues = 8;

template<class T>
EnumImpFlow::Values EnumImpFlowTmpl<T>::parseString(const wchar_t* strValue, int nValueLen)
{
	return static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
}

template<class T>
IParserEventSink::EventCode EnumImpFlowTmpl<T>::parseString(const wchar_t* strValue, int nValueLen, EnumImpFlow::Values& eValue)
{
	int iValue = findString(strValue, nValueLen,  m_arrValues, k_iNumValues);
	if (iValue == -1)
		return IParserEventSink::EventCode::kInvalidEnumerationValue;
	eValue = static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
	return IParserEventSink::EventCode::kOk;
}


template <class T>
const wchar_t* EnumSurvPntTypeTmpl<T>::m_arrValues[] = {
    {L"null"},
    {L"monument"},
    {L"control"},
    {L"sideshot"},
    {L"boundary"},
    {L"natural boundary"},
    {L"traverse"},
    {L"reference"},
    {L"administrative"},
};

template<class T>
EnumSurvPntTypeTmpl<T>::EnumSurvPntTypeTmpl<T>() {m_eValue = k_null;}

template<class T>
EnumSurvPntTypeTmpl<T>::EnumSurvPntTypeTmpl<T>(DocumentImpl* pDoc) {m_eValue = k_null;}

template<class T>
EnumSurvPntTypeTmpl<T>::EnumSurvPntTypeTmpl<T> (EnumSurvPntType::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
EnumSurvPntType::Values EnumSurvPntTypeTmpl<T>::value () {return m_eValue;}

template<class T>
void EnumSurvPntTypeTmpl<T>::setValue (EnumSurvPntType::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
void EnumSurvPntTypeTmpl<T>::streamOut (EnumSurvPntType::Values eVal, IStream& stream) {stream.write(m_arrValues[eVal]);}

template<class T>
const int EnumSurvPntTypeTmpl<T>::k_iNumValues = 9;

template<class T>
EnumSurvPntType::Values EnumSurvPntTypeTmpl<T>::parseString(const wchar_t* strValue, int nValueLen)
{
	return static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
}

template<class T>
IParserEventSink::EventCode EnumSurvPntTypeTmpl<T>::parseString(const wchar_t* strValue, int nValueLen, EnumSurvPntType::Values& eValue)
{
	int iValue = findString(strValue, nValueLen,  m_arrValues, k_iNumValues);
	if (iValue == -1)
		return IParserEventSink::EventCode::kInvalidEnumerationValue;
	eValue = static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
	return IParserEventSink::EventCode::kOk;
}


template <class T>
const wchar_t* EnumLaneTaperTypeTmpl<T>::m_arrValues[] = {
    {L"null"},
    {L"straight-line"},
    {L"partial-tangent"},
    {L"symmetrical-reverse-curve"},
    {L"asymmetrical-reverse-curve"},
};

template<class T>
EnumLaneTaperTypeTmpl<T>::EnumLaneTaperTypeTmpl<T>() {m_eValue = k_null;}

template<class T>
EnumLaneTaperTypeTmpl<T>::EnumLaneTaperTypeTmpl<T>(DocumentImpl* pDoc) {m_eValue = k_null;}

template<class T>
EnumLaneTaperTypeTmpl<T>::EnumLaneTaperTypeTmpl<T> (EnumLaneTaperType::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
EnumLaneTaperType::Values EnumLaneTaperTypeTmpl<T>::value () {return m_eValue;}

template<class T>
void EnumLaneTaperTypeTmpl<T>::setValue (EnumLaneTaperType::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
void EnumLaneTaperTypeTmpl<T>::streamOut (EnumLaneTaperType::Values eVal, IStream& stream) {stream.write(m_arrValues[eVal]);}

template<class T>
const int EnumLaneTaperTypeTmpl<T>::k_iNumValues = 5;

template<class T>
EnumLaneTaperType::Values EnumLaneTaperTypeTmpl<T>::parseString(const wchar_t* strValue, int nValueLen)
{
	return static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
}

template<class T>
IParserEventSink::EventCode EnumLaneTaperTypeTmpl<T>::parseString(const wchar_t* strValue, int nValueLen, EnumLaneTaperType::Values& eValue)
{
	int iValue = findString(strValue, nValueLen,  m_arrValues, k_iNumValues);
	if (iValue == -1)
		return IParserEventSink::EventCode::kInvalidEnumerationValue;
	eValue = static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
	return IParserEventSink::EventCode::kOk;
}


template <class T>
const wchar_t* EnumImpWidthTmpl<T>::m_arrValues[] = {
    {L"null"},
    {L"foot"},
    {L"USSurveyFoot"},
    {L"inch"},
};

template<class T>
EnumImpWidthTmpl<T>::EnumImpWidthTmpl<T>() {m_eValue = k_null;}

template<class T>
EnumImpWidthTmpl<T>::EnumImpWidthTmpl<T>(DocumentImpl* pDoc) {m_eValue = k_null;}

template<class T>
EnumImpWidthTmpl<T>::EnumImpWidthTmpl<T> (EnumImpWidth::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
EnumImpWidth::Values EnumImpWidthTmpl<T>::value () {return m_eValue;}

template<class T>
void EnumImpWidthTmpl<T>::setValue (EnumImpWidth::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
void EnumImpWidthTmpl<T>::streamOut (EnumImpWidth::Values eVal, IStream& stream) {stream.write(m_arrValues[eVal]);}

template<class T>
const int EnumImpWidthTmpl<T>::k_iNumValues = 4;

template<class T>
EnumImpWidth::Values EnumImpWidthTmpl<T>::parseString(const wchar_t* strValue, int nValueLen)
{
	return static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
}

template<class T>
IParserEventSink::EventCode EnumImpWidthTmpl<T>::parseString(const wchar_t* strValue, int nValueLen, EnumImpWidth::Values& eValue)
{
	int iValue = findString(strValue, nValueLen,  m_arrValues, k_iNumValues);
	if (iValue == -1)
		return IParserEventSink::EventCode::kInvalidEnumerationValue;
	eValue = static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
	return IParserEventSink::EventCode::kOk;
}


template <class T>
const wchar_t* EnumTrafficControlTypeTmpl<T>::m_arrValues[] = {
    {L"null"},
    {L"none"},
    {L"signal"},
    {L"stop"},
    {L"yield"},
};

template<class T>
EnumTrafficControlTypeTmpl<T>::EnumTrafficControlTypeTmpl<T>() {m_eValue = k_null;}

template<class T>
EnumTrafficControlTypeTmpl<T>::EnumTrafficControlTypeTmpl<T>(DocumentImpl* pDoc) {m_eValue = k_null;}

template<class T>
EnumTrafficControlTypeTmpl<T>::EnumTrafficControlTypeTmpl<T> (EnumTrafficControlType::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
EnumTrafficControlType::Values EnumTrafficControlTypeTmpl<T>::value () {return m_eValue;}

template<class T>
void EnumTrafficControlTypeTmpl<T>::setValue (EnumTrafficControlType::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
void EnumTrafficControlTypeTmpl<T>::streamOut (EnumTrafficControlType::Values eVal, IStream& stream) {stream.write(m_arrValues[eVal]);}

template<class T>
const int EnumTrafficControlTypeTmpl<T>::k_iNumValues = 5;

template<class T>
EnumTrafficControlType::Values EnumTrafficControlTypeTmpl<T>::parseString(const wchar_t* strValue, int nValueLen)
{
	return static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
}

template<class T>
IParserEventSink::EventCode EnumTrafficControlTypeTmpl<T>::parseString(const wchar_t* strValue, int nValueLen, EnumTrafficControlType::Values& eValue)
{
	int iValue = findString(strValue, nValueLen,  m_arrValues, k_iNumValues);
	if (iValue == -1)
		return IParserEventSink::EventCode::kInvalidEnumerationValue;
	eValue = static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
	return IParserEventSink::EventCode::kOk;
}


template <class T>
const wchar_t* EnumZoneMaterialTypeTmpl<T>::m_arrValues[] = {
    {L"null"},
    {L"pavement-high-type"},
    {L"pavement-intermediate-type"},
    {L"pavement-low-type"},
    {L"soil"},
    {L"concrete"},
    {L"stone"},
    {L"riprap"},
    {L"turf"},
    {L"gravel"},
    {L"paved"},
    {L"metal"},
    {L"metal grate"},
    {L"composite"},
    {L"timber"},
    {L"other"},
};

template<class T>
EnumZoneMaterialTypeTmpl<T>::EnumZoneMaterialTypeTmpl<T>() {m_eValue = k_null;}

template<class T>
EnumZoneMaterialTypeTmpl<T>::EnumZoneMaterialTypeTmpl<T>(DocumentImpl* pDoc) {m_eValue = k_null;}

template<class T>
EnumZoneMaterialTypeTmpl<T>::EnumZoneMaterialTypeTmpl<T> (EnumZoneMaterialType::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
EnumZoneMaterialType::Values EnumZoneMaterialTypeTmpl<T>::value () {return m_eValue;}

template<class T>
void EnumZoneMaterialTypeTmpl<T>::setValue (EnumZoneMaterialType::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
void EnumZoneMaterialTypeTmpl<T>::streamOut (EnumZoneMaterialType::Values eVal, IStream& stream) {stream.write(m_arrValues[eVal]);}

template<class T>
const int EnumZoneMaterialTypeTmpl<T>::k_iNumValues = 16;

template<class T>
EnumZoneMaterialType::Values EnumZoneMaterialTypeTmpl<T>::parseString(const wchar_t* strValue, int nValueLen)
{
	return static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
}

template<class T>
IParserEventSink::EventCode EnumZoneMaterialTypeTmpl<T>::parseString(const wchar_t* strValue, int nValueLen, EnumZoneMaterialType::Values& eValue)
{
	int iValue = findString(strValue, nValueLen,  m_arrValues, k_iNumValues);
	if (iValue == -1)
		return IParserEventSink::EventCode::kInvalidEnumerationValue;
	eValue = static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
	return IParserEventSink::EventCode::kOk;
}


template <class T>
const wchar_t* EnumSurfBndTypeTmpl<T>::m_arrValues[] = {
    {L"null"},
    {L"outer"},
    {L"void"},
    {L"island"},
};

template<class T>
EnumSurfBndTypeTmpl<T>::EnumSurfBndTypeTmpl<T>() {m_eValue = k_null;}

template<class T>
EnumSurfBndTypeTmpl<T>::EnumSurfBndTypeTmpl<T>(DocumentImpl* pDoc) {m_eValue = k_null;}

template<class T>
EnumSurfBndTypeTmpl<T>::EnumSurfBndTypeTmpl<T> (EnumSurfBndType::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
EnumSurfBndType::Values EnumSurfBndTypeTmpl<T>::value () {return m_eValue;}

template<class T>
void EnumSurfBndTypeTmpl<T>::setValue (EnumSurfBndType::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
void EnumSurfBndTypeTmpl<T>::streamOut (EnumSurfBndType::Values eVal, IStream& stream) {stream.write(m_arrValues[eVal]);}

template<class T>
const int EnumSurfBndTypeTmpl<T>::k_iNumValues = 4;

template<class T>
EnumSurfBndType::Values EnumSurfBndTypeTmpl<T>::parseString(const wchar_t* strValue, int nValueLen)
{
	return static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
}

template<class T>
IParserEventSink::EventCode EnumSurfBndTypeTmpl<T>::parseString(const wchar_t* strValue, int nValueLen, EnumSurfBndType::Values& eValue)
{
	int iValue = findString(strValue, nValueLen,  m_arrValues, k_iNumValues);
	if (iValue == -1)
		return IParserEventSink::EventCode::kInvalidEnumerationValue;
	eValue = static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
	return IParserEventSink::EventCode::kOk;
}


template <class T>
const wchar_t* EnumBeaconProtectionTypeTmpl<T>::m_arrValues[] = {
    {L"null"},
    {L"cover"},
    {L"cover and box"},
    {L"fence enclosure"},
    {L"marker post"},
    {L"no protection"},
    {L"other"},
    {L"quadripod"},
    {L"unknown"},
};

template<class T>
EnumBeaconProtectionTypeTmpl<T>::EnumBeaconProtectionTypeTmpl<T>() {m_eValue = k_null;}

template<class T>
EnumBeaconProtectionTypeTmpl<T>::EnumBeaconProtectionTypeTmpl<T>(DocumentImpl* pDoc) {m_eValue = k_null;}

template<class T>
EnumBeaconProtectionTypeTmpl<T>::EnumBeaconProtectionTypeTmpl<T> (EnumBeaconProtectionType::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
EnumBeaconProtectionType::Values EnumBeaconProtectionTypeTmpl<T>::value () {return m_eValue;}

template<class T>
void EnumBeaconProtectionTypeTmpl<T>::setValue (EnumBeaconProtectionType::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
void EnumBeaconProtectionTypeTmpl<T>::streamOut (EnumBeaconProtectionType::Values eVal, IStream& stream) {stream.write(m_arrValues[eVal]);}

template<class T>
const int EnumBeaconProtectionTypeTmpl<T>::k_iNumValues = 9;

template<class T>
EnumBeaconProtectionType::Values EnumBeaconProtectionTypeTmpl<T>::parseString(const wchar_t* strValue, int nValueLen)
{
	return static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
}

template<class T>
IParserEventSink::EventCode EnumBeaconProtectionTypeTmpl<T>::parseString(const wchar_t* strValue, int nValueLen, EnumBeaconProtectionType::Values& eValue)
{
	int iValue = findString(strValue, nValueLen,  m_arrValues, k_iNumValues);
	if (iValue == -1)
		return IParserEventSink::EventCode::kInvalidEnumerationValue;
	eValue = static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
	return IParserEventSink::EventCode::kOk;
}


template <class T>
const wchar_t* EnumDataFormatTypeTmpl<T>::m_arrValues[] = {
    {L"null"},
    {L"Offset Elevation"},
    {L"Slope Distance"},
};

template<class T>
EnumDataFormatTypeTmpl<T>::EnumDataFormatTypeTmpl<T>() {m_eValue = k_null;}

template<class T>
EnumDataFormatTypeTmpl<T>::EnumDataFormatTypeTmpl<T>(DocumentImpl* pDoc) {m_eValue = k_null;}

template<class T>
EnumDataFormatTypeTmpl<T>::EnumDataFormatTypeTmpl<T> (EnumDataFormatType::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
EnumDataFormatType::Values EnumDataFormatTypeTmpl<T>::value () {return m_eValue;}

template<class T>
void EnumDataFormatTypeTmpl<T>::setValue (EnumDataFormatType::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
void EnumDataFormatTypeTmpl<T>::streamOut (EnumDataFormatType::Values eVal, IStream& stream) {stream.write(m_arrValues[eVal]);}

template<class T>
const int EnumDataFormatTypeTmpl<T>::k_iNumValues = 3;

template<class T>
EnumDataFormatType::Values EnumDataFormatTypeTmpl<T>::parseString(const wchar_t* strValue, int nValueLen)
{
	return static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
}

template<class T>
IParserEventSink::EventCode EnumDataFormatTypeTmpl<T>::parseString(const wchar_t* strValue, int nValueLen, EnumDataFormatType::Values& eValue)
{
	int iValue = findString(strValue, nValueLen,  m_arrValues, k_iNumValues);
	if (iValue == -1)
		return IParserEventSink::EventCode::kInvalidEnumerationValue;
	eValue = static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
	return IParserEventSink::EventCode::kOk;
}


template <class T>
const wchar_t* EnumMetAreaTmpl<T>::m_arrValues[] = {
    {L"null"},
    {L"hectare"},
    {L"squareMeter"},
    {L"squareMillimeter"},
    {L"squareCentimeter"},
};

template<class T>
EnumMetAreaTmpl<T>::EnumMetAreaTmpl<T>() {m_eValue = k_null;}

template<class T>
EnumMetAreaTmpl<T>::EnumMetAreaTmpl<T>(DocumentImpl* pDoc) {m_eValue = k_null;}

template<class T>
EnumMetAreaTmpl<T>::EnumMetAreaTmpl<T> (EnumMetArea::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
EnumMetArea::Values EnumMetAreaTmpl<T>::value () {return m_eValue;}

template<class T>
void EnumMetAreaTmpl<T>::setValue (EnumMetArea::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
void EnumMetAreaTmpl<T>::streamOut (EnumMetArea::Values eVal, IStream& stream) {stream.write(m_arrValues[eVal]);}

template<class T>
const int EnumMetAreaTmpl<T>::k_iNumValues = 5;

template<class T>
EnumMetArea::Values EnumMetAreaTmpl<T>::parseString(const wchar_t* strValue, int nValueLen)
{
	return static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
}

template<class T>
IParserEventSink::EventCode EnumMetAreaTmpl<T>::parseString(const wchar_t* strValue, int nValueLen, EnumMetArea::Values& eValue)
{
	int iValue = findString(strValue, nValueLen,  m_arrValues, k_iNumValues);
	if (iValue == -1)
		return IParserEventSink::EventCode::kInvalidEnumerationValue;
	eValue = static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
	return IParserEventSink::EventCode::kOk;
}


template <class T>
const wchar_t* EnumCurveTypeTmpl<T>::m_arrValues[] = {
    {L"null"},
    {L"arc"},
    {L"chord"},
};

template<class T>
EnumCurveTypeTmpl<T>::EnumCurveTypeTmpl<T>() {m_eValue = k_null;}

template<class T>
EnumCurveTypeTmpl<T>::EnumCurveTypeTmpl<T>(DocumentImpl* pDoc) {m_eValue = k_null;}

template<class T>
EnumCurveTypeTmpl<T>::EnumCurveTypeTmpl<T> (EnumCurveType::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
EnumCurveType::Values EnumCurveTypeTmpl<T>::value () {return m_eValue;}

template<class T>
void EnumCurveTypeTmpl<T>::setValue (EnumCurveType::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
void EnumCurveTypeTmpl<T>::streamOut (EnumCurveType::Values eVal, IStream& stream) {stream.write(m_arrValues[eVal]);}

template<class T>
const int EnumCurveTypeTmpl<T>::k_iNumValues = 3;

template<class T>
EnumCurveType::Values EnumCurveTypeTmpl<T>::parseString(const wchar_t* strValue, int nValueLen)
{
	return static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
}

template<class T>
IParserEventSink::EventCode EnumCurveTypeTmpl<T>::parseString(const wchar_t* strValue, int nValueLen, EnumCurveType::Values& eValue)
{
	int iValue = findString(strValue, nValueLen,  m_arrValues, k_iNumValues);
	if (iValue == -1)
		return IParserEventSink::EventCode::kInvalidEnumerationValue;
	eValue = static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
	return IParserEventSink::EventCode::kOk;
}


template <class T>
const wchar_t* EnumImpHeightTmpl<T>::m_arrValues[] = {
    {L"null"},
    {L"foot"},
    {L"USSurveyFoot"},
    {L"inch"},
};

template<class T>
EnumImpHeightTmpl<T>::EnumImpHeightTmpl<T>() {m_eValue = k_null;}

template<class T>
EnumImpHeightTmpl<T>::EnumImpHeightTmpl<T>(DocumentImpl* pDoc) {m_eValue = k_null;}

template<class T>
EnumImpHeightTmpl<T>::EnumImpHeightTmpl<T> (EnumImpHeight::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
EnumImpHeight::Values EnumImpHeightTmpl<T>::value () {return m_eValue;}

template<class T>
void EnumImpHeightTmpl<T>::setValue (EnumImpHeight::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
void EnumImpHeightTmpl<T>::streamOut (EnumImpHeight::Values eVal, IStream& stream) {stream.write(m_arrValues[eVal]);}

template<class T>
const int EnumImpHeightTmpl<T>::k_iNumValues = 4;

template<class T>
EnumImpHeight::Values EnumImpHeightTmpl<T>::parseString(const wchar_t* strValue, int nValueLen)
{
	return static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
}

template<class T>
IParserEventSink::EventCode EnumImpHeightTmpl<T>::parseString(const wchar_t* strValue, int nValueLen, EnumImpHeight::Values& eValue)
{
	int iValue = findString(strValue, nValueLen,  m_arrValues, k_iNumValues);
	if (iValue == -1)
		return IParserEventSink::EventCode::kInvalidEnumerationValue;
	eValue = static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
	return IParserEventSink::EventCode::kOk;
}


template <class T>
const wchar_t* EnumSurveyRoleTypeTmpl<T>::m_arrValues[] = {
    {L"null"},
    {L"measured"},
    {L"to stake out"},
    {L"staked out"},
    {L"calculated"},
    {L"assistance point"},
    {L"user entered point"},
    {L"control point"},
};

template<class T>
EnumSurveyRoleTypeTmpl<T>::EnumSurveyRoleTypeTmpl<T>() {m_eValue = k_null;}

template<class T>
EnumSurveyRoleTypeTmpl<T>::EnumSurveyRoleTypeTmpl<T>(DocumentImpl* pDoc) {m_eValue = k_null;}

template<class T>
EnumSurveyRoleTypeTmpl<T>::EnumSurveyRoleTypeTmpl<T> (EnumSurveyRoleType::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
EnumSurveyRoleType::Values EnumSurveyRoleTypeTmpl<T>::value () {return m_eValue;}

template<class T>
void EnumSurveyRoleTypeTmpl<T>::setValue (EnumSurveyRoleType::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
void EnumSurveyRoleTypeTmpl<T>::streamOut (EnumSurveyRoleType::Values eVal, IStream& stream) {stream.write(m_arrValues[eVal]);}

template<class T>
const int EnumSurveyRoleTypeTmpl<T>::k_iNumValues = 8;

template<class T>
EnumSurveyRoleType::Values EnumSurveyRoleTypeTmpl<T>::parseString(const wchar_t* strValue, int nValueLen)
{
	return static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
}

template<class T>
IParserEventSink::EventCode EnumSurveyRoleTypeTmpl<T>::parseString(const wchar_t* strValue, int nValueLen, EnumSurveyRoleType::Values& eValue)
{
	int iValue = findString(strValue, nValueLen,  m_arrValues, k_iNumValues);
	if (iValue == -1)
		return IParserEventSink::EventCode::kInvalidEnumerationValue;
	eValue = static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
	return IParserEventSink::EventCode::kOk;
}


template <class T>
const wchar_t* EnumSpiralTypeTmpl<T>::m_arrValues[] = {
    {L"null"},
    {L"biquadratic"},
    {L"bloss"},
    {L"clothoid"},
    {L"cosine"},
    {L"cubic"},
    {L"sinusoid"},
    {L"revBiquadratic"},
    {L"revBloss"},
    {L"revCosine"},
    {L"revSinusoid"},
    {L"sineHalfWave"},
    {L"biquadraticParabola"},
    {L"cubicParabola"},
    {L"japaneseCubic"},
    {L"radioid"},
    {L"weinerBogen"},
};

template<class T>
EnumSpiralTypeTmpl<T>::EnumSpiralTypeTmpl<T>() {m_eValue = k_null;}

template<class T>
EnumSpiralTypeTmpl<T>::EnumSpiralTypeTmpl<T>(DocumentImpl* pDoc) {m_eValue = k_null;}

template<class T>
EnumSpiralTypeTmpl<T>::EnumSpiralTypeTmpl<T> (EnumSpiralType::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
EnumSpiralType::Values EnumSpiralTypeTmpl<T>::value () {return m_eValue;}

template<class T>
void EnumSpiralTypeTmpl<T>::setValue (EnumSpiralType::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
void EnumSpiralTypeTmpl<T>::streamOut (EnumSpiralType::Values eVal, IStream& stream) {stream.write(m_arrValues[eVal]);}

template<class T>
const int EnumSpiralTypeTmpl<T>::k_iNumValues = 17;

template<class T>
EnumSpiralType::Values EnumSpiralTypeTmpl<T>::parseString(const wchar_t* strValue, int nValueLen)
{
	return static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
}

template<class T>
IParserEventSink::EventCode EnumSpiralTypeTmpl<T>::parseString(const wchar_t* strValue, int nValueLen, EnumSpiralType::Values& eValue)
{
	int iValue = findString(strValue, nValueLen,  m_arrValues, k_iNumValues);
	if (iValue == -1)
		return IParserEventSink::EventCode::kInvalidEnumerationValue;
	eValue = static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
	return IParserEventSink::EventCode::kOk;
}


template <class T>
const wchar_t* EnumDitchBottomShapeTmpl<T>::m_arrValues[] = {
    {L"null"},
    {L"true-V"},
    {L"rounded-V"},
    {L"rounded-trapezoidal"},
    {L"flat-trapezoidal"},
};

template<class T>
EnumDitchBottomShapeTmpl<T>::EnumDitchBottomShapeTmpl<T>() {m_eValue = k_null;}

template<class T>
EnumDitchBottomShapeTmpl<T>::EnumDitchBottomShapeTmpl<T>(DocumentImpl* pDoc) {m_eValue = k_null;}

template<class T>
EnumDitchBottomShapeTmpl<T>::EnumDitchBottomShapeTmpl<T> (EnumDitchBottomShape::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
EnumDitchBottomShape::Values EnumDitchBottomShapeTmpl<T>::value () {return m_eValue;}

template<class T>
void EnumDitchBottomShapeTmpl<T>::setValue (EnumDitchBottomShape::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
void EnumDitchBottomShapeTmpl<T>::streamOut (EnumDitchBottomShape::Values eVal, IStream& stream) {stream.write(m_arrValues[eVal]);}

template<class T>
const int EnumDitchBottomShapeTmpl<T>::k_iNumValues = 5;

template<class T>
EnumDitchBottomShape::Values EnumDitchBottomShapeTmpl<T>::parseString(const wchar_t* strValue, int nValueLen)
{
	return static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
}

template<class T>
IParserEventSink::EventCode EnumDitchBottomShapeTmpl<T>::parseString(const wchar_t* strValue, int nValueLen, EnumDitchBottomShape::Values& eValue)
{
	int iValue = findString(strValue, nValueLen,  m_arrValues, k_iNumValues);
	if (iValue == -1)
		return IParserEventSink::EventCode::kInvalidEnumerationValue;
	eValue = static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
	return IParserEventSink::EventCode::kOk;
}


template <class T>
const wchar_t* EnumIntersectionConstructionTypeTmpl<T>::m_arrValues[] = {
    {L"null"},
    {L"existing"},
    {L"improvement"},
    {L"new"},
};

template<class T>
EnumIntersectionConstructionTypeTmpl<T>::EnumIntersectionConstructionTypeTmpl<T>() {m_eValue = k_null;}

template<class T>
EnumIntersectionConstructionTypeTmpl<T>::EnumIntersectionConstructionTypeTmpl<T>(DocumentImpl* pDoc) {m_eValue = k_null;}

template<class T>
EnumIntersectionConstructionTypeTmpl<T>::EnumIntersectionConstructionTypeTmpl<T> (EnumIntersectionConstructionType::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
EnumIntersectionConstructionType::Values EnumIntersectionConstructionTypeTmpl<T>::value () {return m_eValue;}

template<class T>
void EnumIntersectionConstructionTypeTmpl<T>::setValue (EnumIntersectionConstructionType::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
void EnumIntersectionConstructionTypeTmpl<T>::streamOut (EnumIntersectionConstructionType::Values eVal, IStream& stream) {stream.write(m_arrValues[eVal]);}

template<class T>
const int EnumIntersectionConstructionTypeTmpl<T>::k_iNumValues = 4;

template<class T>
EnumIntersectionConstructionType::Values EnumIntersectionConstructionTypeTmpl<T>::parseString(const wchar_t* strValue, int nValueLen)
{
	return static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
}

template<class T>
IParserEventSink::EventCode EnumIntersectionConstructionTypeTmpl<T>::parseString(const wchar_t* strValue, int nValueLen, EnumIntersectionConstructionType::Values& eValue)
{
	int iValue = findString(strValue, nValueLen,  m_arrValues, k_iNumValues);
	if (iValue == -1)
		return IParserEventSink::EventCode::kInvalidEnumerationValue;
	eValue = static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
	return IParserEventSink::EventCode::kOk;
}


template <class T>
const wchar_t* EnumRoadSignTypeTmpl<T>::m_arrValues[] = {
    {L"null"},
    {L"regulatory"},
    {L"guide"},
    {L"warning"},
    {L"specificService"},
    {L"tourist"},
    {L"recreation-cultural"},
    {L"emergencyManagement"},
};

template<class T>
EnumRoadSignTypeTmpl<T>::EnumRoadSignTypeTmpl<T>() {m_eValue = k_null;}

template<class T>
EnumRoadSignTypeTmpl<T>::EnumRoadSignTypeTmpl<T>(DocumentImpl* pDoc) {m_eValue = k_null;}

template<class T>
EnumRoadSignTypeTmpl<T>::EnumRoadSignTypeTmpl<T> (EnumRoadSignType::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
EnumRoadSignType::Values EnumRoadSignTypeTmpl<T>::value () {return m_eValue;}

template<class T>
void EnumRoadSignTypeTmpl<T>::setValue (EnumRoadSignType::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
void EnumRoadSignTypeTmpl<T>::streamOut (EnumRoadSignType::Values eVal, IStream& stream) {stream.write(m_arrValues[eVal]);}

template<class T>
const int EnumRoadSignTypeTmpl<T>::k_iNumValues = 8;

template<class T>
EnumRoadSignType::Values EnumRoadSignTypeTmpl<T>::parseString(const wchar_t* strValue, int nValueLen)
{
	return static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
}

template<class T>
IParserEventSink::EventCode EnumRoadSignTypeTmpl<T>::parseString(const wchar_t* strValue, int nValueLen, EnumRoadSignType::Values& eValue)
{
	int iValue = findString(strValue, nValueLen,  m_arrValues, k_iNumValues);
	if (iValue == -1)
		return IParserEventSink::EventCode::kInvalidEnumerationValue;
	eValue = static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
	return IParserEventSink::EventCode::kOk;
}


template <class T>
const wchar_t* EnumImpVelocityTmpl<T>::m_arrValues[] = {
    {L"null"},
    {L"feetPerSecond"},
    {L"milesPerHour"},
};

template<class T>
EnumImpVelocityTmpl<T>::EnumImpVelocityTmpl<T>() {m_eValue = k_null;}

template<class T>
EnumImpVelocityTmpl<T>::EnumImpVelocityTmpl<T>(DocumentImpl* pDoc) {m_eValue = k_null;}

template<class T>
EnumImpVelocityTmpl<T>::EnumImpVelocityTmpl<T> (EnumImpVelocity::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
EnumImpVelocity::Values EnumImpVelocityTmpl<T>::value () {return m_eValue;}

template<class T>
void EnumImpVelocityTmpl<T>::setValue (EnumImpVelocity::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
void EnumImpVelocityTmpl<T>::streamOut (EnumImpVelocity::Values eVal, IStream& stream) {stream.write(m_arrValues[eVal]);}

template<class T>
const int EnumImpVelocityTmpl<T>::k_iNumValues = 3;

template<class T>
EnumImpVelocity::Values EnumImpVelocityTmpl<T>::parseString(const wchar_t* strValue, int nValueLen)
{
	return static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
}

template<class T>
IParserEventSink::EventCode EnumImpVelocityTmpl<T>::parseString(const wchar_t* strValue, int nValueLen, EnumImpVelocity::Values& eValue)
{
	int iValue = findString(strValue, nValueLen,  m_arrValues, k_iNumValues);
	if (iValue == -1)
		return IParserEventSink::EventCode::kInvalidEnumerationValue;
	eValue = static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
	return IParserEventSink::EventCode::kOk;
}


template <class T>
const wchar_t* EnumTurnLaneTypeTmpl<T>::m_arrValues[] = {
    {L"null"},
    {L"left"},
    {L"right"},
};

template<class T>
EnumTurnLaneTypeTmpl<T>::EnumTurnLaneTypeTmpl<T>() {m_eValue = k_null;}

template<class T>
EnumTurnLaneTypeTmpl<T>::EnumTurnLaneTypeTmpl<T>(DocumentImpl* pDoc) {m_eValue = k_null;}

template<class T>
EnumTurnLaneTypeTmpl<T>::EnumTurnLaneTypeTmpl<T> (EnumTurnLaneType::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
EnumTurnLaneType::Values EnumTurnLaneTypeTmpl<T>::value () {return m_eValue;}

template<class T>
void EnumTurnLaneTypeTmpl<T>::setValue (EnumTurnLaneType::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
void EnumTurnLaneTypeTmpl<T>::streamOut (EnumTurnLaneType::Values eVal, IStream& stream) {stream.write(m_arrValues[eVal]);}

template<class T>
const int EnumTurnLaneTypeTmpl<T>::k_iNumValues = 3;

template<class T>
EnumTurnLaneType::Values EnumTurnLaneTypeTmpl<T>::parseString(const wchar_t* strValue, int nValueLen)
{
	return static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
}

template<class T>
IParserEventSink::EventCode EnumTurnLaneTypeTmpl<T>::parseString(const wchar_t* strValue, int nValueLen, EnumTurnLaneType::Values& eValue)
{
	int iValue = findString(strValue, nValueLen,  m_arrValues, k_iNumValues);
	if (iValue == -1)
		return IParserEventSink::EventCode::kInvalidEnumerationValue;
	eValue = static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
	return IParserEventSink::EventCode::kOk;
}


template <class T>
const wchar_t* EnumSideofRoadTypeTmpl<T>::m_arrValues[] = {
    {L"null"},
    {L"right"},
    {L"left"},
    {L"both"},
};

template<class T>
EnumSideofRoadTypeTmpl<T>::EnumSideofRoadTypeTmpl<T>() {m_eValue = k_null;}

template<class T>
EnumSideofRoadTypeTmpl<T>::EnumSideofRoadTypeTmpl<T>(DocumentImpl* pDoc) {m_eValue = k_null;}

template<class T>
EnumSideofRoadTypeTmpl<T>::EnumSideofRoadTypeTmpl<T> (EnumSideofRoadType::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
EnumSideofRoadType::Values EnumSideofRoadTypeTmpl<T>::value () {return m_eValue;}

template<class T>
void EnumSideofRoadTypeTmpl<T>::setValue (EnumSideofRoadType::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
void EnumSideofRoadTypeTmpl<T>::streamOut (EnumSideofRoadType::Values eVal, IStream& stream) {stream.write(m_arrValues[eVal]);}

template<class T>
const int EnumSideofRoadTypeTmpl<T>::k_iNumValues = 4;

template<class T>
EnumSideofRoadType::Values EnumSideofRoadTypeTmpl<T>::parseString(const wchar_t* strValue, int nValueLen)
{
	return static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
}

template<class T>
IParserEventSink::EventCode EnumSideofRoadTypeTmpl<T>::parseString(const wchar_t* strValue, int nValueLen, EnumSideofRoadType::Values& eValue)
{
	int iValue = findString(strValue, nValueLen,  m_arrValues, k_iNumValues);
	if (iValue == -1)
		return IParserEventSink::EventCode::kInvalidEnumerationValue;
	eValue = static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
	return IParserEventSink::EventCode::kOk;
}


template <class T>
const wchar_t* EnumObservationStatusTypeTmpl<T>::m_arrValues[] = {
    {L"null"},
    {L"modified"},
    {L"deleted"},
};

template<class T>
EnumObservationStatusTypeTmpl<T>::EnumObservationStatusTypeTmpl<T>() {m_eValue = k_null;}

template<class T>
EnumObservationStatusTypeTmpl<T>::EnumObservationStatusTypeTmpl<T>(DocumentImpl* pDoc) {m_eValue = k_null;}

template<class T>
EnumObservationStatusTypeTmpl<T>::EnumObservationStatusTypeTmpl<T> (EnumObservationStatusType::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
EnumObservationStatusType::Values EnumObservationStatusTypeTmpl<T>::value () {return m_eValue;}

template<class T>
void EnumObservationStatusTypeTmpl<T>::setValue (EnumObservationStatusType::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
void EnumObservationStatusTypeTmpl<T>::streamOut (EnumObservationStatusType::Values eVal, IStream& stream) {stream.write(m_arrValues[eVal]);}

template<class T>
const int EnumObservationStatusTypeTmpl<T>::k_iNumValues = 3;

template<class T>
EnumObservationStatusType::Values EnumObservationStatusTypeTmpl<T>::parseString(const wchar_t* strValue, int nValueLen)
{
	return static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
}

template<class T>
IParserEventSink::EventCode EnumObservationStatusTypeTmpl<T>::parseString(const wchar_t* strValue, int nValueLen, EnumObservationStatusType::Values& eValue)
{
	int iValue = findString(strValue, nValueLen,  m_arrValues, k_iNumValues);
	if (iValue == -1)
		return IParserEventSink::EventCode::kInvalidEnumerationValue;
	eValue = static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
	return IParserEventSink::EventCode::kOk;
}


template <class T>
const wchar_t* EnumMetTemperatureTmpl<T>::m_arrValues[] = {
    {L"null"},
    {L"celsius"},
    {L"kelvin"},
};

template<class T>
EnumMetTemperatureTmpl<T>::EnumMetTemperatureTmpl<T>() {m_eValue = k_null;}

template<class T>
EnumMetTemperatureTmpl<T>::EnumMetTemperatureTmpl<T>(DocumentImpl* pDoc) {m_eValue = k_null;}

template<class T>
EnumMetTemperatureTmpl<T>::EnumMetTemperatureTmpl<T> (EnumMetTemperature::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
EnumMetTemperature::Values EnumMetTemperatureTmpl<T>::value () {return m_eValue;}

template<class T>
void EnumMetTemperatureTmpl<T>::setValue (EnumMetTemperature::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
void EnumMetTemperatureTmpl<T>::streamOut (EnumMetTemperature::Values eVal, IStream& stream) {stream.write(m_arrValues[eVal]);}

template<class T>
const int EnumMetTemperatureTmpl<T>::k_iNumValues = 3;

template<class T>
EnumMetTemperature::Values EnumMetTemperatureTmpl<T>::parseString(const wchar_t* strValue, int nValueLen)
{
	return static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
}

template<class T>
IParserEventSink::EventCode EnumMetTemperatureTmpl<T>::parseString(const wchar_t* strValue, int nValueLen, EnumMetTemperature::Values& eValue)
{
	int iValue = findString(strValue, nValueLen,  m_arrValues, k_iNumValues);
	if (iValue == -1)
		return IParserEventSink::EventCode::kInvalidEnumerationValue;
	eValue = static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
	return IParserEventSink::EventCode::kOk;
}


template <class T>
const wchar_t* EnumParcelStateTypeTmpl<T>::m_arrValues[] = {
    {L"null"},
    {L"affected"},
    {L"created"},
    {L"encroached"},
    {L"extinguished"},
    {L"referenced"},
    {L"proposed"},
    {L"existing"},
    {L"adjoining"},
};

template<class T>
EnumParcelStateTypeTmpl<T>::EnumParcelStateTypeTmpl<T>() {m_eValue = k_null;}

template<class T>
EnumParcelStateTypeTmpl<T>::EnumParcelStateTypeTmpl<T>(DocumentImpl* pDoc) {m_eValue = k_null;}

template<class T>
EnumParcelStateTypeTmpl<T>::EnumParcelStateTypeTmpl<T> (EnumParcelStateType::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
EnumParcelStateType::Values EnumParcelStateTypeTmpl<T>::value () {return m_eValue;}

template<class T>
void EnumParcelStateTypeTmpl<T>::setValue (EnumParcelStateType::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
void EnumParcelStateTypeTmpl<T>::streamOut (EnumParcelStateType::Values eVal, IStream& stream) {stream.write(m_arrValues[eVal]);}

template<class T>
const int EnumParcelStateTypeTmpl<T>::k_iNumValues = 9;

template<class T>
EnumParcelStateType::Values EnumParcelStateTypeTmpl<T>::parseString(const wchar_t* strValue, int nValueLen)
{
	return static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
}

template<class T>
IParserEventSink::EventCode EnumParcelStateTypeTmpl<T>::parseString(const wchar_t* strValue, int nValueLen, EnumParcelStateType::Values& eValue)
{
	int iValue = findString(strValue, nValueLen,  m_arrValues, k_iNumValues);
	if (iValue == -1)
		return IParserEventSink::EventCode::kInvalidEnumerationValue;
	eValue = static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
	return IParserEventSink::EventCode::kOk;
}


template <class T>
const wchar_t* EnumBreakLineTypeTmpl<T>::m_arrValues[] = {
    {L"null"},
    {L"standard"},
    {L"wall"},
    {L"proximity"},
    {L"nondestructive"},
};

template<class T>
EnumBreakLineTypeTmpl<T>::EnumBreakLineTypeTmpl<T>() {m_eValue = k_null;}

template<class T>
EnumBreakLineTypeTmpl<T>::EnumBreakLineTypeTmpl<T>(DocumentImpl* pDoc) {m_eValue = k_null;}

template<class T>
EnumBreakLineTypeTmpl<T>::EnumBreakLineTypeTmpl<T> (EnumBreakLineType::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
EnumBreakLineType::Values EnumBreakLineTypeTmpl<T>::value () {return m_eValue;}

template<class T>
void EnumBreakLineTypeTmpl<T>::setValue (EnumBreakLineType::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
void EnumBreakLineTypeTmpl<T>::streamOut (EnumBreakLineType::Values eVal, IStream& stream) {stream.write(m_arrValues[eVal]);}

template<class T>
const int EnumBreakLineTypeTmpl<T>::k_iNumValues = 5;

template<class T>
EnumBreakLineType::Values EnumBreakLineTypeTmpl<T>::parseString(const wchar_t* strValue, int nValueLen)
{
	return static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
}

template<class T>
IParserEventSink::EventCode EnumBreakLineTypeTmpl<T>::parseString(const wchar_t* strValue, int nValueLen, EnumBreakLineType::Values& eValue)
{
	int iValue = findString(strValue, nValueLen,  m_arrValues, k_iNumValues);
	if (iValue == -1)
		return IParserEventSink::EventCode::kInvalidEnumerationValue;
	eValue = static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
	return IParserEventSink::EventCode::kOk;
}


template <class T>
const wchar_t* EnumMetLinearTmpl<T>::m_arrValues[] = {
    {L"null"},
    {L"millimeter"},
    {L"centimeter"},
    {L"meter"},
    {L"kilometer"},
};

template<class T>
EnumMetLinearTmpl<T>::EnumMetLinearTmpl<T>() {m_eValue = k_null;}

template<class T>
EnumMetLinearTmpl<T>::EnumMetLinearTmpl<T>(DocumentImpl* pDoc) {m_eValue = k_null;}

template<class T>
EnumMetLinearTmpl<T>::EnumMetLinearTmpl<T> (EnumMetLinear::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
EnumMetLinear::Values EnumMetLinearTmpl<T>::value () {return m_eValue;}

template<class T>
void EnumMetLinearTmpl<T>::setValue (EnumMetLinear::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
void EnumMetLinearTmpl<T>::streamOut (EnumMetLinear::Values eVal, IStream& stream) {stream.write(m_arrValues[eVal]);}

template<class T>
const int EnumMetLinearTmpl<T>::k_iNumValues = 5;

template<class T>
EnumMetLinear::Values EnumMetLinearTmpl<T>::parseString(const wchar_t* strValue, int nValueLen)
{
	return static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
}

template<class T>
IParserEventSink::EventCode EnumMetLinearTmpl<T>::parseString(const wchar_t* strValue, int nValueLen, EnumMetLinear::Values& eValue)
{
	int iValue = findString(strValue, nValueLen,  m_arrValues, k_iNumValues);
	if (iValue == -1)
		return IParserEventSink::EventCode::kInvalidEnumerationValue;
	eValue = static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
	return IParserEventSink::EventCode::kOk;
}


template <class T>
const wchar_t* EnumImpLinearTmpl<T>::m_arrValues[] = {
    {L"null"},
    {L"foot"},
    {L"USSurveyFoot"},
    {L"inch"},
    {L"mile"},
};

template<class T>
EnumImpLinearTmpl<T>::EnumImpLinearTmpl<T>() {m_eValue = k_null;}

template<class T>
EnumImpLinearTmpl<T>::EnumImpLinearTmpl<T>(DocumentImpl* pDoc) {m_eValue = k_null;}

template<class T>
EnumImpLinearTmpl<T>::EnumImpLinearTmpl<T> (EnumImpLinear::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
EnumImpLinear::Values EnumImpLinearTmpl<T>::value () {return m_eValue;}

template<class T>
void EnumImpLinearTmpl<T>::setValue (EnumImpLinear::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
void EnumImpLinearTmpl<T>::streamOut (EnumImpLinear::Values eVal, IStream& stream) {stream.write(m_arrValues[eVal]);}

template<class T>
const int EnumImpLinearTmpl<T>::k_iNumValues = 5;

template<class T>
EnumImpLinear::Values EnumImpLinearTmpl<T>::parseString(const wchar_t* strValue, int nValueLen)
{
	return static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
}

template<class T>
IParserEventSink::EventCode EnumImpLinearTmpl<T>::parseString(const wchar_t* strValue, int nValueLen, EnumImpLinear::Values& eValue)
{
	int iValue = findString(strValue, nValueLen,  m_arrValues, k_iNumValues);
	if (iValue == -1)
		return IParserEventSink::EventCode::kInvalidEnumerationValue;
	eValue = static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
	return IParserEventSink::EventCode::kOk;
}


template <class T>
const wchar_t* EnumZoneTransitionTypeTmpl<T>::m_arrValues[] = {
    {L"null"},
    {L"parallel"},
    {L"linear"},
};

template<class T>
EnumZoneTransitionTypeTmpl<T>::EnumZoneTransitionTypeTmpl<T>() {m_eValue = k_null;}

template<class T>
EnumZoneTransitionTypeTmpl<T>::EnumZoneTransitionTypeTmpl<T>(DocumentImpl* pDoc) {m_eValue = k_null;}

template<class T>
EnumZoneTransitionTypeTmpl<T>::EnumZoneTransitionTypeTmpl<T> (EnumZoneTransitionType::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
EnumZoneTransitionType::Values EnumZoneTransitionTypeTmpl<T>::value () {return m_eValue;}

template<class T>
void EnumZoneTransitionTypeTmpl<T>::setValue (EnumZoneTransitionType::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
void EnumZoneTransitionTypeTmpl<T>::streamOut (EnumZoneTransitionType::Values eVal, IStream& stream) {stream.write(m_arrValues[eVal]);}

template<class T>
const int EnumZoneTransitionTypeTmpl<T>::k_iNumValues = 3;

template<class T>
EnumZoneTransitionType::Values EnumZoneTransitionTypeTmpl<T>::parseString(const wchar_t* strValue, int nValueLen)
{
	return static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
}

template<class T>
IParserEventSink::EventCode EnumZoneTransitionTypeTmpl<T>::parseString(const wchar_t* strValue, int nValueLen, EnumZoneTransitionType::Values& eValue)
{
	int iValue = findString(strValue, nValueLen,  m_arrValues, k_iNumValues);
	if (iValue == -1)
		return IParserEventSink::EventCode::kInvalidEnumerationValue;
	eValue = static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
	return IParserEventSink::EventCode::kOk;
}


template <class T>
const wchar_t* EnumSurveyTypeTmpl<T>::m_arrValues[] = {
    {L"null"},
    {L"compiled"},
    {L"computed"},
    {L"surveyed"},
};

template<class T>
EnumSurveyTypeTmpl<T>::EnumSurveyTypeTmpl<T>() {m_eValue = k_null;}

template<class T>
EnumSurveyTypeTmpl<T>::EnumSurveyTypeTmpl<T>(DocumentImpl* pDoc) {m_eValue = k_null;}

template<class T>
EnumSurveyTypeTmpl<T>::EnumSurveyTypeTmpl<T> (EnumSurveyType::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
EnumSurveyType::Values EnumSurveyTypeTmpl<T>::value () {return m_eValue;}

template<class T>
void EnumSurveyTypeTmpl<T>::setValue (EnumSurveyType::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
void EnumSurveyTypeTmpl<T>::streamOut (EnumSurveyType::Values eVal, IStream& stream) {stream.write(m_arrValues[eVal]);}

template<class T>
const int EnumSurveyTypeTmpl<T>::k_iNumValues = 4;

template<class T>
EnumSurveyType::Values EnumSurveyTypeTmpl<T>::parseString(const wchar_t* strValue, int nValueLen)
{
	return static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
}

template<class T>
IParserEventSink::EventCode EnumSurveyTypeTmpl<T>::parseString(const wchar_t* strValue, int nValueLen, EnumSurveyType::Values& eValue)
{
	int iValue = findString(strValue, nValueLen,  m_arrValues, k_iNumValues);
	if (iValue == -1)
		return IParserEventSink::EventCode::kInvalidEnumerationValue;
	eValue = static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
	return IParserEventSink::EventCode::kOk;
}


template <class T>
const wchar_t* EnumZoneVertTypeTmpl<T>::m_arrValues[] = {
    {L"null"},
    {L"slope"},
    {L"vertical distance"},
};

template<class T>
EnumZoneVertTypeTmpl<T>::EnumZoneVertTypeTmpl<T>() {m_eValue = k_null;}

template<class T>
EnumZoneVertTypeTmpl<T>::EnumZoneVertTypeTmpl<T>(DocumentImpl* pDoc) {m_eValue = k_null;}

template<class T>
EnumZoneVertTypeTmpl<T>::EnumZoneVertTypeTmpl<T> (EnumZoneVertType::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
EnumZoneVertType::Values EnumZoneVertTypeTmpl<T>::value () {return m_eValue;}

template<class T>
void EnumZoneVertTypeTmpl<T>::setValue (EnumZoneVertType::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
void EnumZoneVertTypeTmpl<T>::streamOut (EnumZoneVertType::Values eVal, IStream& stream) {stream.write(m_arrValues[eVal]);}

template<class T>
const int EnumZoneVertTypeTmpl<T>::k_iNumValues = 3;

template<class T>
EnumZoneVertType::Values EnumZoneVertTypeTmpl<T>::parseString(const wchar_t* strValue, int nValueLen)
{
	return static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
}

template<class T>
IParserEventSink::EventCode EnumZoneVertTypeTmpl<T>::parseString(const wchar_t* strValue, int nValueLen, EnumZoneVertType::Values& eValue)
{
	int iValue = findString(strValue, nValueLen,  m_arrValues, k_iNumValues);
	if (iValue == -1)
		return IParserEventSink::EventCode::kInvalidEnumerationValue;
	eValue = static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
	return IParserEventSink::EventCode::kOk;
}


template <class T>
const wchar_t* EnumXsVolCalcMethodTypeTmpl<T>::m_arrValues[] = {
    {L"null"},
    {L"AverageEndArea"},
    {L"Prismoidal"},
};

template<class T>
EnumXsVolCalcMethodTypeTmpl<T>::EnumXsVolCalcMethodTypeTmpl<T>() {m_eValue = k_null;}

template<class T>
EnumXsVolCalcMethodTypeTmpl<T>::EnumXsVolCalcMethodTypeTmpl<T>(DocumentImpl* pDoc) {m_eValue = k_null;}

template<class T>
EnumXsVolCalcMethodTypeTmpl<T>::EnumXsVolCalcMethodTypeTmpl<T> (EnumXsVolCalcMethodType::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
EnumXsVolCalcMethodType::Values EnumXsVolCalcMethodTypeTmpl<T>::value () {return m_eValue;}

template<class T>
void EnumXsVolCalcMethodTypeTmpl<T>::setValue (EnumXsVolCalcMethodType::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
void EnumXsVolCalcMethodTypeTmpl<T>::streamOut (EnumXsVolCalcMethodType::Values eVal, IStream& stream) {stream.write(m_arrValues[eVal]);}

template<class T>
const int EnumXsVolCalcMethodTypeTmpl<T>::k_iNumValues = 3;

template<class T>
EnumXsVolCalcMethodType::Values EnumXsVolCalcMethodTypeTmpl<T>::parseString(const wchar_t* strValue, int nValueLen)
{
	return static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
}

template<class T>
IParserEventSink::EventCode EnumXsVolCalcMethodTypeTmpl<T>::parseString(const wchar_t* strValue, int nValueLen, EnumXsVolCalcMethodType::Values& eValue)
{
	int iValue = findString(strValue, nValueLen,  m_arrValues, k_iNumValues);
	if (iValue == -1)
		return IParserEventSink::EventCode::kInvalidEnumerationValue;
	eValue = static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
	return IParserEventSink::EventCode::kOk;
}


template <class T>
const wchar_t* EnumLatLongAngularTypeTmpl<T>::m_arrValues[] = {
    {L"null"},
    {L"radians"},
    {L"grads"},
    {L"decimal degrees"},
    {L"decimal dd.mm.ss"},
};

template<class T>
EnumLatLongAngularTypeTmpl<T>::EnumLatLongAngularTypeTmpl<T>() {m_eValue = k_null;}

template<class T>
EnumLatLongAngularTypeTmpl<T>::EnumLatLongAngularTypeTmpl<T>(DocumentImpl* pDoc) {m_eValue = k_null;}

template<class T>
EnumLatLongAngularTypeTmpl<T>::EnumLatLongAngularTypeTmpl<T> (EnumLatLongAngularType::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
EnumLatLongAngularType::Values EnumLatLongAngularTypeTmpl<T>::value () {return m_eValue;}

template<class T>
void EnumLatLongAngularTypeTmpl<T>::setValue (EnumLatLongAngularType::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
void EnumLatLongAngularTypeTmpl<T>::streamOut (EnumLatLongAngularType::Values eVal, IStream& stream) {stream.write(m_arrValues[eVal]);}

template<class T>
const int EnumLatLongAngularTypeTmpl<T>::k_iNumValues = 5;

template<class T>
EnumLatLongAngularType::Values EnumLatLongAngularTypeTmpl<T>::parseString(const wchar_t* strValue, int nValueLen)
{
	return static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
}

template<class T>
IParserEventSink::EventCode EnumLatLongAngularTypeTmpl<T>::parseString(const wchar_t* strValue, int nValueLen, EnumLatLongAngularType::Values& eValue)
{
	int iValue = findString(strValue, nValueLen,  m_arrValues, k_iNumValues);
	if (iValue == -1)
		return IParserEventSink::EventCode::kInvalidEnumerationValue;
	eValue = static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
	return IParserEventSink::EventCode::kOk;
}


template <class T>
const wchar_t* EnumRoadTerrainTypeTmpl<T>::m_arrValues[] = {
    {L"null"},
    {L"flat"},
    {L"rolling"},
    {L"mountainous"},
};

template<class T>
EnumRoadTerrainTypeTmpl<T>::EnumRoadTerrainTypeTmpl<T>() {m_eValue = k_null;}

template<class T>
EnumRoadTerrainTypeTmpl<T>::EnumRoadTerrainTypeTmpl<T>(DocumentImpl* pDoc) {m_eValue = k_null;}

template<class T>
EnumRoadTerrainTypeTmpl<T>::EnumRoadTerrainTypeTmpl<T> (EnumRoadTerrainType::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
EnumRoadTerrainType::Values EnumRoadTerrainTypeTmpl<T>::value () {return m_eValue;}

template<class T>
void EnumRoadTerrainTypeTmpl<T>::setValue (EnumRoadTerrainType::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
void EnumRoadTerrainTypeTmpl<T>::streamOut (EnumRoadTerrainType::Values eVal, IStream& stream) {stream.write(m_arrValues[eVal]);}

template<class T>
const int EnumRoadTerrainTypeTmpl<T>::k_iNumValues = 4;

template<class T>
EnumRoadTerrainType::Values EnumRoadTerrainTypeTmpl<T>::parseString(const wchar_t* strValue, int nValueLen)
{
	return static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
}

template<class T>
IParserEventSink::EventCode EnumRoadTerrainTypeTmpl<T>::parseString(const wchar_t* strValue, int nValueLen, EnumRoadTerrainType::Values& eValue)
{
	int iValue = findString(strValue, nValueLen,  m_arrValues, k_iNumValues);
	if (iValue == -1)
		return IParserEventSink::EventCode::kInvalidEnumerationValue;
	eValue = static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
	return IParserEventSink::EventCode::kOk;
}


template <class T>
const wchar_t* EnumClockwiseTmpl<T>::m_arrValues[] = {
    {L"null"},
    {L"cw"},
    {L"ccw"},
};

template<class T>
EnumClockwiseTmpl<T>::EnumClockwiseTmpl<T>() {m_eValue = k_null;}

template<class T>
EnumClockwiseTmpl<T>::EnumClockwiseTmpl<T>(DocumentImpl* pDoc) {m_eValue = k_null;}

template<class T>
EnumClockwiseTmpl<T>::EnumClockwiseTmpl<T> (EnumClockwise::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
EnumClockwise::Values EnumClockwiseTmpl<T>::value () {return m_eValue;}

template<class T>
void EnumClockwiseTmpl<T>::setValue (EnumClockwise::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
void EnumClockwiseTmpl<T>::streamOut (EnumClockwise::Values eVal, IStream& stream) {stream.write(m_arrValues[eVal]);}

template<class T>
const int EnumClockwiseTmpl<T>::k_iNumValues = 3;

template<class T>
EnumClockwise::Values EnumClockwiseTmpl<T>::parseString(const wchar_t* strValue, int nValueLen)
{
	return static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
}

template<class T>
IParserEventSink::EventCode EnumClockwiseTmpl<T>::parseString(const wchar_t* strValue, int nValueLen, EnumClockwise::Values& eValue)
{
	int iValue = findString(strValue, nValueLen,  m_arrValues, k_iNumValues);
	if (iValue == -1)
		return IParserEventSink::EventCode::kInvalidEnumerationValue;
	eValue = static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
	return IParserEventSink::EventCode::kOk;
}


template <class T>
const wchar_t* EnumStateTypeTmpl<T>::m_arrValues[] = {
    {L"null"},
    {L"abandoned"},
    {L"destroyed"},
    {L"existing"},
    {L"proposed"},
};

template<class T>
EnumStateTypeTmpl<T>::EnumStateTypeTmpl<T>() {m_eValue = k_null;}

template<class T>
EnumStateTypeTmpl<T>::EnumStateTypeTmpl<T>(DocumentImpl* pDoc) {m_eValue = k_null;}

template<class T>
EnumStateTypeTmpl<T>::EnumStateTypeTmpl<T> (EnumStateType::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
EnumStateType::Values EnumStateTypeTmpl<T>::value () {return m_eValue;}

template<class T>
void EnumStateTypeTmpl<T>::setValue (EnumStateType::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
void EnumStateTypeTmpl<T>::streamOut (EnumStateType::Values eVal, IStream& stream) {stream.write(m_arrValues[eVal]);}

template<class T>
const int EnumStateTypeTmpl<T>::k_iNumValues = 5;

template<class T>
EnumStateType::Values EnumStateTypeTmpl<T>::parseString(const wchar_t* strValue, int nValueLen)
{
	return static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
}

template<class T>
IParserEventSink::EventCode EnumStateTypeTmpl<T>::parseString(const wchar_t* strValue, int nValueLen, EnumStateType::Values& eValue)
{
	int iValue = findString(strValue, nValueLen,  m_arrValues, k_iNumValues);
	if (iValue == -1)
		return IParserEventSink::EventCode::kInvalidEnumerationValue;
	eValue = static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
	return IParserEventSink::EventCode::kOk;
}


template <class T>
const wchar_t* EnumCrashIntersectionRelationTmpl<T>::m_arrValues[] = {
    {L"null"},
    {L"unknown"},
    {L"non-intersection-related"},
    {L"intersection-related"},
};

template<class T>
EnumCrashIntersectionRelationTmpl<T>::EnumCrashIntersectionRelationTmpl<T>() {m_eValue = k_null;}

template<class T>
EnumCrashIntersectionRelationTmpl<T>::EnumCrashIntersectionRelationTmpl<T>(DocumentImpl* pDoc) {m_eValue = k_null;}

template<class T>
EnumCrashIntersectionRelationTmpl<T>::EnumCrashIntersectionRelationTmpl<T> (EnumCrashIntersectionRelation::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
EnumCrashIntersectionRelation::Values EnumCrashIntersectionRelationTmpl<T>::value () {return m_eValue;}

template<class T>
void EnumCrashIntersectionRelationTmpl<T>::setValue (EnumCrashIntersectionRelation::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
void EnumCrashIntersectionRelationTmpl<T>::streamOut (EnumCrashIntersectionRelation::Values eVal, IStream& stream) {stream.write(m_arrValues[eVal]);}

template<class T>
const int EnumCrashIntersectionRelationTmpl<T>::k_iNumValues = 4;

template<class T>
EnumCrashIntersectionRelation::Values EnumCrashIntersectionRelationTmpl<T>::parseString(const wchar_t* strValue, int nValueLen)
{
	return static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
}

template<class T>
IParserEventSink::EventCode EnumCrashIntersectionRelationTmpl<T>::parseString(const wchar_t* strValue, int nValueLen, EnumCrashIntersectionRelation::Values& eValue)
{
	int iValue = findString(strValue, nValueLen,  m_arrValues, k_iNumValues);
	if (iValue == -1)
		return IParserEventSink::EventCode::kInvalidEnumerationValue;
	eValue = static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
	return IParserEventSink::EventCode::kOk;
}


template <class T>
const wchar_t* EnumImpDiameterTmpl<T>::m_arrValues[] = {
    {L"null"},
    {L"foot"},
    {L"USSurveyFoot"},
    {L"inch"},
};

template<class T>
EnumImpDiameterTmpl<T>::EnumImpDiameterTmpl<T>() {m_eValue = k_null;}

template<class T>
EnumImpDiameterTmpl<T>::EnumImpDiameterTmpl<T>(DocumentImpl* pDoc) {m_eValue = k_null;}

template<class T>
EnumImpDiameterTmpl<T>::EnumImpDiameterTmpl<T> (EnumImpDiameter::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
EnumImpDiameter::Values EnumImpDiameterTmpl<T>::value () {return m_eValue;}

template<class T>
void EnumImpDiameterTmpl<T>::setValue (EnumImpDiameter::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
void EnumImpDiameterTmpl<T>::streamOut (EnumImpDiameter::Values eVal, IStream& stream) {stream.write(m_arrValues[eVal]);}

template<class T>
const int EnumImpDiameterTmpl<T>::k_iNumValues = 4;

template<class T>
EnumImpDiameter::Values EnumImpDiameterTmpl<T>::parseString(const wchar_t* strValue, int nValueLen)
{
	return static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
}

template<class T>
IParserEventSink::EventCode EnumImpDiameterTmpl<T>::parseString(const wchar_t* strValue, int nValueLen, EnumImpDiameter::Values& eValue)
{
	int iValue = findString(strValue, nValueLen,  m_arrValues, k_iNumValues);
	if (iValue == -1)
		return IParserEventSink::EventCode::kInvalidEnumerationValue;
	eValue = static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
	return IParserEventSink::EventCode::kOk;
}


template <class T>
const wchar_t* EnumGPSSolutionTypeEnumTmpl<T>::m_arrValues[] = {
    {L"null"},
    {L"Unknown"},
    {L"Code"},
    {L"Float"},
    {L"Fixed"},
    {L"Network Float"},
    {L"Network Fixed"},
    {L"WAAS Float"},
    {L"WAAS Fixed"},
};

template<class T>
EnumGPSSolutionTypeEnumTmpl<T>::EnumGPSSolutionTypeEnumTmpl<T>() {m_eValue = k_null;}

template<class T>
EnumGPSSolutionTypeEnumTmpl<T>::EnumGPSSolutionTypeEnumTmpl<T>(DocumentImpl* pDoc) {m_eValue = k_null;}

template<class T>
EnumGPSSolutionTypeEnumTmpl<T>::EnumGPSSolutionTypeEnumTmpl<T> (EnumGPSSolutionTypeEnum::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
EnumGPSSolutionTypeEnum::Values EnumGPSSolutionTypeEnumTmpl<T>::value () {return m_eValue;}

template<class T>
void EnumGPSSolutionTypeEnumTmpl<T>::setValue (EnumGPSSolutionTypeEnum::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
void EnumGPSSolutionTypeEnumTmpl<T>::streamOut (EnumGPSSolutionTypeEnum::Values eVal, IStream& stream) {stream.write(m_arrValues[eVal]);}

template<class T>
const int EnumGPSSolutionTypeEnumTmpl<T>::k_iNumValues = 9;

template<class T>
EnumGPSSolutionTypeEnum::Values EnumGPSSolutionTypeEnumTmpl<T>::parseString(const wchar_t* strValue, int nValueLen)
{
	return static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
}

template<class T>
IParserEventSink::EventCode EnumGPSSolutionTypeEnumTmpl<T>::parseString(const wchar_t* strValue, int nValueLen, EnumGPSSolutionTypeEnum::Values& eValue)
{
	int iValue = findString(strValue, nValueLen,  m_arrValues, k_iNumValues);
	if (iValue == -1)
		return IParserEventSink::EventCode::kInvalidEnumerationValue;
	eValue = static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
	return IParserEventSink::EventCode::kOk;
}


template <class T>
const wchar_t* EnumMetDiameterTmpl<T>::m_arrValues[] = {
    {L"null"},
    {L"millimeter"},
    {L"centimeter"},
    {L"meter"},
    {L"kilometer"},
};

template<class T>
EnumMetDiameterTmpl<T>::EnumMetDiameterTmpl<T>() {m_eValue = k_null;}

template<class T>
EnumMetDiameterTmpl<T>::EnumMetDiameterTmpl<T>(DocumentImpl* pDoc) {m_eValue = k_null;}

template<class T>
EnumMetDiameterTmpl<T>::EnumMetDiameterTmpl<T> (EnumMetDiameter::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
EnumMetDiameter::Values EnumMetDiameterTmpl<T>::value () {return m_eValue;}

template<class T>
void EnumMetDiameterTmpl<T>::setValue (EnumMetDiameter::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
void EnumMetDiameterTmpl<T>::streamOut (EnumMetDiameter::Values eVal, IStream& stream) {stream.write(m_arrValues[eVal]);}

template<class T>
const int EnumMetDiameterTmpl<T>::k_iNumValues = 5;

template<class T>
EnumMetDiameter::Values EnumMetDiameterTmpl<T>::parseString(const wchar_t* strValue, int nValueLen)
{
	return static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
}

template<class T>
IParserEventSink::EventCode EnumMetDiameterTmpl<T>::parseString(const wchar_t* strValue, int nValueLen, EnumMetDiameter::Values& eValue)
{
	int iValue = findString(strValue, nValueLen,  m_arrValues, k_iNumValues);
	if (iValue == -1)
		return IParserEventSink::EventCode::kInvalidEnumerationValue;
	eValue = static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
	return IParserEventSink::EventCode::kOk;
}


template <class T>
const wchar_t* EnumGPSSolutionFrequencyEnumTmpl<T>::m_arrValues[] = {
    {L"null"},
    {L"Unknown"},
    {L"L1"},
    {L"L2"},
    {L"L2 Squared"},
    {L"Wide Lane"},
    {L"Narrow Lane"},
    {L"Iono Free"},
};

template<class T>
EnumGPSSolutionFrequencyEnumTmpl<T>::EnumGPSSolutionFrequencyEnumTmpl<T>() {m_eValue = k_null;}

template<class T>
EnumGPSSolutionFrequencyEnumTmpl<T>::EnumGPSSolutionFrequencyEnumTmpl<T>(DocumentImpl* pDoc) {m_eValue = k_null;}

template<class T>
EnumGPSSolutionFrequencyEnumTmpl<T>::EnumGPSSolutionFrequencyEnumTmpl<T> (EnumGPSSolutionFrequencyEnum::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
EnumGPSSolutionFrequencyEnum::Values EnumGPSSolutionFrequencyEnumTmpl<T>::value () {return m_eValue;}

template<class T>
void EnumGPSSolutionFrequencyEnumTmpl<T>::setValue (EnumGPSSolutionFrequencyEnum::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
void EnumGPSSolutionFrequencyEnumTmpl<T>::streamOut (EnumGPSSolutionFrequencyEnum::Values eVal, IStream& stream) {stream.write(m_arrValues[eVal]);}

template<class T>
const int EnumGPSSolutionFrequencyEnumTmpl<T>::k_iNumValues = 8;

template<class T>
EnumGPSSolutionFrequencyEnum::Values EnumGPSSolutionFrequencyEnumTmpl<T>::parseString(const wchar_t* strValue, int nValueLen)
{
	return static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
}

template<class T>
IParserEventSink::EventCode EnumGPSSolutionFrequencyEnumTmpl<T>::parseString(const wchar_t* strValue, int nValueLen, EnumGPSSolutionFrequencyEnum::Values& eValue)
{
	int iValue = findString(strValue, nValueLen,  m_arrValues, k_iNumValues);
	if (iValue == -1)
		return IParserEventSink::EventCode::kInvalidEnumerationValue;
	eValue = static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
	return IParserEventSink::EventCode::kOk;
}


template <class T>
const wchar_t* EnumMetFlowTmpl<T>::m_arrValues[] = {
    {L"null"},
    {L"cubicMeterSecond"},
    {L"literPerSecond"},
    {L"literPerMinute"},
};

template<class T>
EnumMetFlowTmpl<T>::EnumMetFlowTmpl<T>() {m_eValue = k_null;}

template<class T>
EnumMetFlowTmpl<T>::EnumMetFlowTmpl<T>(DocumentImpl* pDoc) {m_eValue = k_null;}

template<class T>
EnumMetFlowTmpl<T>::EnumMetFlowTmpl<T> (EnumMetFlow::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
EnumMetFlow::Values EnumMetFlowTmpl<T>::value () {return m_eValue;}

template<class T>
void EnumMetFlowTmpl<T>::setValue (EnumMetFlow::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
void EnumMetFlowTmpl<T>::streamOut (EnumMetFlow::Values eVal, IStream& stream) {stream.write(m_arrValues[eVal]);}

template<class T>
const int EnumMetFlowTmpl<T>::k_iNumValues = 4;

template<class T>
EnumMetFlow::Values EnumMetFlowTmpl<T>::parseString(const wchar_t* strValue, int nValueLen)
{
	return static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
}

template<class T>
IParserEventSink::EventCode EnumMetFlowTmpl<T>::parseString(const wchar_t* strValue, int nValueLen, EnumMetFlow::Values& eValue)
{
	int iValue = findString(strValue, nValueLen,  m_arrValues, k_iNumValues);
	if (iValue == -1)
		return IParserEventSink::EventCode::kInvalidEnumerationValue;
	eValue = static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
	return IParserEventSink::EventCode::kOk;
}


template <class T>
const wchar_t* EnumMetPressureTmpl<T>::m_arrValues[] = {
    {L"null"},
    {L"HPA"},
    {L"milliBars"},
    {L"mmHG"},
    {L"millimeterHG"},
};

template<class T>
EnumMetPressureTmpl<T>::EnumMetPressureTmpl<T>() {m_eValue = k_null;}

template<class T>
EnumMetPressureTmpl<T>::EnumMetPressureTmpl<T>(DocumentImpl* pDoc) {m_eValue = k_null;}

template<class T>
EnumMetPressureTmpl<T>::EnumMetPressureTmpl<T> (EnumMetPressure::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
EnumMetPressure::Values EnumMetPressureTmpl<T>::value () {return m_eValue;}

template<class T>
void EnumMetPressureTmpl<T>::setValue (EnumMetPressure::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
void EnumMetPressureTmpl<T>::streamOut (EnumMetPressure::Values eVal, IStream& stream) {stream.write(m_arrValues[eVal]);}

template<class T>
const int EnumMetPressureTmpl<T>::k_iNumValues = 5;

template<class T>
EnumMetPressure::Values EnumMetPressureTmpl<T>::parseString(const wchar_t* strValue, int nValueLen)
{
	return static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
}

template<class T>
IParserEventSink::EventCode EnumMetPressureTmpl<T>::parseString(const wchar_t* strValue, int nValueLen, EnumMetPressure::Values& eValue)
{
	int iValue = findString(strValue, nValueLen,  m_arrValues, k_iNumValues);
	if (iValue == -1)
		return IParserEventSink::EventCode::kInvalidEnumerationValue;
	eValue = static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
	return IParserEventSink::EventCode::kOk;
}


template <class T>
const wchar_t* EnumPipeNetworkTypeTmpl<T>::m_arrValues[] = {
    {L"null"},
    {L"sanitary"},
    {L"storm"},
    {L"water"},
    {L"other"},
};

template<class T>
EnumPipeNetworkTypeTmpl<T>::EnumPipeNetworkTypeTmpl<T>() {m_eValue = k_null;}

template<class T>
EnumPipeNetworkTypeTmpl<T>::EnumPipeNetworkTypeTmpl<T>(DocumentImpl* pDoc) {m_eValue = k_null;}

template<class T>
EnumPipeNetworkTypeTmpl<T>::EnumPipeNetworkTypeTmpl<T> (EnumPipeNetworkType::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
EnumPipeNetworkType::Values EnumPipeNetworkTypeTmpl<T>::value () {return m_eValue;}

template<class T>
void EnumPipeNetworkTypeTmpl<T>::setValue (EnumPipeNetworkType::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
void EnumPipeNetworkTypeTmpl<T>::streamOut (EnumPipeNetworkType::Values eVal, IStream& stream) {stream.write(m_arrValues[eVal]);}

template<class T>
const int EnumPipeNetworkTypeTmpl<T>::k_iNumValues = 5;

template<class T>
EnumPipeNetworkType::Values EnumPipeNetworkTypeTmpl<T>::parseString(const wchar_t* strValue, int nValueLen)
{
	return static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
}

template<class T>
IParserEventSink::EventCode EnumPipeNetworkTypeTmpl<T>::parseString(const wchar_t* strValue, int nValueLen, EnumPipeNetworkType::Values& eValue)
{
	int iValue = findString(strValue, nValueLen,  m_arrValues, k_iNumValues);
	if (iValue == -1)
		return IParserEventSink::EventCode::kInvalidEnumerationValue;
	eValue = static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
	return IParserEventSink::EventCode::kOk;
}


template <class T>
const wchar_t* EnumZoneHingeTypeTmpl<T>::m_arrValues[] = {
    {L"null"},
    {L"center"},
    {L"left edge"},
    {L"right edge"},
};

template<class T>
EnumZoneHingeTypeTmpl<T>::EnumZoneHingeTypeTmpl<T>() {m_eValue = k_null;}

template<class T>
EnumZoneHingeTypeTmpl<T>::EnumZoneHingeTypeTmpl<T>(DocumentImpl* pDoc) {m_eValue = k_null;}

template<class T>
EnumZoneHingeTypeTmpl<T>::EnumZoneHingeTypeTmpl<T> (EnumZoneHingeType::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
EnumZoneHingeType::Values EnumZoneHingeTypeTmpl<T>::value () {return m_eValue;}

template<class T>
void EnumZoneHingeTypeTmpl<T>::setValue (EnumZoneHingeType::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
void EnumZoneHingeTypeTmpl<T>::streamOut (EnumZoneHingeType::Values eVal, IStream& stream) {stream.write(m_arrValues[eVal]);}

template<class T>
const int EnumZoneHingeTypeTmpl<T>::k_iNumValues = 4;

template<class T>
EnumZoneHingeType::Values EnumZoneHingeTypeTmpl<T>::parseString(const wchar_t* strValue, int nValueLen)
{
	return static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
}

template<class T>
IParserEventSink::EventCode EnumZoneHingeTypeTmpl<T>::parseString(const wchar_t* strValue, int nValueLen, EnumZoneHingeType::Values& eValue)
{
	int iValue = findString(strValue, nValueLen,  m_arrValues, k_iNumValues);
	if (iValue == -1)
		return IParserEventSink::EventCode::kInvalidEnumerationValue;
	eValue = static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
	return IParserEventSink::EventCode::kOk;
}


template <class T>
const wchar_t* EnumImpPressureTmpl<T>::m_arrValues[] = {
    {L"null"},
    {L"inchHG"},
    {L"inHG"},
};

template<class T>
EnumImpPressureTmpl<T>::EnumImpPressureTmpl<T>() {m_eValue = k_null;}

template<class T>
EnumImpPressureTmpl<T>::EnumImpPressureTmpl<T>(DocumentImpl* pDoc) {m_eValue = k_null;}

template<class T>
EnumImpPressureTmpl<T>::EnumImpPressureTmpl<T> (EnumImpPressure::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
EnumImpPressure::Values EnumImpPressureTmpl<T>::value () {return m_eValue;}

template<class T>
void EnumImpPressureTmpl<T>::setValue (EnumImpPressure::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
void EnumImpPressureTmpl<T>::streamOut (EnumImpPressure::Values eVal, IStream& stream) {stream.write(m_arrValues[eVal]);}

template<class T>
const int EnumImpPressureTmpl<T>::k_iNumValues = 3;

template<class T>
EnumImpPressure::Values EnumImpPressureTmpl<T>::parseString(const wchar_t* strValue, int nValueLen)
{
	return static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
}

template<class T>
IParserEventSink::EventCode EnumImpPressureTmpl<T>::parseString(const wchar_t* strValue, int nValueLen, EnumImpPressure::Values& eValue)
{
	int iValue = findString(strValue, nValueLen,  m_arrValues, k_iNumValues);
	if (iValue == -1)
		return IParserEventSink::EventCode::kInvalidEnumerationValue;
	eValue = static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
	return IParserEventSink::EventCode::kOk;
}


template <class T>
const wchar_t* EnumSurfVolCMethodTypeTmpl<T>::m_arrValues[] = {
    {L"null"},
    {L"grid"},
    {L"composite"},
};

template<class T>
EnumSurfVolCMethodTypeTmpl<T>::EnumSurfVolCMethodTypeTmpl<T>() {m_eValue = k_null;}

template<class T>
EnumSurfVolCMethodTypeTmpl<T>::EnumSurfVolCMethodTypeTmpl<T>(DocumentImpl* pDoc) {m_eValue = k_null;}

template<class T>
EnumSurfVolCMethodTypeTmpl<T>::EnumSurfVolCMethodTypeTmpl<T> (EnumSurfVolCMethodType::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
EnumSurfVolCMethodType::Values EnumSurfVolCMethodTypeTmpl<T>::value () {return m_eValue;}

template<class T>
void EnumSurfVolCMethodTypeTmpl<T>::setValue (EnumSurfVolCMethodType::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
void EnumSurfVolCMethodTypeTmpl<T>::streamOut (EnumSurfVolCMethodType::Values eVal, IStream& stream) {stream.write(m_arrValues[eVal]);}

template<class T>
const int EnumSurfVolCMethodTypeTmpl<T>::k_iNumValues = 3;

template<class T>
EnumSurfVolCMethodType::Values EnumSurfVolCMethodTypeTmpl<T>::parseString(const wchar_t* strValue, int nValueLen)
{
	return static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
}

template<class T>
IParserEventSink::EventCode EnumSurfVolCMethodTypeTmpl<T>::parseString(const wchar_t* strValue, int nValueLen, EnumSurfVolCMethodType::Values& eValue)
{
	int iValue = findString(strValue, nValueLen,  m_arrValues, k_iNumValues);
	if (iValue == -1)
		return IParserEventSink::EventCode::kInvalidEnumerationValue;
	eValue = static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
	return IParserEventSink::EventCode::kOk;
}


template <class T>
const wchar_t* EnumPurposeTypeTmpl<T>::m_arrValues[] = {
    {L"null"},
    {L"normal"},
    {L"check"},
    {L"backsight"},
    {L"foresight"},
    {L"traverse"},
    {L"sideshot"},
    {L"resection"},
    {L"levelLoop"},
    {L"digitalLevel"},
    {L"remoteElevation"},
    {L"recipricalObservation"},
    {L"topo"},
    {L"cutSheets"},
    {L"asbuilt"},
};

template<class T>
EnumPurposeTypeTmpl<T>::EnumPurposeTypeTmpl<T>() {m_eValue = k_null;}

template<class T>
EnumPurposeTypeTmpl<T>::EnumPurposeTypeTmpl<T>(DocumentImpl* pDoc) {m_eValue = k_null;}

template<class T>
EnumPurposeTypeTmpl<T>::EnumPurposeTypeTmpl<T> (EnumPurposeType::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
EnumPurposeType::Values EnumPurposeTypeTmpl<T>::value () {return m_eValue;}

template<class T>
void EnumPurposeTypeTmpl<T>::setValue (EnumPurposeType::Values eValue) {m_eValue = eValue; m_bNothing = false;}

template<class T>
void EnumPurposeTypeTmpl<T>::streamOut (EnumPurposeType::Values eVal, IStream& stream) {stream.write(m_arrValues[eVal]);}

template<class T>
const int EnumPurposeTypeTmpl<T>::k_iNumValues = 15;

template<class T>
EnumPurposeType::Values EnumPurposeTypeTmpl<T>::parseString(const wchar_t* strValue, int nValueLen)
{
	return static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
}

template<class T>
IParserEventSink::EventCode EnumPurposeTypeTmpl<T>::parseString(const wchar_t* strValue, int nValueLen, EnumPurposeType::Values& eValue)
{
	int iValue = findString(strValue, nValueLen,  m_arrValues, k_iNumValues);
	if (iValue == -1)
		return IParserEventSink::EventCode::kInvalidEnumerationValue;
	eValue = static_cast<Values>(findString(strValue, nValueLen, m_arrValues, k_iNumValues));
	return IParserEventSink::EventCode::kOk;
}



}; // namespace : LX
