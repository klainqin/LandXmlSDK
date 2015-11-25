#pragma once


#include "IFactory.h"
#include "FactoryImpl.h"
#include "LXTypesImpl.h"
#include "Units.h"
#include "NoPassingZone.h"
#include "RectStruct.h"
#include "Cant.h"
#include "RoadSign.h"
#include "CantStation.h"
#include "TestObservation.h"
#include "Superelevation.h"
#include "DocFileRef.h"
#include "RetWallPnt.h"
#include "InSpiral.h"
#include "Annotation.h"
#include "Surfaces.h"
#include "OffsetLane.h"
#include "Curve.h"
#include "UnsymParaCurve.h"
#include "GPSVector.h"
#include "Pnts.h"
#include "HazardRating.h"
#include "Project.h"
#include "Application.h"
#include "AdverseSE.h"
#include "HeadOfPower.h"
#include "CrashData.h"
#include "MapPoint.h"
#include "Center.h"
#include "Parcels.h"
#include "LocationAddress.h"
#include "Intersections.h"
#include "Pipes.h"
#include "Spiral.h"
#include "RetWall.h"
#include "OffsetVals.h"
#include "Outlet.h"
#include "Equipment.h"
#include "ElliPipe.h"
#include "BridgeElement.h"
#include "VolumeGeom.h"
#include "PntList3D.h"
#include "Boundary.h"
#include "RedHorizontalPosition.h"
#include "TrafficVolume.h"
#include "Start.h"
#include "CircPipe.h"
#include "InstrumentSetup.h"
#include "SurfVolumes.h"
#include "PlanFeatures.h"
#include "Boundaries.h"
#include "CrossSectPnt.h"
#include "CoordGeom.h"
#include "AmendmentItem.h"
#include "Location.h"
#include "TurnRestriction.h"
#include "AdministrativeArea.h"
#include "ClimbLane.h"
#include "ZoneCutFill.h"
#include "SpeedStation.h"
#include "DailyTrafficVolume.h"
#include "GPSPosition.h"
#include "Profile.h"
#include "PipeNetworks.h"
#include "RectPipe.h"
#include "ThruLane.h"
#include "ProfSurf.h"
#include "Author.h"
#include "CrossSectSurf.h"
#include "FullSuperelev.h"
#include "Roadway.h"
#include "EggPipe.h"
#include "Structs.h"
#include "Intersection.h"
#include "FieldNote.h"
#include "SurfVolume.h"
#include "GPSQCInfoLevel1.h"
#include "BikeFacilities.h"
#include "CgPoint.h"
#include "DrivewayDensity.h"
#include "Monuments.h"
#include "Corner.h"
#include "Volume.h"
#include "CircCurve.h"
#include "Title.h"
#include "DesignCrossSectSurf.h"
#include "RedVerticalObservation.h"
#include "ZoneCrossSectStructure.h"
#include "Classification.h"
#include "Zones.h"
#include "SurveyHeader.h"
#include "LaserSetup.h"
#include "Property.h"
#include "PointFiles.h"
#include "ZoneSlope.h"
#include "Ditch.h"
#include "Timing.h"
#include "GPSAntennaDetails.h"
#include "InstrumentPoint.h"
#include "TurnSpeed.h"
#include "TurnLane.h"
#include "ProfAlign.h"
#include "RawObservationType.h"
#include "Curve1.h"
#include "Parcel.h"
#include "Line.h"
#include "Breaklines.h"
#include "Feature.h"
#include "OutSpiral.h"
#include "Definition.h"
#include "F.h"
#include "LaserDetails.h"
#include "Speeds.h"
#include "OutletStruct.h"
#include "Breakline.h"
#include "Exclusions.h"
#include "PVI.h"
#include "TrafficControl.h"
#include "Watershed.h"
#include "Corrections.h"
#include "ReducedObservation.h"
#include "Watersheds.h"
#include "CircStruct.h"
#include "StartofRunoutSta.h"
#include "InletStruct.h"
#include "ControlChecks.h"
#include "ReducedArcObservation.h"
#include "GradeModel.h"
#include "TargetPoint.h"
#include "Curve2.h"
#include "DesignSpeed85th.h"
#include "PntList2D.h"
#include "GPSQCInfoLevel2.h"
#include "CrashHistory.h"
#include "SourceData.h"
#include "PlanFeature.h"
#include "Station.h"
#include "Invert.h"
#include "Contours.h"
#include "Lanes.h"
#include "ZoneHinge.h"
#include "End.h"
#include "AlignPIs.h"
#include "AlignPI.h"
#include "DataPoints.h"
#include "FullSuperSta.h"
#include "Contour.h"
#include "AdministrativeDate.h"
#include "SurveyMonument.h"
#include "ObstructionOffset.h"
#include "GPSSetup.h"
#include "Backsight.h"
#include "PointType.h"
#include "CrossSects.h"
#include "Surface.h"
#include "Curb.h"
#include "Struct.h"
#include "WideningLane.h"
#include "SurveyorCertificate.h"
#include "P.h"
#include "IrregularLine.h"
#include "TwoWayLeftTurnLane.h"
#include "RawObservation.h"
#include "TargetSetup.h"
#include "Channel.h"
#include "PipeFlow.h"
#include "PointFile.h"
#include "BacksightPoint.h"
#include "Personnel.h"
#include "Monument.h"
#include "Amendment.h"
#include "InstrumentDetails.h"
#include "StructFlow.h"
#include "LandXML.h"
#include "Faces.h"
#include "DecisionSightDistance.h"
#include "Roadways.h"
#include "FeatureDictionary.h"
#include "ZoneWidth.h"
#include "ParaCurve.h"
#include "CgPoints.h"
#include "DesignHour.h"
#include "ConnSpiral.h"
#include "Alignment.h"
#include "POI.h"
#include "Alignments.h"
#include "Roadside.h"
#include "PeakHour.h"
#include "Chain.h"
#include "ObservationGroup.h"
#include "ComplexName.h"
#include "AddressPoint.h"
#include "PointType3dReq.h"
#include "PassingLane.h"
#include "ZoneMaterial.h"
#include "Metric.h"
#include "RunoffSta.h"
#include "Pipe.h"
#include "EndofRunoutSta.h"
#include "BeginRunoffSta.h"
#include "PipeNetwork.h"
#include "CoordinateSystem.h"
#include "CrossSect.h"
#include "PointResults.h"
#include "PostedSpeed.h"
#include "GPSReceiverDetails.h"
#include "PurposeOfSurvey.h"
#include "RoadName.h"
#include "Zone.h"
#include "StaEquation.h"
#include "GradeSurface.h"
#include "Survey.h"
#include "Imperial.h"
#include "BeginRunoutSta.h"
#include "DesignSpeed.h"
#include "Connection.h"

#include "DesignCrossSectSurfCollection.h"
#include "VolumeCollection.h"
#include "ZonesCollection.h"
#include "SurfaceCollection.h"
#include "ClimbLaneCollection.h"
#include "DataPointsCollection.h"
#include "AdministrativeAreaCollection.h"
#include "BacksightCollection.h"
#include "CrossSectCollection.h"
#include "PipeNetworkCollection.h"
#include "AlignmentCollection.h"
#include "RoadwayCollection.h"
#include "RawObservationCollection.h"
#include "RunoffStaCollection.h"
#include "ZoneHingeCollection.h"
#include "TurnLaneCollection.h"
#include "PropertyCollection.h"
#include "ChainCollection.h"
#include "GradeSurfaceCollection.h"
#include "CornerCollection.h"
#include "EndofRunoutStaCollection.h"
#include "CantStationCollection.h"
#include "NoPassingZoneCollection.h"
#include "CurbCollection.h"
#include "ZoneWidthCollection.h"
#include "CoordGeomCollection.h"
#include "ParcelCollection.h"
#include "MonumentsCollection.h"
#include "PipeNetworksCollection.h"
#include "SurveyCollection.h"
#include "OutletCollection.h"
#include "ZoneCutFillCollection.h"
#include "TurnSpeedCollection.h"
#include "FeatureCollection.h"
#include "HeadOfPowerCollection.h"
#include "RoadNameCollection.h"
#include "IntersectionCollection.h"
#include "BoundaryCollection.h"
#include "AdministrativeDateCollection.h"
#include "ObservationGroupCollection.h"
#include "PipeCollection.h"
#include "DitchCollection.h"
#include "SurfVolumesCollection.h"
#include "ProfSurfCollection.h"
#include "ProfAlignCollection.h"
#include "HazardRatingCollection.h"
#include "SurfVolumeCollection.h"
#include "BreaklineCollection.h"
#include "SpeedStationCollection.h"
#include "RoadSignCollection.h"
#include "AuthorCollection.h"
#include "BridgeElementCollection.h"
#include "RoadsideCollection.h"
#include "CrossSectSurfCollection.h"
#include "StartofRunoutStaCollection.h"
#include "DesignSpeedCollection.h"
#include "TargetSetupCollection.h"
#include "CgPointCollection.h"
#include "GPSPositionCollection.h"
#include "AlignPICollection.h"
#include "IntersectionsCollection.h"
#include "PostedSpeedCollection.h"
#include "PurposeOfSurveyCollection.h"
#include "PointResultsCollection.h"
#include "SurveyMonumentCollection.h"
#include "LanesCollection.h"
#include "DesignSpeed85thCollection.h"
#include "ZoneCrossSectStructureCollection.h"
#include "ZoneCollection.h"
#include "TrafficVolumeCollection.h"
#include "FCollection.h"
#include "AddressPointCollection.h"
#include "PointFileCollection.h"
#include "CgPointsCollection.h"
#include "LocationCollection.h"
#include "PlanFeatureCollection.h"
#include "FullSuperelevCollection.h"
#include "SpeedsCollection.h"
#include "InvertCollection.h"
#include "FeatureDictionaryCollection.h"
#include "PlanFeaturesCollection.h"
#include "DrivewayDensityCollection.h"
#include "BeginRunoutStaCollection.h"
#include "MonumentCollection.h"
#include "FacesCollection.h"
#include "BeginRunoffStaCollection.h"
#include "OffsetLaneCollection.h"
#include "GradeModelCollection.h"
#include "DocFileRefCollection.h"
#include "TwoWayLeftTurnLaneCollection.h"
#include "ObstructionOffsetCollection.h"
#include "WatershedCollection.h"
#include "PntList2DCollection.h"
#include "RoadwaysCollection.h"
#include "TitleCollection.h"
#include "GPSSetupCollection.h"
#include "ZoneSlopeCollection.h"
#include "CrossSectsCollection.h"
#include "TurnRestrictionCollection.h"
#include "ZoneMaterialCollection.h"
#include "WideningLaneCollection.h"
#include "TrafficControlCollection.h"
#include "AdverseSECollection.h"
#include "PCollection.h"
#include "PassingLaneCollection.h"
#include "FieldNoteCollection.h"
#include "LocationAddressCollection.h"
#include "PntList3DCollection.h"
#include "ExclusionsCollection.h"
#include "ThruLaneCollection.h"
#include "AlignmentsCollection.h"
#include "ClassificationCollection.h"
#include "AmendmentItemCollection.h"
#include "BikeFacilitiesCollection.h"
#include "CrashDataCollection.h"
#include "GPSVectorCollection.h"
#include "InstrumentSetupCollection.h"
#include "RetWallPntCollection.h"
#include "ParcelsCollection.h"
#include "CrossSectPntCollection.h"
#include "CrashHistoryCollection.h"
#include "PersonnelCollection.h"
#include "MapPointCollection.h"
#include "AnnotationCollection.h"
#include "RetWallCollection.h"
#include "ContourCollection.h"
#include "DecisionSightDistanceCollection.h"
#include "StaEquationCollection.h"
#include "AmendmentCollection.h"
#include "LaserSetupCollection.h"
#include "TimingCollection.h"
#include "SuperelevationCollection.h"
#include "StructCollection.h"
#include "ProfileCollection.h"
#include "SurfacesCollection.h"
#include "SurveyorCertificateCollection.h"
#include "FullSuperStaCollection.h"
#include "TestObservationCollection.h"
#include "ComplexNameCollection.h"
#include "ControlChecksCollection.h"

#include <locale.h>
#include "libxml/xmlString.h"

#define char_value(arg) #arg
#define xml_char(name) BAD_CAST(char_value(name))

#define GET_ATTRIBUTE(ELEM, obj, ATTR_NAME, TYPE1, Fun)  \
	try  \
	{  \
        xmlChar* szAttr = NULL; \
        if(xmlHasProp(ELEM, xml_char(ATTR_NAME)))  \
		{  \
            xmlAttrPtr attrPtr = ELEM->properties; \
            while (attrPtr != NULL) \
            {  \
                if (0 == xmlStrcmp(attrPtr->name, xml_char(ATTR_NAME)))  \
                {  \
                    szAttr = xmlGetProp(ELEM, xml_char(ATTR_NAME));  \
                    break;  \
                }  \
                attrPtr = attrPtr->next;  \
            }  \
		}  \
        if(szAttr)  \
        {  \
            wchar_t* temp = NULL;  \
            int len;  \
            if (this->xmlChar2wcs(szAttr, &temp, len))  \
            {  \
                TYPE1::Type value;  \
                TYPE1::parseString(static_cast<wchar_t const*>(temp), len, value);  \
                obj->set##Fun(value);  \
            }  \
            delete[] temp;  \
            xmlFree(szAttr); \
        }  \
	}  \
	catch(...){}

#define GET_Sub_Element(ELEM, OBJ, SUB_ELEMENT)  \
	try  \
	{  \
        xmlNodePtr curNode = ELEM->xmlChildrenNode; \
        while (curNode != NULL) \
        {  \
            if (0 == xmlStrcmp(curNode->name, xml_char(SUB_ELEMENT)))  \
            {  \
                OBJ->SUB_ELEMENT().addItem(Load##SUB_ELEMENT(curNode));  \
            }  \
            curNode = curNode->next;  \
        }  \
	}catch(...){}

#define GET_Sub_Single_Element(ELEM, OBJ, SUB_ELEMENT)  \
	try  \
	{  \
        xmlNodePtr curNode = ELEM->xmlChildrenNode; \
        while (curNode != NULL) \
        {  \
            if (0 == xmlStrcmp(curNode->name, xml_char(SUB_ELEMENT)))  \
            {  \
                OBJ->set##SUB_ELEMENT(Load##SUB_ELEMENT(curNode));  \
                break;  \
            }  \
            curNode = curNode->next;  \
        }  \
	}  \
	catch(...){}

#define GET_TEXT_VALUE(ELEM, OBJ, TYPE)  \
	try  \
	{  \
		TYPE* pObject1 = dynamic_cast<TYPE*>(OBJ);  \
		if(pObject1)  \
		{  \
            xmlChar *szText = xmlNodeGetContent(ELEM);  \
            if (szText)  \
            {  \
                wchar_t* x = NULL;  \
                int len;  \
                if (this->xmlChar2wcs(szText, &x, len))  \
                {  \
                    pObject1->addParsedItems(x, len);  \
                }  \
                delete[] x;  \
                xmlFree(szText); \
            }  \
		}  \
	}  \
	catch(...){}

#define GET_DOUBLE_VALUE(ELEM, OBJ)  \
	try  \
	{  \
        xmlChar *szText = xmlNodeGetContent(ELEM);  \
        if (szText)  \
        {  \
            double temp = strtod((const char*)szText, NULL);  \
            OBJ->setValue(temp);  \
            xmlFree(szText); \
        } \
	}  \
	catch(...){}

namespace LX
{

    class Cargador
    {
    	private:
    		LX::Document* _doc;
    		LX::IFactory* factory;
    	public:
    		Cargador(LX::Document* doc)
    		{
    			_doc = doc;
    			factory = _doc->getFactory();
    		}
    	public:

            xmlNodePtr GetFirstElementByTag(xmlNodePtr node, const char* tag)
            {
                xmlNodePtr curNode = node->xmlChildrenNode;
                while (curNode != NULL)
                {
                    if (0 == xmlStrcmp(curNode->name, BAD_CAST(tag)))
                    {
                        return curNode;
                    }
                    curNode = curNode->next;
                }
                
                return NULL;
            }
        
            bool xmlChar2wcs(xmlChar* xmlString, wchar_t** wstr, int& len)
            {
                if (xmlString == NULL)
                    return false;
                
                int charLength = xmlStrlen(xmlString);
                if (charLength == 0)
                    return false;
                
                char *origLocale = setlocale(LC_CTYPE, NULL);
                
                size_t wcharLength = mbtowc(NULL, (const char*) xmlString, charLength); //excludes null terminator
                if (wcharLength != (size_t)(-1))
                {
                    wchar_t* temp = new wchar_t[wcharLength + 1];
                    temp[wcharLength] = L'\0';
                    mbtowc(temp, (const char*) xmlString, charLength);
                    
                    *wstr = temp;
                    len = wcharLength;
                }
                
                setlocale(LC_CTYPE, origLocale);

                return wcharLength != (size_t)(-1);
            }

// START HAND EDITS ***********************************************************************
            Units* LoadUnits(xmlNodePtr elem)
            {
            	Units* pObject = factory->createUnits();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            
            	//recursively get sub element value.
            	//GET_ATTRIBUTE(elem, pObject, SelectedUnits, ObjectImpl, SelectedUnits);
            
            	//get single node.
            	//GET_Sub_Single_Element(elem, pObject, SelectedUnits  );
            
				try
				{
                    xmlNodePtr metric = GetFirstElementByTag(elem, "Metric");
					if (metric)
					{
                        pObject->setSelectedUnits(LoadMetric(metric));
					}
                    
                    xmlNodePtr imperial = GetFirstElementByTag(elem, "Imperial");
                    if (imperial)
                    {
                        pObject->setSelectedUnits(LoadImperial(imperial));
                    }
				}catch(...){}
            
            	return pObject;
            }

            Parcels* LoadParcels(xmlNodePtr elem)
            {
            	Parcels* pObject = factory->createParcels();
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, desc,  StringObjectImpl, Desc  );
            	GET_ATTRIBUTE(elem, pObject, name,  StringObjectImpl, Name  );
            	GET_ATTRIBUTE(elem, pObject, state, EnumStateTypeImpl, State );
            
				try
				{
                    for (xmlNodePtr cur_node = elem->xmlChildrenNode; cur_node; cur_node = cur_node->next)
                    {
                        if (cur_node->type != XML_ELEMENT_NODE)
                        {
                            continue;
                        }
                        
                        if (0 == xmlStrcmp(cur_node->name, BAD_CAST("Parcel")))
                        {
                            pObject->Parcel().addItem(LoadParcel(cur_node));
                        }
                    }
				}catch(...){}

            	GET_Sub_Element(elem, pObject, Feature );
            
            	return pObject;
            }

            Equipment* LoadEquipment(xmlNodePtr elem)
            {
            	Equipment* pObject = factory->createEquipment();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            
            	//recursively get sub element value.
            
            	//get single node.
            	//GET_Sub_Single_Element(elem, pObject, EquipmentDetails  );

				try
				{
                    xmlNodePtr instrumentDetails = this->GetFirstElementByTag(elem, "InstrumentDetails");
                    if (instrumentDetails)
                    {
                        pObject->setEquipmentDetails(LoadInstrumentDetails(instrumentDetails));
                    }
                    
                    xmlNodePtr laserDetails = this->GetFirstElementByTag(elem, "LaserDetails");
                    if (laserDetails)
                    {
                        pObject->setEquipmentDetails(LoadLaserDetails(laserDetails));
                    }
                    
                    xmlNodePtr GPSReceiverDetails = this->GetFirstElementByTag(elem, "GPSReceiverDetails");
                    if (GPSReceiverDetails)
                    {
                        pObject->setEquipmentDetails(LoadGPSReceiverDetails(GPSReceiverDetails));
                    }

                    xmlNodePtr GPSAntennaDetails = this->GetFirstElementByTag(elem, "GPSAntennaDetails");
                    if (GPSAntennaDetails)
                    {
                        pObject->setEquipmentDetails(LoadGPSAntennaDetails(GPSAntennaDetails));
                    }
                    
                    xmlNodePtr fieldNoteDetails = this->GetFirstElementByTag(elem, "FieldNote");
                    if (fieldNoteDetails)
                    {
                        pObject->setEquipmentDetails(LoadFieldNote(fieldNoteDetails));
                    }
                    
                    xmlNodePtr featureDetails = this->GetFirstElementByTag(elem, "Feature");
                    if (featureDetails)
                    {
                        pObject->setEquipmentDetails(LoadFeature(featureDetails));
                    }
				}catch(...){}
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
        
            CoordGeom* LoadCoordGeom(xmlNodePtr elem)
            {
            	CoordGeom* pObject = factory->createCoordGeom();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, desc,  StringObjectImpl, Desc  );
            	GET_ATTRIBUTE(elem, pObject, name,  StringObjectImpl, Name  );
            	GET_ATTRIBUTE(elem, pObject, state, EnumStateTypeImpl, State );
            	GET_ATTRIBUTE(elem, pObject, oID,   StringObjectImpl, OID   );
            
            	//recursively get sub element value.
            	//GET_Sub_Element(elem, pObject, GeomList  );
            
				try
				{
                    for (xmlNodePtr cur_node = elem->xmlChildrenNode; cur_node; cur_node = cur_node->next)
                    {
                        if (cur_node->type != XML_ELEMENT_NODE)
                        {
                            continue;
                        }
                        
                        if (0 == xmlStrcmp(cur_node->name, BAD_CAST("Line")))
                        {
                            pObject->GeomList().addItem(LoadLine(cur_node));
                        }
                        
                        if (0 == xmlStrcmp(cur_node->name, BAD_CAST("IrregularLine")))
                        {
                            pObject->GeomList().addItem(LoadIrregularLine(cur_node));
                        }
                        
                        if (0 == xmlStrcmp(cur_node->name, BAD_CAST("Curve")))
                        {
                            pObject->GeomList().addItem(LoadCurve(cur_node));
                        }
                        
                        if (0 == xmlStrcmp(cur_node->name, BAD_CAST("Spiral")))
                        {
                            pObject->GeomList().addItem(LoadSpiral(cur_node));
                        }
                        
                        if (0 == xmlStrcmp(cur_node->name, BAD_CAST("Chain")))
                        {
                            pObject->GeomList().addItem(LoadChain(cur_node));
                        }
                        
                        if (0 == xmlStrcmp(cur_node->name, BAD_CAST("Feature")))
                        {
                            pObject->GeomList().addItem(LoadFeature(cur_node));
                        }
                    }
				}catch(...){}
            
            	return pObject;
            }
        
            ProfAlign* LoadProfAlign(xmlNodePtr elem)
            {
            	ProfAlign* pObject = factory->createProfAlign();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, name,             StringObjectImpl, Name             );
            	GET_ATTRIBUTE(elem, pObject, desc,             StringObjectImpl, Desc             );
            	GET_ATTRIBUTE(elem, pObject, state,            EnumStateTypeImpl, State           );
            
            	//recursively get sub element value.
            	//GET_Sub_Element(elem, pObject, VertGeomList  );
            
				try
				{
                    for (xmlNodePtr cur_node = elem->xmlChildrenNode; cur_node; cur_node = cur_node->next)
                    {
                        if (cur_node->type != XML_ELEMENT_NODE)
                        {
                            continue;
                        }
                        
                        if (0 == xmlStrcmp(cur_node->name, BAD_CAST("PVI")))
                        {
                            pObject->VertGeomList().addItem(LoadPVI(cur_node));
                        }
                        
                        if (0 == xmlStrcmp(cur_node->name, BAD_CAST("ParaCurve")))
                        {
                            pObject->VertGeomList().addItem(LoadParaCurve(cur_node));
                        }
                        
                        if (0 == xmlStrcmp(cur_node->name, BAD_CAST("UnsymParaCurve")))
                        {
                            pObject->VertGeomList().addItem(LoadUnsymParaCurve(cur_node));
                        }
            
                        if (0 == xmlStrcmp(cur_node->name, BAD_CAST("CircCurve")))
                        {
                            pObject->VertGeomList().addItem(LoadCircCurve(cur_node));
                        }
            
                        if (0 == xmlStrcmp(cur_node->name, BAD_CAST("Feature")))
                        {
                            pObject->VertGeomList().addItem(LoadFeature(cur_node));
                        }
					}
				}catch(...){}
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            Breakline* LoadBreakline(xmlNodePtr elem)
            {
            	Breakline* pObject = factory->createBreakline();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, brkType,  EnumBreakLineTypeImpl, BrkType  );
            	GET_ATTRIBUTE(elem, pObject, desc,     StringObjectImpl, Desc     );
            	GET_ATTRIBUTE(elem, pObject, name,     StringObjectImpl, Name     );
            	GET_ATTRIBUTE(elem, pObject, state,    EnumStateTypeImpl, State    );
            
            	//recursively get sub element value.
            	GET_Sub_Element(elem, pObject, Feature  );
            
            	//get single node.
            	//GET_Sub_Single_Element(elem, pObject, PntList  );

				try
				{
                    xmlNodePtr pntList2D = this->GetFirstElementByTag(elem, "PntList2D");
                    if (pntList2D)
                    {
                        pObject->setPntList(LoadPntList2D(pntList2D));
                    }
 					
                    xmlNodePtr pntList3D = this->GetFirstElementByTag(elem, "PntList3D");
                    if (pntList3D)
                    {
                        pObject->setPntList(LoadPntList3D(pntList3D));
                    }

				}catch(...){}

            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }

            Watershed* LoadWatershed(xmlNodePtr elem)
            {
            	Watershed* pObject = factory->createWatershed();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, name,  StringObjectImpl, Name  );
            	GET_ATTRIBUTE(elem, pObject, area,  DoubleObjectImpl, Area  );
            	GET_ATTRIBUTE(elem, pObject, desc,  StringObjectImpl, Desc  );
            
            	//recursively get sub element value.
            	GET_Sub_Element(elem, pObject, Outlet  );
            	GET_Sub_Element(elem, pObject, Feature );
            
            	//get single node.
            	//GET_Sub_Single_Element(elem, pObject, PntList  );

				try
				{
                    xmlNodePtr pntList2D = this->GetFirstElementByTag(elem, "PntList2D");
                    if (pntList2D)
                    {
                        pObject->setPntList(LoadPntList2D(pntList2D));
                    }
                    
                    xmlNodePtr pntList3D = this->GetFirstElementByTag(elem, "PntList3D");
                    if (pntList3D)
                    {
                        pObject->setPntList(LoadPntList3D(pntList3D));
                    }

				}catch(...){}

            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }

            AlignPIs* LoadAlignPIs(xmlNodePtr elem)
            {
                AlignPIs* pObject = factory->createAlignPIs();
                
                GET_Sub_Element(elem, pObject, AlignPI);

                return pObject;
            }

            AlignPI* LoadAlignPI(xmlNodePtr elem)
            {
            	AlignPI* pObject = factory->createAlignPI();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            
            	//recursively get sub element value.
            	//GET_Sub_Element(elem, pObject, PIList  );

				try
				{
                    for (xmlNodePtr cur_node = elem->xmlChildrenNode; cur_node; cur_node = cur_node->next)
                    {
                        if (cur_node->type != XML_ELEMENT_NODE)
                        {
                            continue;
                        }
                        
                        if (0 == xmlStrcmp(cur_node->name, BAD_CAST("Station")))
                        {
                            pObject->PIList().addItem(LoadStation(cur_node));
                        }
                        
                        if (0 == xmlStrcmp(cur_node->name, BAD_CAST("PI")))
                        {
                            pObject->PIList().addItem(LoadPI(cur_node));
                        }

                        if (0 == xmlStrcmp(cur_node->name, BAD_CAST("InSpiral")))
                        {
                            pObject->PIList().addItem(LoadInSpiral(cur_node));
                        }

                        if (0 == xmlStrcmp(cur_node->name, BAD_CAST("Curve1")))
                        {
                            pObject->PIList().addItem(LoadCurve1(cur_node));
                        }

                        if (0 == xmlStrcmp(cur_node->name, BAD_CAST("ConnSpiral")))
                        {
                            pObject->PIList().addItem(LoadConnSpiral(cur_node));
                        }

                        if (0 == xmlStrcmp(cur_node->name, BAD_CAST("Curve2")))
                        {
                            pObject->PIList().addItem(LoadCurve2(cur_node));
                        }

                        if (0 == xmlStrcmp(cur_node->name, BAD_CAST("OutSpiral")))
                        {
                            pObject->PIList().addItem(LoadOutSpiral(cur_node));
                        }
					}
				}catch(...){}

            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }

            Station* LoadStation(xmlNodePtr elem)
            {
            	Station* pObject = factory->createStation();
            
            	GET_DOUBLE_VALUE(elem, pObject);
            
            	return pObject;
            }

// PipeNetworks
            Struct* LoadStruct(xmlNodePtr elem)
            {
            	Struct* pObject = factory->createStruct();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, name,     StringObjectImpl, Name     );
            	GET_ATTRIBUTE(elem, pObject, desc,     StringObjectImpl, Desc     );
            	GET_ATTRIBUTE(elem, pObject, elevRim,  DoubleObjectImpl, ElevRim  );
            	GET_ATTRIBUTE(elem, pObject, elevSump, DoubleObjectImpl, ElevSump );
            	GET_ATTRIBUTE(elem, pObject, oID,      StringObjectImpl, OID      );
            	GET_ATTRIBUTE(elem, pObject, state,    EnumStateTypeImpl, State    );
            
            	//recursively get sub element value.
            	GET_Sub_Element(elem, pObject, Invert  );
            	GET_Sub_Element(elem, pObject, Feature );
            
            	//get single node.
            	GET_Sub_Single_Element(elem, pObject, Center      );
            	//GET_Sub_Single_Element(elem, pObject, StructGeom  );

				try
				{
                    xmlNodePtr circStruct = this->GetFirstElementByTag(elem, "CircStruct");
                    if (circStruct)
                    {
                        pObject->setStructGeom(LoadCircStruct(circStruct));
                    }
                    
                    xmlNodePtr rectStruct = this->GetFirstElementByTag(elem, "RectStruct");
                    if (rectStruct)
                    {
                        pObject->setStructGeom(LoadRectStruct(rectStruct));
                    }

                    xmlNodePtr inletStruct = this->GetFirstElementByTag(elem, "InletStruct");
                    if (inletStruct)
                    {
                        pObject->setStructGeom(LoadInletStruct(inletStruct));
                    }

                    xmlNodePtr outletStruct = this->GetFirstElementByTag(elem, "OutletStruct");
                    if (outletStruct)
                    {
                        pObject->setStructGeom(LoadOutletStruct(outletStruct));
                    }

                    xmlNodePtr connection = this->GetFirstElementByTag(elem, "Connection");
                    if (connection)
                    {
                        pObject->setStructGeom(LoadConnection(connection));
                    }

				}catch(...){}

            	GET_Sub_Single_Element(elem, pObject, StructFlow  );
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
        
            Pipe* LoadPipe(xmlNodePtr elem)
            {
            	Pipe* pObject = factory->createPipe();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, name,      StringObjectImpl, Name      );
            	GET_ATTRIBUTE(elem, pObject, refEnd,    StringObjectImpl, RefEnd    );
            	GET_ATTRIBUTE(elem, pObject, refStart,  StringObjectImpl, RefStart  );
            	GET_ATTRIBUTE(elem, pObject, desc,      StringObjectImpl, Desc      );
            	GET_ATTRIBUTE(elem, pObject, length,    DoubleObjectImpl, Length    );
            	GET_ATTRIBUTE(elem, pObject, oID,       StringObjectImpl, OID       );
            	GET_ATTRIBUTE(elem, pObject, slope,     DoubleObjectImpl, Slope     );
            	GET_ATTRIBUTE(elem, pObject, state,     EnumStateTypeImpl, State     );
            
            	//recursively get sub element value.
            	GET_Sub_Element(elem, pObject, Feature  );
            
            	//get single node.
            	//GET_Sub_Single_Element(elem, pObject, PipeGeom  );

				try
				{
                    xmlNodePtr circPipe = this->GetFirstElementByTag(elem, "CircPipe");
                    if (circPipe)
                    {
                        pObject->setPipeGeom(LoadCircPipe(circPipe));
                    }
                    
                    xmlNodePtr eggPipe = this->GetFirstElementByTag(elem, "EggPipe");
                    if (eggPipe)
                    {
                        pObject->setPipeGeom(LoadEggPipe(eggPipe));
                    }

                    xmlNodePtr elliPipe = this->GetFirstElementByTag(elem, "ElliPipe");
                    if (elliPipe)
                    {
                        pObject->setPipeGeom(LoadElliPipe(elliPipe));
                    }

                    xmlNodePtr rectPipe = this->GetFirstElementByTag(elem, "RectPipe");
                    if (rectPipe)
                    {
                        pObject->setPipeGeom(LoadRectPipe(rectPipe));
                    }

                    xmlNodePtr channel = this->GetFirstElementByTag(elem, "Channel");
                    if (channel)
                    {
                        pObject->setPipeGeom(LoadChannel(channel));
                    }

				}catch(...){}


            	GET_Sub_Single_Element(elem, pObject, PipeFlow  );
            	GET_Sub_Single_Element(elem, pObject, Center    );
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }

// **** SUPERELEVATION Hand fixes
            FullSuperelev* LoadFullSuperelev(xmlNodePtr elem)
            {
            	FullSuperelev* pObject = factory->createFullSuperelev();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            
            	//recursively get sub element value.
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
				GET_DOUBLE_VALUE(elem, pObject);
            
            	return pObject;
            }

            StartofRunoutSta* LoadStartofRunoutSta(xmlNodePtr elem)
            {
            	StartofRunoutSta* pObject = factory->createStartofRunoutSta();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            
            	//recursively get sub element value.
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
				GET_DOUBLE_VALUE(elem, pObject);
            
            	return pObject;
            }

            FullSuperSta* LoadFullSuperSta(xmlNodePtr elem)
            {
            	FullSuperSta* pObject = factory->createFullSuperSta();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            
            	//recursively get sub element value.
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
				GET_DOUBLE_VALUE(elem, pObject);
            
            	return pObject;
            }

            RunoffSta* LoadRunoffSta(xmlNodePtr elem)
            {
            	RunoffSta* pObject = factory->createRunoffSta();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            
            	//recursively get sub element value.
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
				GET_DOUBLE_VALUE(elem, pObject);
            
            	return pObject;
            }
          
            EndofRunoutSta* LoadEndofRunoutSta(xmlNodePtr elem)
            {
            	EndofRunoutSta* pObject = factory->createEndofRunoutSta();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            
            	//recursively get sub element value.
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
				GET_DOUBLE_VALUE(elem, pObject);
            
            	return pObject;
            }
            
            BeginRunoffSta* LoadBeginRunoffSta(xmlNodePtr elem)
            {
            	BeginRunoffSta* pObject = factory->createBeginRunoffSta();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            
            	//recursively get sub element value.
            
           
            	//get text value and put it into Double, Integer collection.
				GET_DOUBLE_VALUE(elem, pObject);
            
            	return pObject;
            }

            BeginRunoutSta* LoadBeginRunoutSta(xmlNodePtr elem)
            {
            	BeginRunoutSta* pObject = factory->createBeginRunoutSta();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            
            	//recursively get sub element value.
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
				GET_DOUBLE_VALUE(elem, pObject);
            
            	return pObject;
            }

            AdverseSE* LoadAdverseSE(xmlNodePtr elem)
            {
            	AdverseSE* pObject = factory->createAdverseSE();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            
            	//recursively get sub element value.
            
            	//get single node.
            
               	//get text value and put it into Double, Integer collection.
               // GET_DOUBLE_VALUE(elem, pObject);

            	return pObject;
            }

            Boundary* LoadBoundary(xmlNodePtr elem)
            {
            	Boundary* pObject = factory->createBoundary();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, bndType,  EnumSurfBndTypeImpl, BndType  );
            	GET_ATTRIBUTE(elem, pObject, edgeTrim, BooleanObjectImpl, EdgeTrim );
            	GET_ATTRIBUTE(elem, pObject, area,     DoubleObjectImpl, Area     );
            	GET_ATTRIBUTE(elem, pObject, desc,     StringObjectImpl, Desc     );
            	GET_ATTRIBUTE(elem, pObject, name,     StringObjectImpl, Name     );
            	GET_ATTRIBUTE(elem, pObject, state,    EnumStateTypeImpl, State    );
            
            	//recursively get sub element value.
            	GET_Sub_Element(elem, pObject, Feature  );
            
            	//get single node.
            	//GET_Sub_Single_Element(elem, pObject, PntList  );
            
				try
				{
                    xmlNodePtr pntList2D = this->GetFirstElementByTag(elem, "PntList2D");
                    if (pntList2D)
                    {
                        pObject->setPntList(LoadPntList2D(pntList2D));
                    }
                    
                    xmlNodePtr pntList3D = this->GetFirstElementByTag(elem, "PntList3D");
                    if (pntList3D)
                    {
                        pObject->setPntList(LoadPntList3D(pntList3D));
                    }

				}catch(...){}
            
            	return pObject;
            }
            
            IrregularLine* LoadIrregularLine(xmlNodePtr elem)
            {
            	IrregularLine* pObject = factory->createIrregularLine();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, desc,      StringObjectImpl, Desc      );
            	GET_ATTRIBUTE(elem, pObject, dir,       DoubleObjectImpl, Dir       );
            	GET_ATTRIBUTE(elem, pObject, length,    DoubleObjectImpl, Length    );
            	GET_ATTRIBUTE(elem, pObject, name,      StringObjectImpl, Name      );
            	GET_ATTRIBUTE(elem, pObject, staStart,  DoubleObjectImpl, StaStart  );
            	GET_ATTRIBUTE(elem, pObject, state,     EnumStateTypeImpl, State     );
            	GET_ATTRIBUTE(elem, pObject, oID,       StringObjectImpl, OID       );
            	GET_ATTRIBUTE(elem, pObject, source,    StringObjectImpl, Source    );
            	GET_ATTRIBUTE(elem, pObject, note,      StringObjectImpl, Note      );
            
            	//recursively get sub element value.
            	GET_Sub_Element(elem, pObject, Feature  );
            
            	//get single node.
            	GET_Sub_Single_Element(elem, pObject, Start  );
            	GET_Sub_Single_Element(elem, pObject, End    );
            	//GET_Sub_Single_Element(elem, pObject, PntList);

				try
				{
                    xmlNodePtr pntList2D = this->GetFirstElementByTag(elem, "PntList2D");
                    if (pntList2D)
                    {
                        pObject->setPntList(LoadPntList2D(pntList2D));
                    }
                    
                    xmlNodePtr pntList3D = this->GetFirstElementByTag(elem, "PntList3D");
                    if (pntList3D)
                    {
                        pObject->setPntList(LoadPntList3D(pntList3D));
                    }

				}catch(...){}

            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }

// END HAND EDITS ***********************************************************************
            
            NoPassingZone* LoadNoPassingZone(xmlNodePtr elem)
            {
            	NoPassingZone* pObject = factory->createNoPassingZone();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, staStart,  DoubleObjectImpl, StaStart  );
            	GET_ATTRIBUTE(elem, pObject, staEnd,    DoubleObjectImpl, StaEnd    );
            	GET_ATTRIBUTE(elem, pObject, sideofRoad, EnumSideofRoadTypeImpl, SideofRoad);
            
            	//recursively get sub element value.
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            RectStruct* LoadRectStruct(xmlNodePtr elem)
            {
            	RectStruct* pObject = factory->createRectStruct();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, length,     DoubleObjectImpl, Length     );
            	GET_ATTRIBUTE(elem, pObject, lengthDir,  DoubleObjectImpl, LengthDir  );
            	GET_ATTRIBUTE(elem, pObject, width,      DoubleObjectImpl, Width      );
            	GET_ATTRIBUTE(elem, pObject, desc,       StringObjectImpl, Desc       );
            	GET_ATTRIBUTE(elem, pObject, inletCase,  StringObjectImpl, InletCase  );
            	GET_ATTRIBUTE(elem, pObject, lossCoeff,  DoubleObjectImpl, LossCoeff  );
            	GET_ATTRIBUTE(elem, pObject, material,   StringObjectImpl, Material   );
            	GET_ATTRIBUTE(elem, pObject, thickness,  DoubleObjectImpl, Thickness  );
            
            	//recursively get sub element value.
            	GET_Sub_Element(elem, pObject, Feature  );
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            Cant* LoadCant(xmlNodePtr elem)
            {
            	Cant* pObject = factory->createCant();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, name,                 StringObjectImpl, Name                 );
            	GET_ATTRIBUTE(elem, pObject, desc,                 StringObjectImpl, Desc                 );
            	GET_ATTRIBUTE(elem, pObject, state,                EnumStateTypeImpl, State                );
            	GET_ATTRIBUTE(elem, pObject, equilibriumConstant,  DoubleObjectImpl, EquilibriumConstant  );
            	GET_ATTRIBUTE(elem, pObject, appliedCantConstant,  DoubleObjectImpl, AppliedCantConstant  );
            	GET_ATTRIBUTE(elem, pObject, gauge,                DoubleObjectImpl, Gauge                );
            	GET_ATTRIBUTE(elem, pObject, rotationPoint,        StringObjectImpl, RotationPoint        );
            
            	//recursively get sub element value.
            	GET_Sub_Element(elem, pObject, CantStation  );
            	GET_Sub_Element(elem, pObject, SpeedStation );
            	GET_Sub_Element(elem, pObject, Feature      );
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            RoadSign* LoadRoadSign(xmlNodePtr elem)
            {
            	RoadSign* pObject = factory->createRoadSign();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, MUTCDCode,  StringObjectImpl, MUTCDCode  );
            	GET_ATTRIBUTE(elem, pObject, station,    DoubleObjectImpl, Station    );
            	GET_ATTRIBUTE(elem, pObject, offset,     DoubleObjectImpl, Offset     );
            	GET_ATTRIBUTE(elem, pObject, sideofRoad, EnumSideofRoadTypeImpl, SideofRoad );
            	GET_ATTRIBUTE(elem, pObject, type,       EnumRoadSignTypeImpl, Type       );
            	GET_ATTRIBUTE(elem, pObject, mountHeight, DoubleObjectImpl, MountHeight);
            	GET_ATTRIBUTE(elem, pObject, width,      DoubleObjectImpl, Width      );
            	GET_ATTRIBUTE(elem, pObject, height,     DoubleObjectImpl, Height     );
            
            	//recursively get sub element value.
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            CantStation* LoadCantStation(xmlNodePtr elem)
            {
            	CantStation* pObject = factory->createCantStation();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, station,                               DoubleObjectImpl, Station                               );
            	GET_ATTRIBUTE(elem, pObject, equilibriumCant,                       DoubleObjectImpl, EquilibriumCant                       );
            	GET_ATTRIBUTE(elem, pObject, appliedCant,                           DoubleObjectImpl, AppliedCant                           );
            	GET_ATTRIBUTE(elem, pObject, cantDeficiency,                        DoubleObjectImpl, CantDeficiency                        );
            	GET_ATTRIBUTE(elem, pObject, cantExcess,                            DoubleObjectImpl, CantExcess                            );
            	GET_ATTRIBUTE(elem, pObject, rateOfChangeOfAppliedCantOverTime,     DoubleObjectImpl, RateOfChangeOfAppliedCantOverTime     );
            	GET_ATTRIBUTE(elem, pObject, rateOfChangeOfAppliedCantOverLength,   DoubleObjectImpl, RateOfChangeOfAppliedCantOverLength   );
            	GET_ATTRIBUTE(elem, pObject, rateOfChangeOfCantDeficiencyOverTime,  DoubleObjectImpl, RateOfChangeOfCantDeficiencyOverTime  );
            	GET_ATTRIBUTE(elem, pObject, cantGradient,                          DoubleObjectImpl, CantGradient                          );
            	GET_ATTRIBUTE(elem, pObject, speed,                                 DoubleObjectImpl, Speed                                 );
            	GET_ATTRIBUTE(elem, pObject, transitionType,                        EnumSpiralTypeImpl, TransitionType                        );
            	GET_ATTRIBUTE(elem, pObject, curvature,                             EnumClockwiseImpl, Curvature                             );
            	GET_ATTRIBUTE(elem, pObject, adverse,                               BooleanObjectImpl, Adverse                               );
            
            	//recursively get sub element value.
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            TestObservation* LoadTestObservation(xmlNodePtr elem)
            {
            	TestObservation* pObject = factory->createTestObservation();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, setupID,     StringObjectImpl, SetupID     );
            	GET_ATTRIBUTE(elem, pObject, targetSetupID, StringObjectImpl, TargetSetupID);
            	GET_ATTRIBUTE(elem, pObject, setID,       StringObjectImpl, SetID       );
            	GET_ATTRIBUTE(elem, pObject, purpose,     EnumPurposeTypeImpl, Purpose     );
            	GET_ATTRIBUTE(elem, pObject, targetHeight, DoubleObjectImpl, TargetHeight);
            	GET_ATTRIBUTE(elem, pObject, horizAngle,  DoubleObjectImpl, HorizAngle  );
            	GET_ATTRIBUTE(elem, pObject, slopeDistance, DoubleObjectImpl, SlopeDistance);
            	GET_ATTRIBUTE(elem, pObject, zenithAngle, DoubleObjectImpl, ZenithAngle );
            	GET_ATTRIBUTE(elem, pObject, horizDistance, DoubleObjectImpl, HorizDistance);
            	GET_ATTRIBUTE(elem, pObject, vertDistance, DoubleObjectImpl, VertDistance);
            	GET_ATTRIBUTE(elem, pObject, azimuth,     DoubleObjectImpl, Azimuth     );
            	GET_ATTRIBUTE(elem, pObject, unused,      BooleanObjectImpl, Unused      );
            	GET_ATTRIBUTE(elem, pObject, directFace,  BooleanObjectImpl, DirectFace  );
            	GET_ATTRIBUTE(elem, pObject, coordGeomRefs, StringCollectionImpl, CoordGeomRefs);
            	GET_ATTRIBUTE(elem, pObject, timeStamp,   StringObjectImpl, TimeStamp   );
            	GET_ATTRIBUTE(elem, pObject, alignRef,    StringObjectImpl, AlignRef    );
            	GET_ATTRIBUTE(elem, pObject, alignStationName, StringObjectImpl, AlignStationName);
            	GET_ATTRIBUTE(elem, pObject, alignOffset, DoubleObjectImpl, AlignOffset );
            	GET_ATTRIBUTE(elem, pObject, upperStadia, DoubleObjectImpl, UpperStadia );
            	GET_ATTRIBUTE(elem, pObject, rod,         DoubleObjectImpl, Rod         );
            	GET_ATTRIBUTE(elem, pObject, lowerStadia, DoubleObjectImpl, LowerStadia );
            	GET_ATTRIBUTE(elem, pObject, circlePositionSet, DoubleObjectImpl, CirclePositionSet);
            	GET_ATTRIBUTE(elem, pObject, status,      EnumObservationStatusTypeImpl, Status      );
            	GET_ATTRIBUTE(elem, pObject, setup1RodA,  DoubleObjectImpl, Setup1RodA  );
            	GET_ATTRIBUTE(elem, pObject, setup1RodB,  DoubleObjectImpl, Setup1RodB  );
            	GET_ATTRIBUTE(elem, pObject, setup2RodA,  DoubleObjectImpl, Setup2RodA  );
            	GET_ATTRIBUTE(elem, pObject, setup2RodB,  DoubleObjectImpl, Setup2RodB  );
            
            	//recursively get sub element value.
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            Superelevation* LoadSuperelevation(xmlNodePtr elem)
            {
            	Superelevation* pObject = factory->createSuperelevation();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, staStart,  DoubleObjectImpl, StaStart  );
            	GET_ATTRIBUTE(elem, pObject, staEnd,    DoubleObjectImpl, StaEnd    );
            
            	//recursively get sub element value.
            	GET_Sub_Element(elem, pObject, BeginRunoutSta  );
            	GET_Sub_Element(elem, pObject, BeginRunoffSta  );
            	GET_Sub_Element(elem, pObject, FullSuperSta    );
            	GET_Sub_Element(elem, pObject, FullSuperelev   );
            	GET_Sub_Element(elem, pObject, RunoffSta       );
            	GET_Sub_Element(elem, pObject, StartofRunoutSta);
            	GET_Sub_Element(elem, pObject, EndofRunoutSta  );
            	GET_Sub_Element(elem, pObject, AdverseSE       );
            	GET_Sub_Element(elem, pObject, Feature         );
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            DocFileRef* LoadDocFileRef(xmlNodePtr elem)
            {
            	DocFileRef* pObject = factory->createDocFileRef();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, name,      StringObjectImpl, Name      );
            	GET_ATTRIBUTE(elem, pObject, location,  StringObjectImpl, Location  );
            	GET_ATTRIBUTE(elem, pObject, fileType,  StringObjectImpl, FileType  );
            	GET_ATTRIBUTE(elem, pObject, fileFormat, StringObjectImpl, FileFormat);
            
            	//recursively get sub element value.
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            RetWallPnt* LoadRetWallPnt(xmlNodePtr elem)
            {
            	RetWallPnt* pObject = factory->createRetWallPnt();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, name,    StringObjectImpl, Name    );
            	GET_ATTRIBUTE(elem, pObject, desc,    StringObjectImpl, Desc    );
            	GET_ATTRIBUTE(elem, pObject, code,    StringObjectImpl, Code    );
            	GET_ATTRIBUTE(elem, pObject, state,   EnumStateTypeImpl, State   );
            	GET_ATTRIBUTE(elem, pObject, pntRef,  StringObjectImpl, PntRef  );
            	GET_ATTRIBUTE(elem, pObject, featureRef, StringObjectImpl, FeatureRef);
            	GET_ATTRIBUTE(elem, pObject, pointGeometry, EnumPointGeometryTypeImpl, PointGeometry);
            	GET_ATTRIBUTE(elem, pObject, DTMAttribute, EnumDTMAttributeTypeImpl, DTMAttribute);
            	GET_ATTRIBUTE(elem, pObject, timeStamp, StringObjectImpl, TimeStamp);
            	GET_ATTRIBUTE(elem, pObject, role,    EnumSurveyRoleTypeImpl, Role    );
            	GET_ATTRIBUTE(elem, pObject, height,  DoubleObjectImpl, Height  );
            	GET_ATTRIBUTE(elem, pObject, offset,  DoubleObjectImpl, Offset  );
            
            	//recursively get sub element value.
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            	GET_TEXT_VALUE(elem, pObject, DoubleCollection);
            
            	return pObject;
            }
            
            InSpiral* LoadInSpiral(xmlNodePtr elem)
            {
            	InSpiral* pObject = factory->createInSpiral();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            
            	//recursively get sub element value.
            
            	//get single node.
            	GET_Sub_Single_Element(elem, pObject, Spiral  );
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            Annotation* LoadAnnotation(xmlNodePtr elem)
            {
            	Annotation* pObject = factory->createAnnotation();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, type,  StringObjectImpl, Type  );
            	GET_ATTRIBUTE(elem, pObject, name,  StringObjectImpl, Name  );
            	GET_ATTRIBUTE(elem, pObject, desc,  StringObjectImpl, Desc  );
            	GET_ATTRIBUTE(elem, pObject, pclRef, StringCollectionImpl, PclRef);
            
            	//recursively get sub element value.
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            Surfaces* LoadSurfaces(xmlNodePtr elem)
            {
            	Surfaces* pObject = factory->createSurfaces();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, desc,  StringObjectImpl, Desc  );
            	GET_ATTRIBUTE(elem, pObject, name,  StringObjectImpl, Name  );
            	GET_ATTRIBUTE(elem, pObject, state, EnumStateTypeImpl, State );
            
            	//recursively get sub element value.
            	GET_Sub_Element(elem, pObject, Surface      );
            	GET_Sub_Element(elem, pObject, SurfVolumes  );
            	GET_Sub_Element(elem, pObject, Feature      );
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            OffsetLane* LoadOffsetLane(xmlNodePtr elem)
            {
            	OffsetLane* pObject = factory->createOffsetLane();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, staStart,           DoubleObjectImpl, StaStart           );
            	GET_ATTRIBUTE(elem, pObject, staEnd,             DoubleObjectImpl, StaEnd             );
            	GET_ATTRIBUTE(elem, pObject, beginFullWidthSta,  DoubleObjectImpl, BeginFullWidthSta  );
            	GET_ATTRIBUTE(elem, pObject, endFullWidthSta,    DoubleObjectImpl, EndFullWidthSta    );
            	GET_ATTRIBUTE(elem, pObject, fullOffset,         DoubleObjectImpl, FullOffset         );
            	GET_ATTRIBUTE(elem, pObject, width,              DoubleObjectImpl, Width              );
            	GET_ATTRIBUTE(elem, pObject, sideofRoad,         EnumSideofRoadTypeImpl, SideofRoad         );
            
            	//recursively get sub element value.
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            Curve* LoadCurve(xmlNodePtr elem)
            {
            	Curve* pObject = factory->createCurve();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, rot,      EnumClockwiseImpl, Rot      );
            	GET_ATTRIBUTE(elem, pObject, chord,    DoubleObjectImpl, Chord    );
            	GET_ATTRIBUTE(elem, pObject, crvType,  EnumCurveTypeImpl, CrvType  );
            	GET_ATTRIBUTE(elem, pObject, delta,    DoubleObjectImpl, Delta    );
            	GET_ATTRIBUTE(elem, pObject, desc,     StringObjectImpl, Desc     );
            	GET_ATTRIBUTE(elem, pObject, dirEnd,   DoubleObjectImpl, DirEnd   );
            	GET_ATTRIBUTE(elem, pObject, dirStart, DoubleObjectImpl, DirStart );
            	GET_ATTRIBUTE(elem, pObject, external, DoubleObjectImpl, External );
            	GET_ATTRIBUTE(elem, pObject, length,   DoubleObjectImpl, Length   );
            	GET_ATTRIBUTE(elem, pObject, midOrd,   DoubleObjectImpl, MidOrd   );
            	GET_ATTRIBUTE(elem, pObject, name,     StringObjectImpl, Name     );
            	GET_ATTRIBUTE(elem, pObject, radius,   DoubleObjectImpl, Radius   );
            	GET_ATTRIBUTE(elem, pObject, staStart, DoubleObjectImpl, StaStart );
            	GET_ATTRIBUTE(elem, pObject, state,    EnumStateTypeImpl, State    );
            	GET_ATTRIBUTE(elem, pObject, tangent,  DoubleObjectImpl, Tangent  );
            	GET_ATTRIBUTE(elem, pObject, oID,      StringObjectImpl, OID      );
            	GET_ATTRIBUTE(elem, pObject, note,     StringObjectImpl, Note     );
            
            	//recursively get sub element value.
            	GET_Sub_Element(elem, pObject, Feature  );
            
            	//get single node.
            	GET_Sub_Single_Element(elem, pObject, Start  );
            	GET_Sub_Single_Element(elem, pObject, Center );
            	GET_Sub_Single_Element(elem, pObject, End    );
            	GET_Sub_Single_Element(elem, pObject, PI     );
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            UnsymParaCurve* LoadUnsymParaCurve(xmlNodePtr elem)
            {
            	UnsymParaCurve* pObject = factory->createUnsymParaCurve();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, lengthIn,  DoubleObjectImpl, LengthIn  );
            	GET_ATTRIBUTE(elem, pObject, lengthOut, DoubleObjectImpl, LengthOut );
            	GET_ATTRIBUTE(elem, pObject, desc,      StringObjectImpl, Desc      );
            
            	//recursively get sub element value.
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            	GET_TEXT_VALUE(elem, pObject, DoubleCollection);
            
            	return pObject;
            }
            
            GPSVector* LoadGPSVector(xmlNodePtr elem)
            {
            	GPSVector* pObject = factory->createGPSVector();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, dX,                   DoubleObjectImpl, DX                   );
            	GET_ATTRIBUTE(elem, pObject, dY,                   DoubleObjectImpl, DY                   );
            	GET_ATTRIBUTE(elem, pObject, dZ,                   DoubleObjectImpl, DZ                   );
            	GET_ATTRIBUTE(elem, pObject, setupID_A,            StringObjectImpl, SetupID_A            );
            	GET_ATTRIBUTE(elem, pObject, setupID_B,            StringObjectImpl, SetupID_B            );
            	GET_ATTRIBUTE(elem, pObject, startTime,            StringObjectImpl, StartTime            );
            	GET_ATTRIBUTE(elem, pObject, endTime,              StringObjectImpl, EndTime              );
            	GET_ATTRIBUTE(elem, pObject, horizontalPrecision,  DoubleObjectImpl, HorizontalPrecision  );
            	GET_ATTRIBUTE(elem, pObject, verticalPrecision,    DoubleObjectImpl, VerticalPrecision    );
            	GET_ATTRIBUTE(elem, pObject, purpose,              EnumPurposeTypeImpl, Purpose              );
            	GET_ATTRIBUTE(elem, pObject, setID,                StringObjectImpl, SetID                );
            	GET_ATTRIBUTE(elem, pObject, solutionDataLink,     StringObjectImpl, SolutionDataLink     );
            	GET_ATTRIBUTE(elem, pObject, coordGeomRefs,        StringCollectionImpl, CoordGeomRefs        );
            
            	//recursively get sub element value.
            	GET_Sub_Element(elem, pObject, FieldNote      );
            	GET_Sub_Element(elem, pObject, Feature        );
            
            	//get single node.
            	GET_Sub_Single_Element(elem, pObject, TargetPoint      );
            	GET_Sub_Single_Element(elem, pObject, GPSQCInfoLevel1  );
            	GET_Sub_Single_Element(elem, pObject, GPSQCInfoLevel2  );
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            Pnts* LoadPnts(xmlNodePtr elem)
            {
            	Pnts* pObject = factory->createPnts();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            
            	//recursively get sub element value.
            	GET_Sub_Element(elem, pObject, P  );
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            HazardRating* LoadHazardRating(xmlNodePtr elem)
            {
            	HazardRating* pObject = factory->createHazardRating();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, staStart,  DoubleObjectImpl, StaStart  );
            	GET_ATTRIBUTE(elem, pObject, staEnd,    DoubleObjectImpl, StaEnd    );
            	GET_ATTRIBUTE(elem, pObject, rating,    IntegerObjectImpl, Rating    );
            
            	//recursively get sub element value.
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            Project* LoadProject(xmlNodePtr elem)
            {
            	Project* pObject = factory->createProject();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, name,  StringObjectImpl, Name  );
            	GET_ATTRIBUTE(elem, pObject, desc,  StringObjectImpl, Desc  );
            	GET_ATTRIBUTE(elem, pObject, state, EnumStateTypeImpl, State );
            
            	//recursively get sub element value.
            	GET_Sub_Element(elem, pObject, Feature  );
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            Application* LoadApplication(xmlNodePtr elem)
            {
            	Application* pObject = factory->createApplication();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, name,             StringObjectImpl, Name             );
            	GET_ATTRIBUTE(elem, pObject, desc,             StringObjectImpl, Desc             );
            	GET_ATTRIBUTE(elem, pObject, manufacturer,     StringObjectImpl, Manufacturer     );
            	GET_ATTRIBUTE(elem, pObject, version,          StringObjectImpl, Version          );
            	GET_ATTRIBUTE(elem, pObject, manufacturerURL,  StringObjectImpl, ManufacturerURL  );
            	GET_ATTRIBUTE(elem, pObject, timeStamp,        StringObjectImpl, TimeStamp        );
            
            	//recursively get sub element value.
            	GET_Sub_Element(elem, pObject, Author  );
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
           
            HeadOfPower* LoadHeadOfPower(xmlNodePtr elem)
            {
            	HeadOfPower* pObject = factory->createHeadOfPower();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, name,  StringObjectImpl, Name  );
            
            	//recursively get sub element value.
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            CrashData* LoadCrashData(xmlNodePtr elem)
            {
            	CrashData* pObject = factory->createCrashData();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            
            	//recursively get sub element value.
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            MapPoint* LoadMapPoint(xmlNodePtr elem)
            {
            	MapPoint* pObject = factory->createMapPoint();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, name, StringObjectImpl, Name);
            	GET_ATTRIBUTE(elem, pObject, desc, StringObjectImpl, Desc);
            	GET_ATTRIBUTE(elem, pObject, code, StringObjectImpl, Code);
            	GET_ATTRIBUTE(elem, pObject, state, EnumStateTypeImpl, State);
            	GET_ATTRIBUTE(elem, pObject, pntRef, StringObjectImpl, PntRef);
            	GET_ATTRIBUTE(elem, pObject, featureRef, StringObjectImpl, FeatureRef);
            	GET_ATTRIBUTE(elem, pObject, pointGeometry, EnumPointGeometryTypeImpl, PointGeometry);
            	GET_ATTRIBUTE(elem, pObject, DTMAttribute, EnumDTMAttributeTypeImpl, DTMAttribute);
            	GET_ATTRIBUTE(elem, pObject, timeStamp, StringObjectImpl, TimeStamp);
            	GET_ATTRIBUTE(elem, pObject, role, EnumSurveyRoleTypeImpl, Role);
            	GET_ATTRIBUTE(elem, pObject, determinedTimeStamp, StringObjectImpl, DeterminedTimeStamp);
            	GET_ATTRIBUTE(elem, pObject, ellipsoidHeight, DoubleObjectImpl, EllipsoidHeight);
            	GET_ATTRIBUTE(elem, pObject, latitude, DoubleObjectImpl, Latitude);
            	GET_ATTRIBUTE(elem, pObject, longitude, DoubleObjectImpl, Longitude);
            	GET_ATTRIBUTE(elem, pObject, zone, StringObjectImpl, Zone);
            	GET_ATTRIBUTE(elem, pObject, northingStdError, DoubleObjectImpl, NorthingStdError);
            	GET_ATTRIBUTE(elem, pObject, eastingStdError, DoubleObjectImpl, EastingStdError);
            	GET_ATTRIBUTE(elem, pObject, elevationStdError, DoubleObjectImpl, ElevationStdError);
            
            	//recursively get sub element value.
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            	GET_TEXT_VALUE(elem, pObject, DoubleCollection);
            
            	return pObject;
            }
            
            Center* LoadCenter(xmlNodePtr elem)
            {
            	Center* pObject = factory->createCenter();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, name, StringObjectImpl, Name);
            	GET_ATTRIBUTE(elem, pObject, desc, StringObjectImpl, Desc);
            	GET_ATTRIBUTE(elem, pObject, code, StringObjectImpl, Code);
            	GET_ATTRIBUTE(elem, pObject, state, EnumStateTypeImpl, State);
            	GET_ATTRIBUTE(elem, pObject, pntRef, StringObjectImpl, PntRef);
            	GET_ATTRIBUTE(elem, pObject, featureRef, StringObjectImpl, FeatureRef);
            	GET_ATTRIBUTE(elem, pObject, pointGeometry, EnumPointGeometryTypeImpl, PointGeometry);
            	GET_ATTRIBUTE(elem, pObject, DTMAttribute, EnumDTMAttributeTypeImpl, DTMAttribute);
            	GET_ATTRIBUTE(elem, pObject, timeStamp, StringObjectImpl, TimeStamp);
            	GET_ATTRIBUTE(elem, pObject, role, EnumSurveyRoleTypeImpl, Role);
            	GET_ATTRIBUTE(elem, pObject, determinedTimeStamp, StringObjectImpl, DeterminedTimeStamp);
            	GET_ATTRIBUTE(elem, pObject, ellipsoidHeight, DoubleObjectImpl, EllipsoidHeight);
            	GET_ATTRIBUTE(elem, pObject, latitude, DoubleObjectImpl, Latitude);
            	GET_ATTRIBUTE(elem, pObject, longitude, DoubleObjectImpl, Longitude);
            	GET_ATTRIBUTE(elem, pObject, zone, StringObjectImpl, Zone);
            	GET_ATTRIBUTE(elem, pObject, northingStdError, DoubleObjectImpl, NorthingStdError);
            	GET_ATTRIBUTE(elem, pObject, eastingStdError, DoubleObjectImpl, EastingStdError);
            	GET_ATTRIBUTE(elem, pObject, elevationStdError, DoubleObjectImpl, ElevationStdError);
            
            	//recursively get sub element value.
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            	GET_TEXT_VALUE(elem, pObject, DoubleCollection);
            
            	return pObject;
            }
            
            
            LocationAddress* LoadLocationAddress(xmlNodePtr elem)
            {
            	LocationAddress* pObject = factory->createLocationAddress();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, addressType,        StringObjectImpl, AddressType        );
            	GET_ATTRIBUTE(elem, pObject, flatType,           StringObjectImpl, FlatType           );
            	GET_ATTRIBUTE(elem, pObject, flatNumber,         StringObjectImpl, FlatNumber         );
            	GET_ATTRIBUTE(elem, pObject, floorLevelType,     StringObjectImpl, FloorLevelType     );
            	GET_ATTRIBUTE(elem, pObject, floorLevelNumber,   StringObjectImpl, FloorLevelNumber   );
            	GET_ATTRIBUTE(elem, pObject, numberFirst,        IntegerObjectImpl, NumberFirst        );
            	GET_ATTRIBUTE(elem, pObject, numberSuffixFirst,  StringObjectImpl, NumberSuffixFirst  );
            	GET_ATTRIBUTE(elem, pObject, numberLast,         IntegerObjectImpl, NumberLast         );
            	GET_ATTRIBUTE(elem, pObject, numberSuffixLast,   StringObjectImpl, NumberSuffixLast   );
            
            	//recursively get sub element value.
            	GET_Sub_Element(elem, pObject, ComplexName         );
            	GET_Sub_Element(elem, pObject, RoadName            );
            	GET_Sub_Element(elem, pObject, AdministrativeArea  );
            	GET_Sub_Element(elem, pObject, AddressPoint        );
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            Intersections* LoadIntersections(xmlNodePtr elem)
            {
            	Intersections* pObject = factory->createIntersections();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            
            	//recursively get sub element value.
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            Pipes* LoadPipes(xmlNodePtr elem)
            {
            	Pipes* pObject = factory->createPipes();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            
            	//recursively get sub element value.
            	GET_Sub_Element(elem, pObject, Pipe     );
            	GET_Sub_Element(elem, pObject, Feature  );
            
            	//get single node.
            	GET_Sub_Single_Element(elem, pObject, Units  );
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            Spiral* LoadSpiral(xmlNodePtr elem)
            {
            	Spiral* pObject = factory->createSpiral();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, length,     DoubleObjectImpl, Length     );
            	GET_ATTRIBUTE(elem, pObject, radiusEnd,  DoubleObjectImpl, RadiusEnd  );
            	GET_ATTRIBUTE(elem, pObject, radiusStart, DoubleObjectImpl, RadiusStart);
            	GET_ATTRIBUTE(elem, pObject, rot,        EnumClockwiseImpl, Rot        );
            	GET_ATTRIBUTE(elem, pObject, spiType,    EnumSpiralTypeImpl, SpiType    );
            	GET_ATTRIBUTE(elem, pObject, chord,      DoubleObjectImpl, Chord      );
            	GET_ATTRIBUTE(elem, pObject, constant,   DoubleObjectImpl, Constant   );
            	GET_ATTRIBUTE(elem, pObject, desc,       StringObjectImpl, Desc       );
            	GET_ATTRIBUTE(elem, pObject, dirEnd,     DoubleObjectImpl, DirEnd     );
            	GET_ATTRIBUTE(elem, pObject, dirStart,   DoubleObjectImpl, DirStart   );
            	GET_ATTRIBUTE(elem, pObject, name,       StringObjectImpl, Name       );
            	GET_ATTRIBUTE(elem, pObject, theta,      DoubleObjectImpl, Theta      );
            	GET_ATTRIBUTE(elem, pObject, totalY,     DoubleObjectImpl, TotalY     );
            	GET_ATTRIBUTE(elem, pObject, totalX,     DoubleObjectImpl, TotalX     );
            	GET_ATTRIBUTE(elem, pObject, staStart,   DoubleObjectImpl, StaStart   );
            	GET_ATTRIBUTE(elem, pObject, state,      EnumStateTypeImpl, State      );
            	GET_ATTRIBUTE(elem, pObject, tanLong,    DoubleObjectImpl, TanLong    );
            	GET_ATTRIBUTE(elem, pObject, tanShort,   DoubleObjectImpl, TanShort   );
            	GET_ATTRIBUTE(elem, pObject, oID,        StringObjectImpl, OID        );
            
            	//recursively get sub element value.
            	GET_Sub_Element(elem, pObject, Feature  );
            
            	//get single node.
            	GET_Sub_Single_Element(elem, pObject, Start  );
            	GET_Sub_Single_Element(elem, pObject, PI     );
            	GET_Sub_Single_Element(elem, pObject, End    );
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            RetWall* LoadRetWall(xmlNodePtr elem)
            {
            	RetWall* pObject = factory->createRetWall();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, desc,  StringObjectImpl, Desc  );
            	GET_ATTRIBUTE(elem, pObject, name,  StringObjectImpl, Name  );
            	GET_ATTRIBUTE(elem, pObject, state, EnumStateTypeImpl, State );
            
            	//recursively get sub element value.
            	GET_Sub_Element(elem, pObject, RetWallPnt  );
            	GET_Sub_Element(elem, pObject, Feature     );
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            OffsetVals* LoadOffsetVals(xmlNodePtr elem)
            {
            	OffsetVals* pObject = factory->createOffsetVals();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, offsetInOut,      DoubleObjectImpl, OffsetInOut      );
            	GET_ATTRIBUTE(elem, pObject, offsetLeftRight,  DoubleObjectImpl, OffsetLeftRight  );
            	GET_ATTRIBUTE(elem, pObject, offsetUpDown,     DoubleObjectImpl, OffsetUpDown     );
            
            	//recursively get sub element value.
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            Outlet* LoadOutlet(xmlNodePtr elem)
            {
            	Outlet* pObject = factory->createOutlet();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, name,   StringObjectImpl, Name   );
            	GET_ATTRIBUTE(elem, pObject, desc,   StringObjectImpl, Desc   );
            	GET_ATTRIBUTE(elem, pObject, code,   StringObjectImpl, Code   );
            	GET_ATTRIBUTE(elem, pObject, state,  EnumStateTypeImpl, State  );
            	GET_ATTRIBUTE(elem, pObject, pntRef, StringObjectImpl, PntRef );
            	GET_ATTRIBUTE(elem, pObject, featureRef, StringObjectImpl, FeatureRef);
            	GET_ATTRIBUTE(elem, pObject, pointGeometry, EnumPointGeometryTypeImpl, PointGeometry);
            	GET_ATTRIBUTE(elem, pObject, DTMAttribute, EnumDTMAttributeTypeImpl, DTMAttribute);
            	GET_ATTRIBUTE(elem, pObject, timeStamp, StringObjectImpl, TimeStamp);
            	GET_ATTRIBUTE(elem, pObject, role,   EnumSurveyRoleTypeImpl, Role   );
            	GET_ATTRIBUTE(elem, pObject, refWS,  StringObjectImpl, RefWS  );
            
            	//recursively get sub element value.
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            	GET_TEXT_VALUE(elem, pObject, DoubleCollection);
            
            	return pObject;
            }
            
            
            ElliPipe* LoadElliPipe(xmlNodePtr elem)
            {
            	ElliPipe* pObject = factory->createElliPipe();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, height,         DoubleObjectImpl, Height         );
            	GET_ATTRIBUTE(elem, pObject, span,           DoubleObjectImpl, Span           );
            	GET_ATTRIBUTE(elem, pObject, desc,           StringObjectImpl, Desc           );
            	GET_ATTRIBUTE(elem, pObject, hazenWilliams,  DoubleObjectImpl, HazenWilliams  );
            	GET_ATTRIBUTE(elem, pObject, mannings,       DoubleObjectImpl, Mannings       );
            	GET_ATTRIBUTE(elem, pObject, material,       StringObjectImpl, Material       );
            	GET_ATTRIBUTE(elem, pObject, thickness,      DoubleObjectImpl, Thickness      );
            
            	//recursively get sub element value.
            	GET_Sub_Element(elem, pObject, Feature  );
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            BridgeElement* LoadBridgeElement(xmlNodePtr elem)
            {
            	BridgeElement* pObject = factory->createBridgeElement();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, staStart,     DoubleObjectImpl, StaStart     );
            	GET_ATTRIBUTE(elem, pObject, staEnd,       DoubleObjectImpl, StaEnd       );
            	GET_ATTRIBUTE(elem, pObject, width,        DoubleObjectImpl, Width        );
            	GET_ATTRIBUTE(elem, pObject, projectType,  EnumBridgeProjectTypeImpl, ProjectType  );
            
            	//recursively get sub element value.
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            VolumeGeom* LoadVolumeGeom(xmlNodePtr elem)
            {
            	VolumeGeom* pObject = factory->createVolumeGeom();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, desc,  StringObjectImpl, Desc  );
            	GET_ATTRIBUTE(elem, pObject, name,  StringObjectImpl, Name  );
            	GET_ATTRIBUTE(elem, pObject, state, EnumStateTypeImpl, State );
            	GET_ATTRIBUTE(elem, pObject, oID,   StringObjectImpl, OID   );
            
            	//recursively get sub element value.
            	GET_Sub_Element(elem, pObject, CoordGeom  );
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            PntList3D* LoadPntList3D(xmlNodePtr elem)
            {
            	PntList3D* pObject = factory->createPntList3D();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            
            	//recursively get sub element value.
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            	GET_TEXT_VALUE(elem, pObject, DoubleCollection);
            
            	return pObject;
            }
            
            
            RedHorizontalPosition* LoadRedHorizontalPosition(xmlNodePtr elem)
            {
            	RedHorizontalPosition* pObject = factory->createRedHorizontalPosition();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, desc,                  StringObjectImpl, Desc                  );
            	GET_ATTRIBUTE(elem, pObject, name,                  StringObjectImpl, Name                  );
            	GET_ATTRIBUTE(elem, pObject, state,                 StringObjectImpl, State                 );
            	GET_ATTRIBUTE(elem, pObject, oID,                   StringObjectImpl, OID                   );
            	GET_ATTRIBUTE(elem, pObject, purpose,               EnumPurposeTypeImpl, Purpose               );
            	GET_ATTRIBUTE(elem, pObject, setupID,               StringObjectImpl, SetupID               );
            	GET_ATTRIBUTE(elem, pObject, date,                  StringObjectImpl, Date                  );
            	GET_ATTRIBUTE(elem, pObject, equipmentUsed,         StringObjectImpl, EquipmentUsed         );
            	GET_ATTRIBUTE(elem, pObject, horizontalDatum,       StringObjectImpl, HorizontalDatum       );
            	GET_ATTRIBUTE(elem, pObject, horizontalAdjustment,  StringObjectImpl, HorizontalAdjustment  );
            	GET_ATTRIBUTE(elem, pObject, latitude,              StringObjectImpl, Latitude              );
            	GET_ATTRIBUTE(elem, pObject, longitude,             StringObjectImpl, Longitude             );
            	GET_ATTRIBUTE(elem, pObject, horizontalFix,         StringObjectImpl, HorizontalFix         );
            	GET_ATTRIBUTE(elem, pObject, currencyDate,          StringObjectImpl, CurrencyDate          );
            	GET_ATTRIBUTE(elem, pObject, localUncertainity,     DoubleObjectImpl, LocalUncertainity     );
            	GET_ATTRIBUTE(elem, pObject, class,                 StringObjectImpl, Class                 );
            	GET_ATTRIBUTE(elem, pObject, order,                 StringObjectImpl, Order                 );
            	GET_ATTRIBUTE(elem, pObject, positionalUncertainity, DoubleObjectImpl, PositionalUncertainity);
            
            	//recursively get sub element value.
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            TrafficVolume* LoadTrafficVolume(xmlNodePtr elem)
            {
            	TrafficVolume* pObject = factory->createTrafficVolume();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            
            	//recursively get sub element value.
            	GET_Sub_Element(elem, pObject, Feature  );
            
            	//get single node.
            	GET_Sub_Single_Element(elem, pObject, DailyTrafficVolume  );
            	GET_Sub_Single_Element(elem, pObject, DesignHour          );
            	GET_Sub_Single_Element(elem, pObject, PeakHour            );
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            Start* LoadStart(xmlNodePtr elem)
            {
            	Start* pObject = factory->createStart();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, name, StringObjectImpl, Name);
            	GET_ATTRIBUTE(elem, pObject, desc, StringObjectImpl, Desc);
            	GET_ATTRIBUTE(elem, pObject, code, StringObjectImpl, Code);
            	GET_ATTRIBUTE(elem, pObject, state, EnumStateTypeImpl, State);
            	GET_ATTRIBUTE(elem, pObject, pntRef, StringObjectImpl, PntRef);
            	GET_ATTRIBUTE(elem, pObject, featureRef, StringObjectImpl, FeatureRef);
            	GET_ATTRIBUTE(elem, pObject, pointGeometry, EnumPointGeometryTypeImpl, PointGeometry);
            	GET_ATTRIBUTE(elem, pObject, DTMAttribute, EnumDTMAttributeTypeImpl, DTMAttribute);
            	GET_ATTRIBUTE(elem, pObject, timeStamp, StringObjectImpl, TimeStamp);
            	GET_ATTRIBUTE(elem, pObject, role, EnumSurveyRoleTypeImpl, Role);
            	GET_ATTRIBUTE(elem, pObject, determinedTimeStamp, StringObjectImpl, DeterminedTimeStamp);
            	GET_ATTRIBUTE(elem, pObject, ellipsoidHeight, DoubleObjectImpl, EllipsoidHeight);
            	GET_ATTRIBUTE(elem, pObject, latitude, DoubleObjectImpl, Latitude);
            	GET_ATTRIBUTE(elem, pObject, longitude, DoubleObjectImpl, Longitude);
            	GET_ATTRIBUTE(elem, pObject, zone, StringObjectImpl, Zone);
            	GET_ATTRIBUTE(elem, pObject, northingStdError, DoubleObjectImpl, NorthingStdError);
            	GET_ATTRIBUTE(elem, pObject, eastingStdError, DoubleObjectImpl, EastingStdError);
            	GET_ATTRIBUTE(elem, pObject, elevationStdError, DoubleObjectImpl, ElevationStdError);
            
            	//recursively get sub element value.
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            	GET_TEXT_VALUE(elem, pObject, DoubleCollection);
            
            	return pObject;
            }
            
            CircPipe* LoadCircPipe(xmlNodePtr elem)
            {
            	CircPipe* pObject = factory->createCircPipe();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, diameter,       DoubleObjectImpl, Diameter       );
            	GET_ATTRIBUTE(elem, pObject, desc,           StringObjectImpl, Desc           );
            	GET_ATTRIBUTE(elem, pObject, hazenWilliams,  DoubleObjectImpl, HazenWilliams  );
            	GET_ATTRIBUTE(elem, pObject, mannings,       DoubleObjectImpl, Mannings       );
            	GET_ATTRIBUTE(elem, pObject, material,       StringObjectImpl, Material       );
            	GET_ATTRIBUTE(elem, pObject, thickness,      DoubleObjectImpl, Thickness      );
            
            	//recursively get sub element value.
            	GET_Sub_Element(elem, pObject, Feature  );
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            InstrumentSetup* LoadInstrumentSetup(xmlNodePtr elem)
            {
            	InstrumentSetup* pObject = factory->createInstrumentSetup();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, id,                   StringObjectImpl, Id                   );
            	GET_ATTRIBUTE(elem, pObject, instrumentDetailsID,  StringObjectImpl, InstrumentDetailsID  );
            	GET_ATTRIBUTE(elem, pObject, stationName,          StringObjectImpl, StationName          );
            	GET_ATTRIBUTE(elem, pObject, instrumentHeight,     DoubleObjectImpl, InstrumentHeight     );
            	GET_ATTRIBUTE(elem, pObject, orientationAzimuth,   DoubleObjectImpl, OrientationAzimuth   );
            	GET_ATTRIBUTE(elem, pObject, circleAzimuth,        DoubleObjectImpl, CircleAzimuth        );
            	GET_ATTRIBUTE(elem, pObject, status,               EnumObservationStatusTypeImpl, Status               );
            
            	//recursively get sub element value.
            	GET_Sub_Element(elem, pObject, Backsight       );
            	GET_Sub_Element(elem, pObject, TargetSetup     );
            	GET_Sub_Element(elem, pObject, RawObservation  );
            	GET_Sub_Element(elem, pObject, ObservationGroup);
            	GET_Sub_Element(elem, pObject, ControlChecks   );
            	GET_Sub_Element(elem, pObject, FieldNote       );
            	GET_Sub_Element(elem, pObject, Feature         );
            
            	//get single node.
            	GET_Sub_Single_Element(elem, pObject, InstrumentPoint  );
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            SurfVolumes* LoadSurfVolumes(xmlNodePtr elem)
            {
            	SurfVolumes* pObject = factory->createSurfVolumes();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, desc,               StringObjectImpl, Desc               );
            	GET_ATTRIBUTE(elem, pObject, name,               StringObjectImpl, Name               );
            	GET_ATTRIBUTE(elem, pObject, surfVolCalcMethod,  EnumSurfVolCMethodTypeImpl, SurfVolCalcMethod  );
            
            	//recursively get sub element value.
            	GET_Sub_Element(elem, pObject, SurfVolume  );
            	GET_Sub_Element(elem, pObject, Feature     );
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            PlanFeatures* LoadPlanFeatures(xmlNodePtr elem)
            {
            	PlanFeatures* pObject = factory->createPlanFeatures();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, desc,  StringObjectImpl, Desc  );
            	GET_ATTRIBUTE(elem, pObject, name,  StringObjectImpl, Name  );
            	GET_ATTRIBUTE(elem, pObject, state, EnumStateTypeImpl, State );
            
            	//recursively get sub element value.
            	GET_Sub_Element(elem, pObject, PlanFeature  );
            	GET_Sub_Element(elem, pObject, Feature      );
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            Boundaries* LoadBoundaries(xmlNodePtr elem)
            {
            	Boundaries* pObject = factory->createBoundaries();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            
            	//recursively get sub element value.
            	GET_Sub_Element(elem, pObject, Boundary  );
            	GET_Sub_Element(elem, pObject, Feature   );
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            CrossSectPnt* LoadCrossSectPnt(xmlNodePtr elem)
            {
            	CrossSectPnt* pObject = factory->createCrossSectPnt();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, name,                   StringObjectImpl, Name                   );
            	GET_ATTRIBUTE(elem, pObject, desc,                   StringObjectImpl, Desc                   );
            	GET_ATTRIBUTE(elem, pObject, code,                   StringObjectImpl, Code                   );
            	GET_ATTRIBUTE(elem, pObject, state,                  EnumStateTypeImpl, State                  );
            	GET_ATTRIBUTE(elem, pObject, pntRef,                 StringObjectImpl, PntRef                 );
            	GET_ATTRIBUTE(elem, pObject, featureRef,             StringObjectImpl, FeatureRef             );
            	GET_ATTRIBUTE(elem, pObject, pointGeometry,          EnumPointGeometryTypeImpl, PointGeometry          );
            	GET_ATTRIBUTE(elem, pObject, DTMAttribute,           EnumDTMAttributeTypeImpl, DTMAttribute           );
            	GET_ATTRIBUTE(elem, pObject, timeStamp,              StringObjectImpl, TimeStamp              );
            	GET_ATTRIBUTE(elem, pObject, role,                   EnumSurveyRoleTypeImpl, Role                   );
            	GET_ATTRIBUTE(elem, pObject, determinedTimeStamp,    StringObjectImpl, DeterminedTimeStamp    );
            	GET_ATTRIBUTE(elem, pObject, ellipsoidHeight,        DoubleObjectImpl, EllipsoidHeight        );
            	GET_ATTRIBUTE(elem, pObject, latitude,               DoubleObjectImpl, Latitude               );
            	GET_ATTRIBUTE(elem, pObject, longitude,              DoubleObjectImpl, Longitude              );
            	GET_ATTRIBUTE(elem, pObject, zone,                   StringObjectImpl, Zone                   );
            	GET_ATTRIBUTE(elem, pObject, northingStdError,       DoubleObjectImpl, NorthingStdError       );
            	GET_ATTRIBUTE(elem, pObject, eastingStdError,        DoubleObjectImpl, EastingStdError        );
            	GET_ATTRIBUTE(elem, pObject, elevationStdError,      DoubleObjectImpl, ElevationStdError      );
            	GET_ATTRIBUTE(elem, pObject, dataFormat,             EnumDataFormatTypeImpl, DataFormat             );
            	GET_ATTRIBUTE(elem, pObject, alignRef,               StringObjectImpl, AlignRef               );
            	GET_ATTRIBUTE(elem, pObject, alignRefStation,        DoubleObjectImpl, AlignRefStation        );
            	GET_ATTRIBUTE(elem, pObject, planFeatureRef,         StringObjectImpl, PlanFeatureRef         );
            	GET_ATTRIBUTE(elem, pObject, planFeatureRefStation,  DoubleObjectImpl, PlanFeatureRefStation  );
            	GET_ATTRIBUTE(elem, pObject, parcelRef,              StringObjectImpl, ParcelRef              );
            	GET_ATTRIBUTE(elem, pObject, parcelRefStation,       DoubleObjectImpl, ParcelRefStation       );
            
            	//recursively get sub element value.
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            	GET_TEXT_VALUE(elem, pObject, DoubleCollection);
            
            	return pObject;
            }
            
            
            AmendmentItem* LoadAmendmentItem(xmlNodePtr elem)
            {
            	AmendmentItem* pObject = factory->createAmendmentItem();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, elementName,  StringObjectImpl, ElementName  );
            	GET_ATTRIBUTE(elem, pObject, oldName,      StringObjectImpl, OldName      );
            	GET_ATTRIBUTE(elem, pObject, newName,      StringObjectImpl, NewName      );
            
            	//recursively get sub element value.
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            Location* LoadLocation(xmlNodePtr elem)
            {
            	Location* pObject = factory->createLocation();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, name, StringObjectImpl, Name);
            	GET_ATTRIBUTE(elem, pObject, desc, StringObjectImpl, Desc);
            	GET_ATTRIBUTE(elem, pObject, code, StringObjectImpl, Code);
            	GET_ATTRIBUTE(elem, pObject, state, EnumStateTypeImpl, State);
            	GET_ATTRIBUTE(elem, pObject, pntRef, StringObjectImpl, PntRef);
            	GET_ATTRIBUTE(elem, pObject, featureRef, StringObjectImpl, FeatureRef);
            	GET_ATTRIBUTE(elem, pObject, pointGeometry, EnumPointGeometryTypeImpl, PointGeometry);
            	GET_ATTRIBUTE(elem, pObject, DTMAttribute, EnumDTMAttributeTypeImpl, DTMAttribute);
            	GET_ATTRIBUTE(elem, pObject, timeStamp, StringObjectImpl, TimeStamp);
            	GET_ATTRIBUTE(elem, pObject, role, EnumSurveyRoleTypeImpl, Role);
            	GET_ATTRIBUTE(elem, pObject, determinedTimeStamp, StringObjectImpl, DeterminedTimeStamp);
            	GET_ATTRIBUTE(elem, pObject, ellipsoidHeight, DoubleObjectImpl, EllipsoidHeight);
            	GET_ATTRIBUTE(elem, pObject, latitude, DoubleObjectImpl, Latitude);
            	GET_ATTRIBUTE(elem, pObject, longitude, DoubleObjectImpl, Longitude);
            	GET_ATTRIBUTE(elem, pObject, zone, StringObjectImpl, Zone);
            	GET_ATTRIBUTE(elem, pObject, northingStdError, DoubleObjectImpl, NorthingStdError);
            	GET_ATTRIBUTE(elem, pObject, eastingStdError, DoubleObjectImpl, EastingStdError);
            	GET_ATTRIBUTE(elem, pObject, elevationStdError, DoubleObjectImpl, ElevationStdError);
            
            	//recursively get sub element value.
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            	GET_TEXT_VALUE(elem, pObject, DoubleCollection);
            
            	return pObject;
            }
            
            TurnRestriction* LoadTurnRestriction(xmlNodePtr elem)
            {
            	TurnRestriction* pObject = factory->createTurnRestriction();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, station,  DoubleObjectImpl, Station  );
            	GET_ATTRIBUTE(elem, pObject, legNumber, IntegerObjectImpl, LegNumber);
            	GET_ATTRIBUTE(elem, pObject, type,     EnumTrafficTurnRestrictionImpl, Type     );
            
            	//recursively get sub element value.
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            AdministrativeArea* LoadAdministrativeArea(xmlNodePtr elem)
            {
            	AdministrativeArea* pObject = factory->createAdministrativeArea();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, adminAreaType,  StringObjectImpl, AdminAreaType  );
            	GET_ATTRIBUTE(elem, pObject, adminAreaName,  StringObjectImpl, AdminAreaName  );
            	GET_ATTRIBUTE(elem, pObject, adminAreaCode,  StringObjectImpl, AdminAreaCode  );
            	GET_ATTRIBUTE(elem, pObject, pclRef,         StringCollectionImpl, PclRef         );
            
            	//recursively get sub element value.
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            ClimbLane* LoadClimbLane(xmlNodePtr elem)
            {
            	ClimbLane* pObject = factory->createClimbLane();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, staStart,           DoubleObjectImpl, StaStart           );
            	GET_ATTRIBUTE(elem, pObject, staEnd,             DoubleObjectImpl, StaEnd             );
            	GET_ATTRIBUTE(elem, pObject, beginFullWidthSta,  DoubleObjectImpl, BeginFullWidthSta  );
            	GET_ATTRIBUTE(elem, pObject, endFullWidthSta,    DoubleObjectImpl, EndFullWidthSta    );
            	GET_ATTRIBUTE(elem, pObject, width,              DoubleObjectImpl, Width              );
            	GET_ATTRIBUTE(elem, pObject, sideofRoad,         EnumSideofRoadTypeImpl, SideofRoad         );
            
            	//recursively get sub element value.
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            ZoneCutFill* LoadZoneCutFill(xmlNodePtr elem)
            {
            	ZoneCutFill* pObject = factory->createZoneCutFill();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, staStart,  DoubleObjectImpl, StaStart  );
            	GET_ATTRIBUTE(elem, pObject, staEnd,    DoubleObjectImpl, StaEnd    );
            	GET_ATTRIBUTE(elem, pObject, cutSlope,  DoubleObjectImpl, CutSlope  );
            	GET_ATTRIBUTE(elem, pObject, fillSlope, DoubleObjectImpl, FillSlope );
            
            	//recursively get sub element value.
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            SpeedStation* LoadSpeedStation(xmlNodePtr elem)
            {
            	SpeedStation* pObject = factory->createSpeedStation();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, station,  DoubleObjectImpl, Station  );
            	GET_ATTRIBUTE(elem, pObject, speed,    DoubleObjectImpl, Speed    );
            
            	//recursively get sub element value.
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            DailyTrafficVolume* LoadDailyTrafficVolume(xmlNodePtr elem)
            {
            	DailyTrafficVolume* pObject = factory->createDailyTrafficVolume();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, staStart,  DoubleObjectImpl, StaStart  );
            	GET_ATTRIBUTE(elem, pObject, staEnd,    DoubleObjectImpl, StaEnd    );
            	GET_ATTRIBUTE(elem, pObject, ADT,       DoubleObjectImpl, ADT       );
            	GET_ATTRIBUTE(elem, pObject, year,      StringObjectImpl, Year      );
            	GET_ATTRIBUTE(elem, pObject, escFactor, DoubleObjectImpl, EscFactor );
            
            	//recursively get sub element value.
            	GET_Sub_Element(elem, pObject, Feature  );
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            GPSPosition* LoadGPSPosition(xmlNodePtr elem)
            {
            	GPSPosition* pObject = factory->createGPSPosition();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, setupID,      StringObjectImpl, SetupID      );
            	GET_ATTRIBUTE(elem, pObject, setID,        StringObjectImpl, SetID        );
            	GET_ATTRIBUTE(elem, pObject, wgsHeight,    DoubleObjectImpl, WgsHeight    );
            	GET_ATTRIBUTE(elem, pObject, wgsLatitude,  DoubleObjectImpl, WgsLatitude  );
            	GET_ATTRIBUTE(elem, pObject, wgsLongitude, DoubleObjectImpl, WgsLongitude );
            	GET_ATTRIBUTE(elem, pObject, purpose,      StringObjectImpl, Purpose      );
            	GET_ATTRIBUTE(elem, pObject, coordGeomRefs, StringCollectionImpl, CoordGeomRefs);
            	GET_ATTRIBUTE(elem, pObject, pntRef,       StringObjectImpl, PntRef       );
            
            	//recursively get sub element value.
            	GET_Sub_Element(elem, pObject, FieldNote      );
            	GET_Sub_Element(elem, pObject, Feature        );
            
            	//get single node.
            	GET_Sub_Single_Element(elem, pObject, TargetPoint      );
            	GET_Sub_Single_Element(elem, pObject, GPSQCInfoLevel1  );
            	GET_Sub_Single_Element(elem, pObject, GPSQCInfoLevel2  );
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            Profile* LoadProfile(xmlNodePtr elem)
            {
            	Profile* pObject = factory->createProfile();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, desc,      StringObjectImpl, Desc      );
            	GET_ATTRIBUTE(elem, pObject, name,      StringObjectImpl, Name      );
            	GET_ATTRIBUTE(elem, pObject, staStart,  DoubleObjectImpl, StaStart  );
            	GET_ATTRIBUTE(elem, pObject, state,     EnumStateTypeImpl, State     );
            
            	//recursively get sub element value.
            	GET_Sub_Element(elem, pObject, ProfSurf  );
            	GET_Sub_Element(elem, pObject, ProfAlign );
            	GET_Sub_Element(elem, pObject, Feature   );
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            PipeNetworks* LoadPipeNetworks(xmlNodePtr elem)
            {
            	PipeNetworks* pObject = factory->createPipeNetworks();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, desc,  StringObjectImpl, Desc  );
            	GET_ATTRIBUTE(elem, pObject, name,  StringObjectImpl, Name  );
            	GET_ATTRIBUTE(elem, pObject, state, EnumStateTypeImpl, State );
            
            	//recursively get sub element value.
            	GET_Sub_Element(elem, pObject, PipeNetwork  );
            	GET_Sub_Element(elem, pObject, Feature      );
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            RectPipe* LoadRectPipe(xmlNodePtr elem)
            {
            	RectPipe* pObject = factory->createRectPipe();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, height,         DoubleObjectImpl, Height         );
            	GET_ATTRIBUTE(elem, pObject, width,          DoubleObjectImpl, Width          );
            	GET_ATTRIBUTE(elem, pObject, desc,           StringObjectImpl, Desc           );
            	GET_ATTRIBUTE(elem, pObject, hazenWilliams,  DoubleObjectImpl, HazenWilliams  );
            	GET_ATTRIBUTE(elem, pObject, mannings,       DoubleObjectImpl, Mannings       );
            	GET_ATTRIBUTE(elem, pObject, material,       StringObjectImpl, Material       );
            	GET_ATTRIBUTE(elem, pObject, thickness,      DoubleObjectImpl, Thickness      );
            
            	//recursively get sub element value.
            	GET_Sub_Element(elem, pObject, Feature  );
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            ThruLane* LoadThruLane(xmlNodePtr elem)
            {
            	ThruLane* pObject = factory->createThruLane();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, staStart,  DoubleObjectImpl, StaStart  );
            	GET_ATTRIBUTE(elem, pObject, staEnd,    DoubleObjectImpl, StaEnd    );
            	GET_ATTRIBUTE(elem, pObject, width,     DoubleObjectImpl, Width     );
            	GET_ATTRIBUTE(elem, pObject, sideofRoad, EnumSideofRoadTypeImpl, SideofRoad);
            
            	//recursively get sub element value.
            	GET_Sub_Element(elem, pObject, Feature  );
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            ProfSurf* LoadProfSurf(xmlNodePtr elem)
            {
            	ProfSurf* pObject = factory->createProfSurf();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, name,  StringObjectImpl, Name  );
            	GET_ATTRIBUTE(elem, pObject, desc,  StringObjectImpl, Desc  );
            	GET_ATTRIBUTE(elem, pObject, state, EnumStateTypeImpl, State );
            
            	//recursively get sub element value.
            	GET_Sub_Element(elem, pObject, PntList2D  );
            	GET_Sub_Element(elem, pObject, Feature    );
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            Author* LoadAuthor(xmlNodePtr elem)
            {
            	Author* pObject = factory->createAuthor();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, createdBy,       StringObjectImpl, CreatedBy       );
            	GET_ATTRIBUTE(elem, pObject, createdByEmail,  StringObjectImpl, CreatedByEmail  );
            	GET_ATTRIBUTE(elem, pObject, company,         StringObjectImpl, Company         );
            	GET_ATTRIBUTE(elem, pObject, companyURL,      StringObjectImpl, CompanyURL      );
            	GET_ATTRIBUTE(elem, pObject, timeStamp,       StringObjectImpl, TimeStamp       );
            
            	//recursively get sub element value.
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            CrossSectSurf* LoadCrossSectSurf(xmlNodePtr elem)
            {
            	CrossSectSurf* pObject = factory->createCrossSectSurf();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, name,  StringObjectImpl, Name  );
            	GET_ATTRIBUTE(elem, pObject, desc,  StringObjectImpl, Desc  );
            	GET_ATTRIBUTE(elem, pObject, state, EnumStateTypeImpl, State );
            
            	//recursively get sub element value.
            	GET_Sub_Element(elem, pObject, Feature  );
            
            	//get single node.
            	GET_Sub_Single_Element(elem, pObject, PntList2D  );
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            
            Roadway* LoadRoadway(xmlNodePtr elem)
            {
            	Roadway* pObject = factory->createRoadway();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, name,         StringObjectImpl, Name         );
            	GET_ATTRIBUTE(elem, pObject, alignmentRefs, StringCollectionImpl, AlignmentRefs);
            	GET_ATTRIBUTE(elem, pObject, surfaceRefs,  StringCollectionImpl, SurfaceRefs  );
            	GET_ATTRIBUTE(elem, pObject, gradeModelRefs, StringCollectionImpl, GradeModelRefs);
            	GET_ATTRIBUTE(elem, pObject, staStart,     DoubleObjectImpl, StaStart     );
            	GET_ATTRIBUTE(elem, pObject, staEnd,       DoubleObjectImpl, StaEnd       );
            	GET_ATTRIBUTE(elem, pObject, desc,         StringObjectImpl, Desc         );
            	GET_ATTRIBUTE(elem, pObject, roadTerrain,  EnumRoadTerrainTypeImpl, RoadTerrain  );
            	GET_ATTRIBUTE(elem, pObject, state,        EnumStateTypeImpl, State        );
            
            	//recursively get sub element value.
            	GET_Sub_Element(elem, pObject, Classification         );
            	GET_Sub_Element(elem, pObject, Lanes                  );
            	GET_Sub_Element(elem, pObject, Roadside               );
            	GET_Sub_Element(elem, pObject, Speeds                 );
            	GET_Sub_Element(elem, pObject, NoPassingZone          );
            	GET_Sub_Element(elem, pObject, TrafficVolume          );
            	GET_Sub_Element(elem, pObject, CrashData              );
            	GET_Sub_Element(elem, pObject, DecisionSightDistance  );
            	GET_Sub_Element(elem, pObject, BridgeElement          );
            	GET_Sub_Element(elem, pObject, PlanFeature            );
            	GET_Sub_Element(elem, pObject, Feature                );
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            EggPipe* LoadEggPipe(xmlNodePtr elem)
            {
            	EggPipe* pObject = factory->createEggPipe();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, height,         DoubleObjectImpl, Height         );
            	GET_ATTRIBUTE(elem, pObject, span,           DoubleObjectImpl, Span           );
            	GET_ATTRIBUTE(elem, pObject, desc,           StringObjectImpl, Desc           );
            	GET_ATTRIBUTE(elem, pObject, hazenWilliams,  DoubleObjectImpl, HazenWilliams  );
            	GET_ATTRIBUTE(elem, pObject, mannings,       DoubleObjectImpl, Mannings       );
            	GET_ATTRIBUTE(elem, pObject, material,       StringObjectImpl, Material       );
            	GET_ATTRIBUTE(elem, pObject, thickness,      DoubleObjectImpl, Thickness      );
            
            	//recursively get sub element value.
            	GET_Sub_Element(elem, pObject, Feature  );
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            Structs* LoadStructs(xmlNodePtr elem)
            {
            	Structs* pObject = factory->createStructs();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            
            	//recursively get sub element value.
            	GET_Sub_Element(elem, pObject, Struct  );
            	GET_Sub_Element(elem, pObject, Feature );
            
            	//get single node.
            	GET_Sub_Single_Element(elem, pObject, Units  );
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            Intersection* LoadIntersection(xmlNodePtr elem)
            {
            	Intersection* pObject = factory->createIntersection();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, roadwayRef,              StringObjectImpl, RoadwayRef              );
            	GET_ATTRIBUTE(elem, pObject, roadwayPI,               DoubleObjectImpl, RoadwayPI               );
            	GET_ATTRIBUTE(elem, pObject, intersectingRoadwayRef,  StringObjectImpl, IntersectingRoadwayRef  );
            	GET_ATTRIBUTE(elem, pObject, intersectRoadwayPI,      DoubleObjectImpl, IntersectRoadwayPI      );
            	GET_ATTRIBUTE(elem, pObject, contructionType,         EnumIntersectionConstructionTypeImpl, ContructionType         );
            
            	//recursively get sub element value.
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            FieldNote* LoadFieldNote(xmlNodePtr elem)
            {
            	FieldNote* pObject = factory->createFieldNote();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            
            	//recursively get sub element value.
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            SurfVolume* LoadSurfVolume(xmlNodePtr elem)
            {
            	SurfVolume* pObject = factory->createSurfVolume();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, surfBase,     StringObjectImpl, SurfBase     );
            	GET_ATTRIBUTE(elem, pObject, surfCompare,  StringObjectImpl, SurfCompare  );
            	GET_ATTRIBUTE(elem, pObject, volCut,       DoubleObjectImpl, VolCut       );
            	GET_ATTRIBUTE(elem, pObject, volFill,      DoubleObjectImpl, VolFill      );
            	GET_ATTRIBUTE(elem, pObject, volTotal,     DoubleObjectImpl, VolTotal     );
            	GET_ATTRIBUTE(elem, pObject, desc,         StringObjectImpl, Desc         );
            	GET_ATTRIBUTE(elem, pObject, name,         StringObjectImpl, Name         );
            
            	//recursively get sub element value.
            	GET_Sub_Element(elem, pObject, Feature  );
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            GPSQCInfoLevel1* LoadGPSQCInfoLevel1(xmlNodePtr elem)
            {
            	GPSQCInfoLevel1* pObject = factory->createGPSQCInfoLevel1();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, GPSSolnType,  EnumGPSSolutionTypeEnumImpl, GPSSolnType  );
            	GET_ATTRIBUTE(elem, pObject, GPSSolnFreq,  EnumGPSSolutionFrequencyEnumImpl, GPSSolnFreq  );
            	GET_ATTRIBUTE(elem, pObject, nbrSatellites, IntegerObjectImpl, NbrSatellites);
            	GET_ATTRIBUTE(elem, pObject, RDOP,         DoubleObjectImpl, RDOP         );
            
            	//recursively get sub element value.
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            BikeFacilities* LoadBikeFacilities(xmlNodePtr elem)
            {
            	BikeFacilities* pObject = factory->createBikeFacilities();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, staStart,  DoubleObjectImpl, StaStart  );
            	GET_ATTRIBUTE(elem, pObject, staEnd,    DoubleObjectImpl, StaEnd    );
            	GET_ATTRIBUTE(elem, pObject, width,     DoubleObjectImpl, Width     );
            	GET_ATTRIBUTE(elem, pObject, sideofRoad, EnumSideofRoadTypeImpl, SideofRoad);
            
            	//recursively get sub element value.
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            CgPoint* LoadCgPoint(xmlNodePtr elem)
            {
            	CgPoint* pObject = factory->createCgPoint();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, name,                   StringObjectImpl, Name                   );
            	GET_ATTRIBUTE(elem, pObject, desc,                   StringObjectImpl, Desc                   );
            	GET_ATTRIBUTE(elem, pObject, code,                   StringObjectImpl, Code                   );
            	GET_ATTRIBUTE(elem, pObject, state,                  EnumStateTypeImpl, State                  );
            	GET_ATTRIBUTE(elem, pObject, pntRef,                 StringObjectImpl, PntRef                 );
            	GET_ATTRIBUTE(elem, pObject, featureRef,             StringObjectImpl, FeatureRef             );
            	GET_ATTRIBUTE(elem, pObject, pointGeometry,          EnumPointGeometryTypeImpl, PointGeometry          );
            	GET_ATTRIBUTE(elem, pObject, DTMAttribute,           EnumDTMAttributeTypeImpl, DTMAttribute           );
            	GET_ATTRIBUTE(elem, pObject, timeStamp,              StringObjectImpl, TimeStamp              );
            	GET_ATTRIBUTE(elem, pObject, role,                   EnumSurveyRoleTypeImpl, Role                   );
            	GET_ATTRIBUTE(elem, pObject, determinedTimeStamp,    StringObjectImpl, DeterminedTimeStamp    );
            	GET_ATTRIBUTE(elem, pObject, ellipsoidHeight,        DoubleObjectImpl, EllipsoidHeight        );
            	GET_ATTRIBUTE(elem, pObject, latitude,               DoubleObjectImpl, Latitude               );
            	GET_ATTRIBUTE(elem, pObject, longitude,              DoubleObjectImpl, Longitude              );
            	GET_ATTRIBUTE(elem, pObject, zone,                   StringObjectImpl, Zone                   );
            	GET_ATTRIBUTE(elem, pObject, northingStdError,       DoubleObjectImpl, NorthingStdError       );
            	GET_ATTRIBUTE(elem, pObject, eastingStdError,        DoubleObjectImpl, EastingStdError        );
            	GET_ATTRIBUTE(elem, pObject, elevationStdError,      DoubleObjectImpl, ElevationStdError      );
            	GET_ATTRIBUTE(elem, pObject, oID,                    StringObjectImpl, OID                    );
            	GET_ATTRIBUTE(elem, pObject, surveyOrder,            StringObjectImpl, SurveyOrder            );
            	GET_ATTRIBUTE(elem, pObject, pntSurv,                EnumSurvPntTypeImpl, PntSurv                );
            	GET_ATTRIBUTE(elem, pObject, zoneNumber,             UIntegerObjectImpl, ZoneNumber             );
            	GET_ATTRIBUTE(elem, pObject, surveyHorizontalOrder,  StringObjectImpl, SurveyHorizontalOrder  );
            	GET_ATTRIBUTE(elem, pObject, surveyVerticalOrder,    StringObjectImpl, SurveyVerticalOrder    );
            	GET_ATTRIBUTE(elem, pObject, localUncertainity,      DoubleObjectImpl, LocalUncertainity      );
            	GET_ATTRIBUTE(elem, pObject, positionalUncertainity, DoubleObjectImpl, PositionalUncertainity );
            
            	//recursively get sub element value.
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            	GET_TEXT_VALUE(elem, pObject, DoubleCollection);
            
            	return pObject;
            }
            
            DrivewayDensity* LoadDrivewayDensity(xmlNodePtr elem)
            {
            	DrivewayDensity* pObject = factory->createDrivewayDensity();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, staStart,  DoubleObjectImpl, StaStart  );
            	GET_ATTRIBUTE(elem, pObject, staEnd,    DoubleObjectImpl, StaEnd    );
            	GET_ATTRIBUTE(elem, pObject, density,   IntegerObjectImpl, Density   );
            
            	//recursively get sub element value.
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            Monuments* LoadMonuments(xmlNodePtr elem)
            {
            	Monuments* pObject = factory->createMonuments();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, desc,  StringObjectImpl, Desc  );
            	GET_ATTRIBUTE(elem, pObject, name,  StringObjectImpl, Name  );
            	GET_ATTRIBUTE(elem, pObject, state, EnumStateTypeImpl, State );
            
            	//recursively get sub element value.
            	GET_Sub_Element(elem, pObject, Monument  );
            	GET_Sub_Element(elem, pObject, Feature   );
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            Corner* LoadCorner(xmlNodePtr elem)
            {
            	Corner* pObject = factory->createCorner();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, staStart,  DoubleObjectImpl, StaStart  );
            	GET_ATTRIBUTE(elem, pObject, staEnd,    DoubleObjectImpl, StaEnd    );
            	GET_ATTRIBUTE(elem, pObject, type,      EnumCornerTypeImpl, Type      );
            
            	//recursively get sub element value.
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            Volume* LoadVolume(xmlNodePtr elem)
            {
            	Volume* pObject = factory->createVolume();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, station,      DoubleObjectImpl, Station      );
            	GET_ATTRIBUTE(elem, pObject, legNumber,    IntegerObjectImpl, LegNumber    );
            	GET_ATTRIBUTE(elem, pObject, turnPercent,  DoubleObjectImpl, TurnPercent  );
            	GET_ATTRIBUTE(elem, pObject, percentTrucks, DoubleObjectImpl, PercentTrucks);
            
            	//recursively get sub element value.
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            CircCurve* LoadCircCurve(xmlNodePtr elem)
            {
            	CircCurve* pObject = factory->createCircCurve();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, length,  DoubleObjectImpl, Length  );
            	GET_ATTRIBUTE(elem, pObject, radius,  DoubleObjectImpl, Radius  );
            	GET_ATTRIBUTE(elem, pObject, desc,    StringObjectImpl, Desc    );
            
            	//recursively get sub element value.
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            	GET_TEXT_VALUE(elem, pObject, DoubleCollection);
            
            	return pObject;
            }
            
            Title* LoadTitle(xmlNodePtr elem)
            {
            	Title* pObject = factory->createTitle();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, name,       StringObjectImpl, Name       );
            	GET_ATTRIBUTE(elem, pObject, titleType,  StringObjectImpl, TitleType  );
            
            	//recursively get sub element value.
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            DesignCrossSectSurf* LoadDesignCrossSectSurf(xmlNodePtr elem)
            {
            	DesignCrossSectSurf* pObject = factory->createDesignCrossSectSurf();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, name,              StringObjectImpl, Name              );
            	GET_ATTRIBUTE(elem, pObject, desc,              StringObjectImpl, Desc              );
            	GET_ATTRIBUTE(elem, pObject, state,             EnumStateTypeImpl, State             );
            	GET_ATTRIBUTE(elem, pObject, side,              EnumSideofRoadTypeImpl, Side              );
            	GET_ATTRIBUTE(elem, pObject, material,          StringObjectImpl, Material          );
            	GET_ATTRIBUTE(elem, pObject, closedArea,        BooleanObjectImpl, ClosedArea        );
            	GET_ATTRIBUTE(elem, pObject, typicalThickness,  DoubleObjectImpl, TypicalThickness  );
            	GET_ATTRIBUTE(elem, pObject, typicalWidth,      DoubleObjectImpl, TypicalWidth      );
            	GET_ATTRIBUTE(elem, pObject, area,              DoubleObjectImpl, Area              );
            	GET_ATTRIBUTE(elem, pObject, volume,            DoubleObjectImpl, Volume            );
            
            	//recursively get sub element value.
            	GET_Sub_Element(elem, pObject, CrossSectPnt  );
            	GET_Sub_Element(elem, pObject, Feature       );
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            RedVerticalObservation* LoadRedVerticalObservation(xmlNodePtr elem)
            {
            	RedVerticalObservation* pObject = factory->createRedVerticalObservation();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, desc,                    StringObjectImpl, Desc                    );
            	GET_ATTRIBUTE(elem, pObject, name,                    StringObjectImpl, Name                    );
            	GET_ATTRIBUTE(elem, pObject, state,                   StringObjectImpl, State                   );
            	GET_ATTRIBUTE(elem, pObject, oID,                     StringObjectImpl, OID                     );
            	GET_ATTRIBUTE(elem, pObject, purpose,                 EnumPurposeTypeImpl, Purpose                 );
            	GET_ATTRIBUTE(elem, pObject, setupID,                 StringObjectImpl, SetupID                 );
            	GET_ATTRIBUTE(elem, pObject, date,                    StringObjectImpl, Date                    );
            	GET_ATTRIBUTE(elem, pObject, equipmentUsed,           StringObjectImpl, EquipmentUsed           );
            	GET_ATTRIBUTE(elem, pObject, height,                  DoubleObjectImpl, Height                  );
            	GET_ATTRIBUTE(elem, pObject, verticalAdjustment,      StringObjectImpl, VerticalAdjustment      );
            	GET_ATTRIBUTE(elem, pObject, verticalFix,             StringObjectImpl, VerticalFix             );
            	GET_ATTRIBUTE(elem, pObject, geosphoid,               DoubleObjectImpl, Geosphoid               );
            	GET_ATTRIBUTE(elem, pObject, gsDatum,                 StringObjectImpl, GsDatum                 );
            	GET_ATTRIBUTE(elem, pObject, gsModel,                 StringObjectImpl, GsModel                 );
            	GET_ATTRIBUTE(elem, pObject, gsMethod,                StringObjectImpl, GsMethod                );
            	GET_ATTRIBUTE(elem, pObject, originMark,              StringObjectImpl, OriginMark              );
            	GET_ATTRIBUTE(elem, pObject, verticalDatum,           StringObjectImpl, VerticalDatum           );
            	GET_ATTRIBUTE(elem, pObject, localUncertainity,       DoubleObjectImpl, LocalUncertainity       );
            	GET_ATTRIBUTE(elem, pObject, class,                   StringObjectImpl, Class                   );
            	GET_ATTRIBUTE(elem, pObject, order,                   StringObjectImpl, Order                   );
            	GET_ATTRIBUTE(elem, pObject, positionalUncertainity,  DoubleObjectImpl, PositionalUncertainity  );
            
            	//recursively get sub element value.
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            ZoneCrossSectStructure* LoadZoneCrossSectStructure(xmlNodePtr elem)
            {
            	ZoneCrossSectStructure* pObject = factory->createZoneCrossSectStructure();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, name,             StringObjectImpl, Name             );
            	GET_ATTRIBUTE(elem, pObject, innerConnectPnt,  DoubleCollectionImpl, InnerConnectPnt  );
            	GET_ATTRIBUTE(elem, pObject, outerConnectPnt,  DoubleCollectionImpl, OuterConnectPnt  );
            	GET_ATTRIBUTE(elem, pObject, offsetMode,       EnumZoneOffsetTypeImpl, OffsetMode       );
            	GET_ATTRIBUTE(elem, pObject, startOffset,      DoubleObjectImpl, StartOffset      );
            	GET_ATTRIBUTE(elem, pObject, startOffsetElev,  DoubleObjectImpl, StartOffsetElev  );
            	GET_ATTRIBUTE(elem, pObject, endOffset,        DoubleObjectImpl, EndOffset        );
            	GET_ATTRIBUTE(elem, pObject, endOffsetElev,    DoubleObjectImpl, EndOffsetElev    );
            	GET_ATTRIBUTE(elem, pObject, transition,       EnumZoneTransitionTypeImpl, Transition       );
            	GET_ATTRIBUTE(elem, pObject, placement,        EnumZonePlacementTypeImpl, Placement        );
            	GET_ATTRIBUTE(elem, pObject, catalogReference, StringObjectImpl, CatalogReference );
            
            	//recursively get sub element value.
            	GET_Sub_Element(elem, pObject, Feature          );
            
            	//get single node.
            	GET_Sub_Single_Element(elem, pObject, PntList2D  );
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            Classification* LoadClassification(xmlNodePtr elem)
            {
            	Classification* pObject = factory->createClassification();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, staStart,         DoubleObjectImpl, StaStart         );
            	GET_ATTRIBUTE(elem, pObject, staEnd,           DoubleObjectImpl, StaEnd           );
            	GET_ATTRIBUTE(elem, pObject, functionalClass,  EnumFunctionalClassTypeImpl, FunctionalClass  );
            
            	//recursively get sub element value.
            	GET_Sub_Element(elem, pObject, Feature  );
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            Zones* LoadZones(xmlNodePtr elem)
            {
            	Zones* pObject = factory->createZones();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, side,  EnumSideofRoadTypeImpl, Side  );
            	GET_ATTRIBUTE(elem, pObject, desc,  StringObjectImpl, Desc  );
            	GET_ATTRIBUTE(elem, pObject, name,  StringObjectImpl, Name  );
            	GET_ATTRIBUTE(elem, pObject, state, EnumStateTypeImpl, State );
            
            	//recursively get sub element value.
            	GET_Sub_Element(elem, pObject, Zone       );
            	GET_Sub_Element(elem, pObject, ZoneHinge  );
            	GET_Sub_Element(elem, pObject, Feature    );
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            SurveyHeader* LoadSurveyHeader(xmlNodePtr elem)
            {
            	SurveyHeader* pObject = factory->createSurveyHeader();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, name,                        StringObjectImpl, Name                        );
            	GET_ATTRIBUTE(elem, pObject, desc,                        StringObjectImpl, Desc                        );
            	GET_ATTRIBUTE(elem, pObject, purpose,                     EnumPurposeTypeImpl, Purpose                     );
            	GET_ATTRIBUTE(elem, pObject, startTime,                   StringObjectImpl, StartTime                   );
            	GET_ATTRIBUTE(elem, pObject, endTime,                     StringObjectImpl, EndTime                     );
            	GET_ATTRIBUTE(elem, pObject, surveyor,                    StringObjectImpl, Surveyor                    );
            	GET_ATTRIBUTE(elem, pObject, surveyorFirm,                StringObjectImpl, SurveyorFirm                );
            	GET_ATTRIBUTE(elem, pObject, surveyorReference,           StringObjectImpl, SurveyorReference           );
            	GET_ATTRIBUTE(elem, pObject, surveyorRegistration,        StringObjectImpl, SurveyorRegistration        );
            	GET_ATTRIBUTE(elem, pObject, surveyPurpose,               StringObjectImpl, SurveyPurpose               );
            	GET_ATTRIBUTE(elem, pObject, type,                        EnumSurveyTypeImpl, Type                        );
            	GET_ATTRIBUTE(elem, pObject, class,                       StringObjectImpl, Class                       );
            	GET_ATTRIBUTE(elem, pObject, county,                      StringObjectImpl, County                      );
            	GET_ATTRIBUTE(elem, pObject, applyAtmosphericCorrection,  BooleanObjectImpl, ApplyAtmosphericCorrection  );
            	GET_ATTRIBUTE(elem, pObject, pressure,                    DoubleObjectImpl, Pressure                    );
            	GET_ATTRIBUTE(elem, pObject, temperature,                 DoubleObjectImpl, Temperature                 );
            	GET_ATTRIBUTE(elem, pObject, applySeaLevelCorrection,     BooleanObjectImpl, ApplySeaLevelCorrection     );
            	GET_ATTRIBUTE(elem, pObject, scaleFactor,                 DoubleObjectImpl, ScaleFactor                 );
            	GET_ATTRIBUTE(elem, pObject, seaLevelCorrectionFactor,    DoubleObjectImpl, SeaLevelCorrectionFactor    );
            	GET_ATTRIBUTE(elem, pObject, combinedFactor,              DoubleObjectImpl, CombinedFactor              );
            	GET_ATTRIBUTE(elem, pObject, jurisdiction,                StringObjectImpl, Jurisdiction                );
            	GET_ATTRIBUTE(elem, pObject, submissionDate,              StringObjectImpl, SubmissionDate              );
            	GET_ATTRIBUTE(elem, pObject, documentStatus,              StringObjectImpl, DocumentStatus              );
            	GET_ATTRIBUTE(elem, pObject, surveyFormat,                StringObjectImpl, SurveyFormat                );
            	GET_ATTRIBUTE(elem, pObject, surveyStatus,                StringObjectImpl, SurveyStatus                );
            	GET_ATTRIBUTE(elem, pObject, communityTitleSchemeNo,      IntegerObjectImpl, CommunityTitleSchemeNo      );
            	GET_ATTRIBUTE(elem, pObject, communityTitleSchemeName,    StringObjectImpl, CommunityTitleSchemeName    );
            	GET_ATTRIBUTE(elem, pObject, fieldNoteFlag,               BooleanObjectImpl, FieldNoteFlag               );
            	GET_ATTRIBUTE(elem, pObject, fieldNoteReference,          StringObjectImpl, FieldNoteReference          );
            	GET_ATTRIBUTE(elem, pObject, fieldReport,                 StringObjectImpl, FieldReport                 );
            
            	//recursively get sub element value.
            	GET_Sub_Element(elem, pObject, Annotation          );
            	GET_Sub_Element(elem, pObject, AdministrativeArea  );
            	GET_Sub_Element(elem, pObject, AdministrativeDate  );
            	GET_Sub_Element(elem, pObject, MapPoint            );
            	GET_Sub_Element(elem, pObject, Personnel           );
            	GET_Sub_Element(elem, pObject, FieldNote           );
            	GET_Sub_Element(elem, pObject, Feature             );
            	GET_Sub_Element(elem, pObject, SurveyorCertificate );
            	GET_Sub_Element(elem, pObject, PurposeOfSurvey     );
            	GET_Sub_Element(elem, pObject, HeadOfPower         );
            
            	//get single node.
            	GET_Sub_Single_Element(elem, pObject, Units             );
            	GET_Sub_Single_Element(elem, pObject, CoordinateSystem  );
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            LaserSetup* LoadLaserSetup(xmlNodePtr elem)
            {
            	LaserSetup* pObject = factory->createLaserSetup();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, id,                StringObjectImpl, Id                );
            	GET_ATTRIBUTE(elem, pObject, stationName,       StringObjectImpl, StationName       );
            	GET_ATTRIBUTE(elem, pObject, instrumentHeight,  DoubleObjectImpl, InstrumentHeight  );
            	GET_ATTRIBUTE(elem, pObject, laserDetailsID,    StringObjectImpl, LaserDetailsID    );
            	GET_ATTRIBUTE(elem, pObject, magDeclination,    DoubleObjectImpl, MagDeclination    );
            
            	//recursively get sub element value.
            	GET_Sub_Element(elem, pObject, TargetSetup  );
            	GET_Sub_Element(elem, pObject, FieldNote    );
            	GET_Sub_Element(elem, pObject, Feature      );
            
            	//get single node.
            	GET_Sub_Single_Element(elem, pObject, InstrumentPoint  );
            	GET_Sub_Single_Element(elem, pObject, Backsight        );
            	GET_Sub_Single_Element(elem, pObject, RawObservation   );
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            Property* LoadProperty(xmlNodePtr elem)
            {
            	Property* pObject = factory->createProperty();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, label,  StringObjectImpl, Label  );
            	GET_ATTRIBUTE(elem, pObject, value,  StringObjectImpl, Value  );
            
            	//recursively get sub element value.
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            PointFiles* LoadPointFiles(xmlNodePtr elem)
            {
            	PointFiles* pObject = factory->createPointFiles();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            
            	//recursively get sub element value.
            	GET_Sub_Element(elem, pObject, PointFile  );
            	GET_Sub_Element(elem, pObject, Feature    );
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            ZoneSlope* LoadZoneSlope(xmlNodePtr elem)
            {
            	ZoneSlope* pObject = factory->createZoneSlope();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, staStart,               DoubleObjectImpl, StaStart               );
            	GET_ATTRIBUTE(elem, pObject, staEnd,                 DoubleObjectImpl, StaEnd                 );
            	GET_ATTRIBUTE(elem, pObject, startVertValue,         DoubleObjectImpl, StartVertValue         );
            	GET_ATTRIBUTE(elem, pObject, startVertType,          EnumZoneVertTypeImpl, StartVertType          );
            	GET_ATTRIBUTE(elem, pObject, endVertValue,           DoubleObjectImpl, EndVertValue           );
            	GET_ATTRIBUTE(elem, pObject, endVertType,            EnumZoneVertTypeImpl, EndVertType            );
            	GET_ATTRIBUTE(elem, pObject, parabolicStartStation,  DoubleObjectImpl, ParabolicStartStation  );
            	GET_ATTRIBUTE(elem, pObject, parabolicEndStation,    DoubleObjectImpl, ParabolicEndStation    );
            
            	//recursively get sub element value.
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            Ditch* LoadDitch(xmlNodePtr elem)
            {
            	Ditch* pObject = factory->createDitch();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, staStart,     DoubleObjectImpl, StaStart     );
            	GET_ATTRIBUTE(elem, pObject, staEnd,       DoubleObjectImpl, StaEnd       );
            	GET_ATTRIBUTE(elem, pObject, bottomWidth,  DoubleObjectImpl, BottomWidth  );
            	GET_ATTRIBUTE(elem, pObject, bottomShape,  EnumDitchBottomShapeImpl, BottomShape  );
            
            	//recursively get sub element value.
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            Timing* LoadTiming(xmlNodePtr elem)
            {
            	Timing* pObject = factory->createTiming();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, station,               DoubleObjectImpl, Station               );
            	GET_ATTRIBUTE(elem, pObject, legNumber,             IntegerObjectImpl, LegNumber             );
            	GET_ATTRIBUTE(elem, pObject, protectedTurnPercent,  DoubleObjectImpl, ProtectedTurnPercent  );
            	GET_ATTRIBUTE(elem, pObject, unprotectedTurnPercent, DoubleObjectImpl, UnprotectedTurnPercent);
            
            	//recursively get sub element value.
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            GPSAntennaDetails* LoadGPSAntennaDetails(xmlNodePtr elem)
            {
            	GPSAntennaDetails* pObject = factory->createGPSAntennaDetails();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, id,                 StringObjectImpl, Id                 );
            	GET_ATTRIBUTE(elem, pObject, manufacturer,       StringObjectImpl, Manufacturer       );
            	GET_ATTRIBUTE(elem, pObject, model,              StringObjectImpl, Model              );
            	GET_ATTRIBUTE(elem, pObject, serialNumber,       StringObjectImpl, SerialNumber       );
            	GET_ATTRIBUTE(elem, pObject, latitude,           DoubleObjectImpl, Latitude           );
            	GET_ATTRIBUTE(elem, pObject, longitude,          DoubleObjectImpl, Longitude          );
            	GET_ATTRIBUTE(elem, pObject, altitude,           DoubleObjectImpl, Altitude           );
            	GET_ATTRIBUTE(elem, pObject, ellipsiodalHeight,  DoubleObjectImpl, EllipsiodalHeight  );
            	GET_ATTRIBUTE(elem, pObject, orthometricHeight,  DoubleObjectImpl, OrthometricHeight  );
            
            	//recursively get sub element value.
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            InstrumentPoint* LoadInstrumentPoint(xmlNodePtr elem)
            {
            	InstrumentPoint* pObject = factory->createInstrumentPoint();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, name, StringObjectImpl, Name);
            	GET_ATTRIBUTE(elem, pObject, desc, StringObjectImpl, Desc);
            	GET_ATTRIBUTE(elem, pObject, code, StringObjectImpl, Code);
            	GET_ATTRIBUTE(elem, pObject, state, EnumStateTypeImpl, State);
            	GET_ATTRIBUTE(elem, pObject, pntRef, StringObjectImpl, PntRef);
            	GET_ATTRIBUTE(elem, pObject, featureRef, StringObjectImpl, FeatureRef);
            	GET_ATTRIBUTE(elem, pObject, pointGeometry, EnumPointGeometryTypeImpl, PointGeometry);
            	GET_ATTRIBUTE(elem, pObject, DTMAttribute, EnumDTMAttributeTypeImpl, DTMAttribute);
            	GET_ATTRIBUTE(elem, pObject, timeStamp, StringObjectImpl, TimeStamp);
            	GET_ATTRIBUTE(elem, pObject, role, EnumSurveyRoleTypeImpl, Role);
            	GET_ATTRIBUTE(elem, pObject, determinedTimeStamp, StringObjectImpl, DeterminedTimeStamp);
            	GET_ATTRIBUTE(elem, pObject, ellipsoidHeight, DoubleObjectImpl, EllipsoidHeight);
            	GET_ATTRIBUTE(elem, pObject, latitude, DoubleObjectImpl, Latitude);
            	GET_ATTRIBUTE(elem, pObject, longitude, DoubleObjectImpl, Longitude);
            	GET_ATTRIBUTE(elem, pObject, zone, StringObjectImpl, Zone);
            	GET_ATTRIBUTE(elem, pObject, northingStdError, DoubleObjectImpl, NorthingStdError);
            	GET_ATTRIBUTE(elem, pObject, eastingStdError, DoubleObjectImpl, EastingStdError);
            	GET_ATTRIBUTE(elem, pObject, elevationStdError, DoubleObjectImpl, ElevationStdError);
            
            	//recursively get sub element value.
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            	GET_TEXT_VALUE(elem, pObject, DoubleCollection);
            
            	return pObject;
            }
            
            TurnSpeed* LoadTurnSpeed(xmlNodePtr elem)
            {
            	TurnSpeed* pObject = factory->createTurnSpeed();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, station,  DoubleObjectImpl, Station  );
            	GET_ATTRIBUTE(elem, pObject, legNumber, IntegerObjectImpl, LegNumber);
            	GET_ATTRIBUTE(elem, pObject, speed,    DoubleObjectImpl, Speed    );
            
            	//recursively get sub element value.
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            TurnLane* LoadTurnLane(xmlNodePtr elem)
            {
            	TurnLane* pObject = factory->createTurnLane();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, staStart,           DoubleObjectImpl, StaStart           );
            	GET_ATTRIBUTE(elem, pObject, staEnd,             DoubleObjectImpl, StaEnd             );
            	GET_ATTRIBUTE(elem, pObject, beginFullWidthSta,  DoubleObjectImpl, BeginFullWidthSta  );
            	GET_ATTRIBUTE(elem, pObject, width,              DoubleObjectImpl, Width              );
            	GET_ATTRIBUTE(elem, pObject, sideofRoad,         EnumSideofRoadTypeImpl, SideofRoad         );
            	GET_ATTRIBUTE(elem, pObject, type,               EnumTurnLaneTypeImpl, Type               );
            	GET_ATTRIBUTE(elem, pObject, taperType,          EnumLaneTaperTypeImpl, TaperType          );
            	GET_ATTRIBUTE(elem, pObject, taperTangentLength, DoubleObjectImpl, TaperTangentLength );
            
            	//recursively get sub element value.
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            
            RawObservationType* LoadRawObservationType(xmlNodePtr elem)
            {
            	RawObservationType* pObject = factory->createRawObservationType();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, setupID,           StringObjectImpl, SetupID           );
            	GET_ATTRIBUTE(elem, pObject, targetSetupID,     StringObjectImpl, TargetSetupID     );
            	GET_ATTRIBUTE(elem, pObject, setID,             StringObjectImpl, SetID             );
            	GET_ATTRIBUTE(elem, pObject, purpose,           EnumPurposeTypeImpl, Purpose           );
            	GET_ATTRIBUTE(elem, pObject, targetHeight,      DoubleObjectImpl, TargetHeight      );
            	GET_ATTRIBUTE(elem, pObject, horizAngle,        DoubleObjectImpl, HorizAngle        );
            	GET_ATTRIBUTE(elem, pObject, slopeDistance,     DoubleObjectImpl, SlopeDistance     );
            	GET_ATTRIBUTE(elem, pObject, zenithAngle,       DoubleObjectImpl, ZenithAngle       );
            	GET_ATTRIBUTE(elem, pObject, horizDistance,     DoubleObjectImpl, HorizDistance     );
            	GET_ATTRIBUTE(elem, pObject, vertDistance,      DoubleObjectImpl, VertDistance      );
            	GET_ATTRIBUTE(elem, pObject, azimuth,           DoubleObjectImpl, Azimuth           );
            	GET_ATTRIBUTE(elem, pObject, unused,            BooleanObjectImpl, Unused            );
            	GET_ATTRIBUTE(elem, pObject, directFace,        BooleanObjectImpl, DirectFace        );
            	GET_ATTRIBUTE(elem, pObject, coordGeomRefs,     StringCollectionImpl, CoordGeomRefs     );
            	GET_ATTRIBUTE(elem, pObject, timeStamp,         StringObjectImpl, TimeStamp         );
            	GET_ATTRIBUTE(elem, pObject, alignRef,          StringObjectImpl, AlignRef          );
            	GET_ATTRIBUTE(elem, pObject, alignStationName,  StringObjectImpl, AlignStationName  );
            	GET_ATTRIBUTE(elem, pObject, alignOffset,       DoubleObjectImpl, AlignOffset       );
            	GET_ATTRIBUTE(elem, pObject, upperStadia,       DoubleObjectImpl, UpperStadia       );
            	GET_ATTRIBUTE(elem, pObject, rod,               DoubleObjectImpl, Rod               );
            	GET_ATTRIBUTE(elem, pObject, lowerStadia,       DoubleObjectImpl, LowerStadia       );
            	GET_ATTRIBUTE(elem, pObject, circlePositionSet, DoubleObjectImpl, CirclePositionSet );
            	GET_ATTRIBUTE(elem, pObject, status,            EnumObservationStatusTypeImpl, Status            );
            
            	//recursively get sub element value.
            	GET_Sub_Element(elem, pObject, FieldNote      );
            	GET_Sub_Element(elem, pObject, Feature        );
            
            	//get single node.
            	GET_Sub_Single_Element(elem, pObject, TargetPoint  );
            	GET_Sub_Single_Element(elem, pObject, OffsetVals   );
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            Curve1* LoadCurve1(xmlNodePtr elem)
            {
            	Curve1* pObject = factory->createCurve1();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            
            	//recursively get sub element value.
            
            	//get single node.
            	GET_Sub_Single_Element(elem, pObject, Curve  );
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            Parcel* LoadParcel(xmlNodePtr elem)
            {
            	Parcel* pObject = factory->createParcel();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, name,                    StringObjectImpl, Name                    );
            	GET_ATTRIBUTE(elem, pObject, oID,                     StringObjectImpl, OID                     );
            	GET_ATTRIBUTE(elem, pObject, area,                    DoubleObjectImpl, Area                    );
            	GET_ATTRIBUTE(elem, pObject, desc,                    StringObjectImpl, Desc                    );
            	GET_ATTRIBUTE(elem, pObject, dirClosure,              DoubleObjectImpl, DirClosure              );
            	GET_ATTRIBUTE(elem, pObject, distClosure,             DoubleObjectImpl, DistClosure             );
            	GET_ATTRIBUTE(elem, pObject, owner,                   StringObjectImpl, Owner                   );
            	GET_ATTRIBUTE(elem, pObject, parcelType,              StringObjectImpl, ParcelType              );
            	GET_ATTRIBUTE(elem, pObject, setbackFront,            DoubleObjectImpl, SetbackFront            );
            	GET_ATTRIBUTE(elem, pObject, setbackRear,             DoubleObjectImpl, SetbackRear             );
            	GET_ATTRIBUTE(elem, pObject, setbackSide,             DoubleObjectImpl, SetbackSide             );
            	GET_ATTRIBUTE(elem, pObject, state,                   EnumParcelStateTypeImpl, State                   );
            	GET_ATTRIBUTE(elem, pObject, taxId,                   StringObjectImpl, TaxId                   );
            	GET_ATTRIBUTE(elem, pObject, class,                   StringObjectImpl, Class                   );
            	GET_ATTRIBUTE(elem, pObject, useOfParcel,             StringObjectImpl, UseOfParcel             );
            	GET_ATTRIBUTE(elem, pObject, parcelFormat,            StringObjectImpl, ParcelFormat            );
            	GET_ATTRIBUTE(elem, pObject, buildingNo,              StringObjectImpl, BuildingNo              );
            	GET_ATTRIBUTE(elem, pObject, buildingLevelNo,         StringObjectImpl, BuildingLevelNo         );
            	GET_ATTRIBUTE(elem, pObject, volume,                  StringObjectImpl, Volume                  );
            	GET_ATTRIBUTE(elem, pObject, pclRef,                  StringObjectImpl, PclRef                  );
            	GET_ATTRIBUTE(elem, pObject, lotEntitlements,         StringObjectImpl, LotEntitlements         );
            	GET_ATTRIBUTE(elem, pObject, liabilityApportionment,  StringObjectImpl, LiabilityApportionment  );
            
            	//recursively get sub element value.
            	GET_Sub_Element(elem, pObject, Title            );
            	GET_Sub_Element(elem, pObject, Exclusions       );
            	GET_Sub_Element(elem, pObject, LocationAddress  );
            	GET_Sub_Element(elem, pObject, Feature          );
            
            	//get single node.
            	GET_Sub_Single_Element(elem, pObject, Center     );
            	GET_Sub_Single_Element(elem, pObject, CoordGeom  );
            	GET_Sub_Single_Element(elem, pObject, VolumeGeom );
            	GET_Sub_Single_Element(elem, pObject, Parcels    );
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            Line* LoadLine(xmlNodePtr elem)
            {
            	Line* pObject = factory->createLine();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, desc,      StringObjectImpl, Desc      );
            	GET_ATTRIBUTE(elem, pObject, dir,       DoubleObjectImpl, Dir       );
            	GET_ATTRIBUTE(elem, pObject, length,    DoubleObjectImpl, Length    );
            	GET_ATTRIBUTE(elem, pObject, name,      StringObjectImpl, Name      );
            	GET_ATTRIBUTE(elem, pObject, staStart,  DoubleObjectImpl, StaStart  );
            	GET_ATTRIBUTE(elem, pObject, state,     EnumStateTypeImpl, State     );
            	GET_ATTRIBUTE(elem, pObject, oID,       StringObjectImpl, OID       );
            	GET_ATTRIBUTE(elem, pObject, note,      StringObjectImpl, Note      );
            
            	//recursively get sub element value.
            	GET_Sub_Element(elem, pObject, Feature  );
            
            	//get single node.
            	GET_Sub_Single_Element(elem, pObject, Start  );
            	GET_Sub_Single_Element(elem, pObject, End    );
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            Breaklines* LoadBreaklines(xmlNodePtr elem)
            {
            	Breaklines* pObject = factory->createBreaklines();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            
            	//recursively get sub element value.
            	GET_Sub_Element(elem, pObject, Breakline  );
            	GET_Sub_Element(elem, pObject, RetWall    );
            	GET_Sub_Element(elem, pObject, Feature    );
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            Feature* LoadFeature(xmlNodePtr elem)
            {
            	Feature* pObject = factory->createFeature();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, name,  StringObjectImpl, Name  );
            	GET_ATTRIBUTE(elem, pObject, code,  StringObjectImpl, Code  );
            	GET_ATTRIBUTE(elem, pObject, source, StringObjectImpl, Source);
            
            	//recursively get sub element value.
            	GET_Sub_Element(elem, pObject, Property  );
            	GET_Sub_Element(elem, pObject, DocFileRef);
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            OutSpiral* LoadOutSpiral(xmlNodePtr elem)
            {
            	OutSpiral* pObject = factory->createOutSpiral();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            
            	//recursively get sub element value.
            
            	//get single node.
            	GET_Sub_Single_Element(elem, pObject, Spiral  );
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            Definition* LoadDefinition(xmlNodePtr elem)
            {
            	Definition* pObject = factory->createDefinition();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, surfType,  EnumSurfTypeEnumImpl, SurfType  );
            	GET_ATTRIBUTE(elem, pObject, area2DSurf, DoubleObjectImpl, Area2DSurf);
            	GET_ATTRIBUTE(elem, pObject, area3DSurf, DoubleObjectImpl, Area3DSurf);
            	GET_ATTRIBUTE(elem, pObject, elevMax,   DoubleObjectImpl, ElevMax   );
            	GET_ATTRIBUTE(elem, pObject, elevMin,   DoubleObjectImpl, ElevMin   );
            
            	//recursively get sub element value.
            	GET_Sub_Element(elem, pObject, Faces  );
            	GET_Sub_Element(elem, pObject, Feature);
            
            	//get single node.
            	GET_Sub_Single_Element(elem, pObject, Pnts  );
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            F* LoadF(xmlNodePtr elem)
            {
            	F* pObject = factory->createF();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, i,  IntegerObjectImpl, I  );
            	GET_ATTRIBUTE(elem, pObject, n,  IntegerCollectionImpl, N  );
// Face "b" attribute
                GET_ATTRIBUTE(elem, pObject, b,  IntegerObjectImpl, B  );
            
            	//recursively get sub element value.
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            	GET_TEXT_VALUE(elem, pObject, IntegerCollection);
            
            	return pObject;
            }
            
            LaserDetails* LoadLaserDetails(xmlNodePtr elem)
            {
            	LaserDetails* pObject = factory->createLaserDetails();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, id,               StringObjectImpl, Id               );
            	GET_ATTRIBUTE(elem, pObject, laserVertOffset,  DoubleObjectImpl, LaserVertOffset  );
            	GET_ATTRIBUTE(elem, pObject, manufacturer,     StringObjectImpl, Manufacturer     );
            	GET_ATTRIBUTE(elem, pObject, model,            StringObjectImpl, Model            );
            	GET_ATTRIBUTE(elem, pObject, serialNumber,     StringObjectImpl, SerialNumber     );
            
            	//recursively get sub element value.
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            Speeds* LoadSpeeds(xmlNodePtr elem)
            {
            	Speeds* pObject = factory->createSpeeds();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            
            	//recursively get sub element value.
            	GET_Sub_Element(elem, pObject, DesignSpeed      );
            	GET_Sub_Element(elem, pObject, DesignSpeed85th  );
            	GET_Sub_Element(elem, pObject, PostedSpeed      );
            	GET_Sub_Element(elem, pObject, Feature          );
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            OutletStruct* LoadOutletStruct(xmlNodePtr elem)
            {
            	OutletStruct* pObject = factory->createOutletStruct();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            
            	//recursively get sub element value.
            	GET_Sub_Element(elem, pObject, Feature  );
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            
            Exclusions* LoadExclusions(xmlNodePtr elem)
            {
            	Exclusions* pObject = factory->createExclusions();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, exclusionType,  StringObjectImpl, ExclusionType  );
            	GET_ATTRIBUTE(elem, pObject, area,           DoubleObjectImpl, Area           );
            
            	//recursively get sub element value.
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            PVI* LoadPVI(xmlNodePtr elem)
            {
            	PVI* pObject = factory->createPVI();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, desc,  StringObjectImpl, Desc  );
            
            	//recursively get sub element value.
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            	GET_TEXT_VALUE(elem, pObject, DoubleCollection);
            
            	return pObject;
            }
            
            TrafficControl* LoadTrafficControl(xmlNodePtr elem)
            {
            	TrafficControl* pObject = factory->createTrafficControl();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, station,          DoubleObjectImpl, Station          );
            	GET_ATTRIBUTE(elem, pObject, signalPeriod,     DoubleObjectImpl, SignalPeriod     );
            	GET_ATTRIBUTE(elem, pObject, controlPosition,  EnumTrafficControlPositionImpl, ControlPosition  );
            	GET_ATTRIBUTE(elem, pObject, controlType,      EnumTrafficControlTypeImpl, ControlType      );
            
            	//recursively get sub element value.
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            
            Corrections* LoadCorrections(xmlNodePtr elem)
            {
            	Corrections* pObject = factory->createCorrections();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, refractionCoefficient,       DoubleObjectImpl, RefractionCoefficient       );
            	GET_ATTRIBUTE(elem, pObject, applyRefractionCoefficient,  BooleanObjectImpl, ApplyRefractionCoefficient  );
            	GET_ATTRIBUTE(elem, pObject, sphericity,                  DoubleObjectImpl, Sphericity                  );
            	GET_ATTRIBUTE(elem, pObject, prismEccentricity,           DoubleObjectImpl, PrismEccentricity           );
            
            	//recursively get sub element value.
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            ReducedObservation* LoadReducedObservation(xmlNodePtr elem)
            {
            	ReducedObservation* pObject = factory->createReducedObservation();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, purpose,               EnumPurposeTypeImpl, Purpose               );
            	GET_ATTRIBUTE(elem, pObject, setupID,               StringObjectImpl, SetupID               );
            	GET_ATTRIBUTE(elem, pObject, targetSetupID,         StringObjectImpl, TargetSetupID         );
            	GET_ATTRIBUTE(elem, pObject, targetSetup2ID,        StringObjectImpl, TargetSetup2ID        );
            	GET_ATTRIBUTE(elem, pObject, setID,                 StringObjectImpl, SetID                 );
            	GET_ATTRIBUTE(elem, pObject, targetHeight,          DoubleObjectImpl, TargetHeight          );
            	GET_ATTRIBUTE(elem, pObject, azimuth,               DoubleObjectImpl, Azimuth               );
            	GET_ATTRIBUTE(elem, pObject, horizDistance,         DoubleObjectImpl, HorizDistance         );
            	GET_ATTRIBUTE(elem, pObject, vertDistance,          DoubleObjectImpl, VertDistance          );
            	GET_ATTRIBUTE(elem, pObject, horizAngle,            DoubleObjectImpl, HorizAngle            );
            	GET_ATTRIBUTE(elem, pObject, slopeDistance,         DoubleObjectImpl, SlopeDistance         );
            	GET_ATTRIBUTE(elem, pObject, zenithAngle,           DoubleObjectImpl, ZenithAngle           );
            	GET_ATTRIBUTE(elem, pObject, equipmentUsed,         StringObjectImpl, EquipmentUsed         );
            	GET_ATTRIBUTE(elem, pObject, azimuthAccuracy,       DoubleObjectImpl, AzimuthAccuracy       );
            	GET_ATTRIBUTE(elem, pObject, distanceAccuracy,      DoubleObjectImpl, DistanceAccuracy      );
            	GET_ATTRIBUTE(elem, pObject, angleAccuracy,         DoubleObjectImpl, AngleAccuracy         );
            	GET_ATTRIBUTE(elem, pObject, date,                  StringObjectImpl, Date                  );
            	GET_ATTRIBUTE(elem, pObject, distanceType,          StringObjectImpl, DistanceType          );
            	GET_ATTRIBUTE(elem, pObject, azimuthType,           StringObjectImpl, AzimuthType           );
            	GET_ATTRIBUTE(elem, pObject, angleType,             StringObjectImpl, AngleType             );
            	GET_ATTRIBUTE(elem, pObject, adoptedAzimuthSurvey,  StringObjectImpl, AdoptedAzimuthSurvey  );
            	GET_ATTRIBUTE(elem, pObject, adoptedDistanceSurvey, StringObjectImpl, AdoptedDistanceSurvey );
            	GET_ATTRIBUTE(elem, pObject, adoptedAngleSurvey,    StringObjectImpl, AdoptedAngleSurvey    );
            	GET_ATTRIBUTE(elem, pObject, distanceAccClass,      StringObjectImpl, DistanceAccClass      );
            	GET_ATTRIBUTE(elem, pObject, azimuthAccClass,       StringObjectImpl, AzimuthAccClass       );
            	GET_ATTRIBUTE(elem, pObject, angleAccClass,         StringObjectImpl, AngleAccClass         );
            	GET_ATTRIBUTE(elem, pObject, azimuthAdoptionFactor, DoubleObjectImpl, AzimuthAdoptionFactor );
            	GET_ATTRIBUTE(elem, pObject, distanceAdoptionFactor, DoubleObjectImpl, DistanceAdoptionFactor);
            	GET_ATTRIBUTE(elem, pObject, name,                  StringObjectImpl, Name                  );
            	GET_ATTRIBUTE(elem, pObject, desc,                  StringObjectImpl, Desc                  );
            	GET_ATTRIBUTE(elem, pObject, state,                 EnumStateTypeImpl, State                 );
            	GET_ATTRIBUTE(elem, pObject, oID,                   StringObjectImpl, OID                   );
            	GET_ATTRIBUTE(elem, pObject, MSLDistance,           StringObjectImpl, MSLDistance           );
            	GET_ATTRIBUTE(elem, pObject, spherDistance,         StringObjectImpl, SpherDistance         );
            	GET_ATTRIBUTE(elem, pObject, coordGeomRefs,         StringCollectionImpl, CoordGeomRefs         );
            	GET_ATTRIBUTE(elem, pObject, alignRef,              StringObjectImpl, AlignRef              );
            	GET_ATTRIBUTE(elem, pObject, alignStationName,      StringObjectImpl, AlignStationName      );
            	GET_ATTRIBUTE(elem, pObject, alignOffset,           DoubleObjectImpl, AlignOffset           );
            
            	//recursively get sub element value.
            	GET_Sub_Element(elem, pObject, FieldNote      );
            	GET_Sub_Element(elem, pObject, Feature        );
            
            	//get single node.
            	GET_Sub_Single_Element(elem, pObject, TargetPoint  );
            	GET_Sub_Single_Element(elem, pObject, OffsetVals   );
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            Watersheds* LoadWatersheds(xmlNodePtr elem)
            {
            	Watersheds* pObject = factory->createWatersheds();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            
            	//recursively get sub element value.
            	GET_Sub_Element(elem, pObject, Watershed  );
            	GET_Sub_Element(elem, pObject, Feature    );
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            CircStruct* LoadCircStruct(xmlNodePtr elem)
            {
            	CircStruct* pObject = factory->createCircStruct();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, diameter,  DoubleObjectImpl, Diameter  );
            	GET_ATTRIBUTE(elem, pObject, desc,      StringObjectImpl, Desc      );
            	GET_ATTRIBUTE(elem, pObject, inletCase, StringObjectImpl, InletCase );
            	GET_ATTRIBUTE(elem, pObject, lossCoeff, DoubleObjectImpl, LossCoeff );
            	GET_ATTRIBUTE(elem, pObject, material,  StringObjectImpl, Material  );
            	GET_ATTRIBUTE(elem, pObject, thickness, DoubleObjectImpl, Thickness );
            
            	//recursively get sub element value.
            	GET_Sub_Element(elem, pObject, Feature  );
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            
            InletStruct* LoadInletStruct(xmlNodePtr elem)
            {
            	InletStruct* pObject = factory->createInletStruct();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            
            	//recursively get sub element value.
            	GET_Sub_Element(elem, pObject, Feature  );
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            ControlChecks* LoadControlChecks(xmlNodePtr elem)
            {
            	ControlChecks* pObject = factory->createControlChecks();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            
            	//recursively get sub element value.
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            ReducedArcObservation* LoadReducedArcObservation(xmlNodePtr elem)
            {
            	ReducedArcObservation* pObject = factory->createReducedArcObservation();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, purpose,                EnumPurposeTypeImpl, Purpose                );
            	GET_ATTRIBUTE(elem, pObject, setupID,                StringObjectImpl, SetupID                );
            	GET_ATTRIBUTE(elem, pObject, targetSetupID,          StringObjectImpl, TargetSetupID          );
            	GET_ATTRIBUTE(elem, pObject, setID,                  StringObjectImpl, SetID                  );
            	GET_ATTRIBUTE(elem, pObject, chordAzimuth,           DoubleObjectImpl, ChordAzimuth           );
            	GET_ATTRIBUTE(elem, pObject, radius,                 DoubleObjectImpl, Radius                 );
            	GET_ATTRIBUTE(elem, pObject, length,                 DoubleObjectImpl, Length                 );
            	GET_ATTRIBUTE(elem, pObject, rot,                    EnumClockwiseImpl, Rot                    );
            	GET_ATTRIBUTE(elem, pObject, equipmentUsed,          StringObjectImpl, EquipmentUsed          );
            	GET_ATTRIBUTE(elem, pObject, arcAzimuthAccuracy,     DoubleObjectImpl, ArcAzimuthAccuracy     );
            	GET_ATTRIBUTE(elem, pObject, arcLengthAccuracy,      DoubleObjectImpl, ArcLengthAccuracy      );
            	GET_ATTRIBUTE(elem, pObject, date,                   StringObjectImpl, Date                   );
            	GET_ATTRIBUTE(elem, pObject, arcType,                StringObjectImpl, ArcType                );
            	GET_ATTRIBUTE(elem, pObject, adoptedSurvey,          StringObjectImpl, AdoptedSurvey          );
            	GET_ATTRIBUTE(elem, pObject, lengthAccClass,         StringObjectImpl, LengthAccClass         );
            	GET_ATTRIBUTE(elem, pObject, azimuthAccClass,        StringObjectImpl, AzimuthAccClass        );
            	GET_ATTRIBUTE(elem, pObject, azimuthAdoptionFactor,  DoubleObjectImpl, AzimuthAdoptionFactor  );
            	GET_ATTRIBUTE(elem, pObject, lengthAdoptionFactor,   DoubleObjectImpl, LengthAdoptionFactor   );
            	GET_ATTRIBUTE(elem, pObject, name,                   StringObjectImpl, Name                   );
            	GET_ATTRIBUTE(elem, pObject, desc,                   StringObjectImpl, Desc                   );
            	GET_ATTRIBUTE(elem, pObject, state,                  EnumStateTypeImpl, State                  );
            	GET_ATTRIBUTE(elem, pObject, oID,                    StringObjectImpl, OID                    );
            	GET_ATTRIBUTE(elem, pObject, coordGeomRefs,          StringCollectionImpl, CoordGeomRefs          );
            	GET_ATTRIBUTE(elem, pObject, alignRef,               StringObjectImpl, AlignRef               );
            	GET_ATTRIBUTE(elem, pObject, alignStationName,       StringObjectImpl, AlignStationName       );
            	GET_ATTRIBUTE(elem, pObject, alignOffset,            DoubleObjectImpl, AlignOffset            );
            
            	//recursively get sub element value.
            	GET_Sub_Element(elem, pObject, FieldNote      );
            	GET_Sub_Element(elem, pObject, Feature        );
            
            	//get single node.
            	GET_Sub_Single_Element(elem, pObject, TargetPoint  );
            	GET_Sub_Single_Element(elem, pObject, OffsetVals   );
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            GradeModel* LoadGradeModel(xmlNodePtr elem)
            {
            	GradeModel* pObject = factory->createGradeModel();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, desc,  StringObjectImpl, Desc  );
            	GET_ATTRIBUTE(elem, pObject, name,  StringObjectImpl, Name  );
            	GET_ATTRIBUTE(elem, pObject, state, EnumStateTypeImpl, State );
            
            	//recursively get sub element value.
            	GET_Sub_Element(elem, pObject, GradeSurface  );
            	GET_Sub_Element(elem, pObject, Feature       );
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            TargetPoint* LoadTargetPoint(xmlNodePtr elem)
            {
            	TargetPoint* pObject = factory->createTargetPoint();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, name, StringObjectImpl, Name);
            	GET_ATTRIBUTE(elem, pObject, desc, StringObjectImpl, Desc);
            	GET_ATTRIBUTE(elem, pObject, code, StringObjectImpl, Code);
            	GET_ATTRIBUTE(elem, pObject, state, EnumStateTypeImpl, State);
            	GET_ATTRIBUTE(elem, pObject, pntRef, StringObjectImpl, PntRef);
            	GET_ATTRIBUTE(elem, pObject, featureRef, StringObjectImpl, FeatureRef);
            	GET_ATTRIBUTE(elem, pObject, pointGeometry, EnumPointGeometryTypeImpl, PointGeometry);
            	GET_ATTRIBUTE(elem, pObject, DTMAttribute, EnumDTMAttributeTypeImpl, DTMAttribute);
            	GET_ATTRIBUTE(elem, pObject, timeStamp, StringObjectImpl, TimeStamp);
            	GET_ATTRIBUTE(elem, pObject, role, EnumSurveyRoleTypeImpl, Role);
            	GET_ATTRIBUTE(elem, pObject, determinedTimeStamp, StringObjectImpl, DeterminedTimeStamp);
            	GET_ATTRIBUTE(elem, pObject, ellipsoidHeight, DoubleObjectImpl, EllipsoidHeight);
            	GET_ATTRIBUTE(elem, pObject, latitude, DoubleObjectImpl, Latitude);
            	GET_ATTRIBUTE(elem, pObject, longitude, DoubleObjectImpl, Longitude);
            	GET_ATTRIBUTE(elem, pObject, zone, StringObjectImpl, Zone);
            	GET_ATTRIBUTE(elem, pObject, northingStdError, DoubleObjectImpl, NorthingStdError);
            	GET_ATTRIBUTE(elem, pObject, eastingStdError, DoubleObjectImpl, EastingStdError);
            	GET_ATTRIBUTE(elem, pObject, elevationStdError, DoubleObjectImpl, ElevationStdError);
            
            	//recursively get sub element value.
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            	GET_TEXT_VALUE(elem, pObject, DoubleCollection);
            
            	return pObject;
            }
            
            Curve2* LoadCurve2(xmlNodePtr elem)
            {
            	Curve2* pObject = factory->createCurve2();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            
            	//recursively get sub element value.
            
            	//get single node.
            	GET_Sub_Single_Element(elem, pObject, Curve  );
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            DesignSpeed85th* LoadDesignSpeed85th(xmlNodePtr elem)
            {
            	DesignSpeed85th* pObject = factory->createDesignSpeed85th();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, staStart,  DoubleObjectImpl, StaStart  );
            	GET_ATTRIBUTE(elem, pObject, staEnd,    DoubleObjectImpl, StaEnd    );
            	GET_ATTRIBUTE(elem, pObject, sideofRoad, EnumSideofRoadTypeImpl, SideofRoad);
            	GET_ATTRIBUTE(elem, pObject, speed,     DoubleObjectImpl, Speed     );
            
            	//recursively get sub element value.
            	GET_Sub_Element(elem, pObject, Feature  );
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            PntList2D* LoadPntList2D(xmlNodePtr elem)
            {
            	PntList2D* pObject = factory->createPntList2D();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            
            	//recursively get sub element value.
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            	GET_TEXT_VALUE(elem, pObject, DoubleCollection);
            
            	return pObject;
            }
            
            GPSQCInfoLevel2* LoadGPSQCInfoLevel2(xmlNodePtr elem)
            {
            	GPSQCInfoLevel2* pObject = factory->createGPSQCInfoLevel2();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, covarianceXX,       DoubleObjectImpl, CovarianceXX       );
            	GET_ATTRIBUTE(elem, pObject, covarianceXY,       DoubleObjectImpl, CovarianceXY       );
            	GET_ATTRIBUTE(elem, pObject, covarianceXZ,       DoubleObjectImpl, CovarianceXZ       );
            	GET_ATTRIBUTE(elem, pObject, covarianceYY,       DoubleObjectImpl, CovarianceYY       );
            	GET_ATTRIBUTE(elem, pObject, covarianceYZ,       DoubleObjectImpl, CovarianceYZ       );
            	GET_ATTRIBUTE(elem, pObject, covarianceZZ,       DoubleObjectImpl, CovarianceZZ       );
            	GET_ATTRIBUTE(elem, pObject, GPSSolnType,        EnumGPSSolutionTypeEnumImpl, GPSSolnType        );
            	GET_ATTRIBUTE(elem, pObject, GPSSolnFreq,        EnumGPSSolutionFrequencyEnumImpl, GPSSolnFreq        );
            	GET_ATTRIBUTE(elem, pObject, RMS,                DoubleObjectImpl, RMS                );
            	GET_ATTRIBUTE(elem, pObject, ratio,              DoubleObjectImpl, Ratio              );
            	GET_ATTRIBUTE(elem, pObject, referenceVariance,  DoubleObjectImpl, ReferenceVariance  );
            	GET_ATTRIBUTE(elem, pObject, nbrSatellites,      IntegerObjectImpl, NbrSatellites      );
            	GET_ATTRIBUTE(elem, pObject, startTime,          DoubleObjectImpl, StartTime          );
            	GET_ATTRIBUTE(elem, pObject, stopTime,           DoubleObjectImpl, StopTime           );
            
            	//recursively get sub element value.
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            CrashHistory* LoadCrashHistory(xmlNodePtr elem)
            {
            	CrashHistory* pObject = factory->createCrashHistory();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, year,                  StringObjectImpl, Year                  );
            	GET_ATTRIBUTE(elem, pObject, location_1,            DoubleObjectImpl, Location_1            );
            	GET_ATTRIBUTE(elem, pObject, location_2,            DoubleObjectImpl, Location_2            );
            	GET_ATTRIBUTE(elem, pObject, severity,              EnumCrashSeverityTypeImpl, Severity              );
            	GET_ATTRIBUTE(elem, pObject, intersectionRelation,  EnumCrashIntersectionRelationImpl, IntersectionRelation  );
            	GET_ATTRIBUTE(elem, pObject, intersectionLocation,  DoubleObjectImpl, IntersectionLocation  );
            
            	//recursively get sub element value.
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            SourceData* LoadSourceData(xmlNodePtr elem)
            {
            	SourceData* pObject = factory->createSourceData();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            
            	//recursively get sub element value.
            	GET_Sub_Element(elem, pObject, Chain       );
            	GET_Sub_Element(elem, pObject, DataPoints  );
            	GET_Sub_Element(elem, pObject, Feature     );
            
            	//get single node.
            	GET_Sub_Single_Element(elem, pObject, PointFiles  );
            	GET_Sub_Single_Element(elem, pObject, Boundaries  );
            	GET_Sub_Single_Element(elem, pObject, Breaklines  );
            	GET_Sub_Single_Element(elem, pObject, Contours    );
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            PlanFeature* LoadPlanFeature(xmlNodePtr elem)
            {
            	PlanFeature* pObject = factory->createPlanFeature();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, desc,  StringObjectImpl, Desc  );
            	GET_ATTRIBUTE(elem, pObject, name,  StringObjectImpl, Name  );
            	GET_ATTRIBUTE(elem, pObject, state, EnumStateTypeImpl, State );
            
            	//recursively get sub element value.
            	GET_Sub_Element(elem, pObject, Location  );
            	GET_Sub_Element(elem, pObject, FieldNote );
            	GET_Sub_Element(elem, pObject, Feature   );
            
            	//get single node.
            	GET_Sub_Single_Element(elem, pObject, CoordGeom  );
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            
            Invert* LoadInvert(xmlNodePtr elem)
            {
            	Invert* pObject = factory->createInvert();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, desc,     StringObjectImpl, Desc     );
            	GET_ATTRIBUTE(elem, pObject, elev,     DoubleObjectImpl, Elev     );
            	GET_ATTRIBUTE(elem, pObject, flowDir,  EnumInOutImpl, FlowDir  );
            	GET_ATTRIBUTE(elem, pObject, refPipe,  StringObjectImpl, RefPipe  );
            
            	//recursively get sub element value.
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            Contours* LoadContours(xmlNodePtr elem)
            {
            	Contours* pObject = factory->createContours();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            
            	//recursively get sub element value.
            	GET_Sub_Element(elem, pObject, Contour  );
            	GET_Sub_Element(elem, pObject, Feature  );
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            Lanes* LoadLanes(xmlNodePtr elem)
            {
            	Lanes* pObject = factory->createLanes();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            
            	//recursively get sub element value.
            	GET_Sub_Element(elem, pObject, ThruLane            );
            	GET_Sub_Element(elem, pObject, PassingLane         );
            	GET_Sub_Element(elem, pObject, TurnLane            );
            	GET_Sub_Element(elem, pObject, TwoWayLeftTurnLane  );
            	GET_Sub_Element(elem, pObject, ClimbLane           );
            	GET_Sub_Element(elem, pObject, OffsetLane          );
            	GET_Sub_Element(elem, pObject, WideningLane        );
            	GET_Sub_Element(elem, pObject, Feature             );
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            ZoneHinge* LoadZoneHinge(xmlNodePtr elem)
            {
            	ZoneHinge* pObject = factory->createZoneHinge();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, staStart,         DoubleObjectImpl, StaStart         );
            	GET_ATTRIBUTE(elem, pObject, staEnd,           DoubleObjectImpl, StaEnd           );
            	GET_ATTRIBUTE(elem, pObject, hingeType,        EnumZoneHingeTypeImpl, HingeType        );
            	GET_ATTRIBUTE(elem, pObject, zonePriorityRef,  IntegerObjectImpl, ZonePriorityRef  );
            
            	//recursively get sub element value.
            	GET_Sub_Element(elem, pObject, Feature  );
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            End* LoadEnd(xmlNodePtr elem)
            {
            	End* pObject = factory->createEnd();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, name, StringObjectImpl, Name);
            	GET_ATTRIBUTE(elem, pObject, desc, StringObjectImpl, Desc);
            	GET_ATTRIBUTE(elem, pObject, code, StringObjectImpl, Code);
            	GET_ATTRIBUTE(elem, pObject, state, EnumStateTypeImpl, State);
            	GET_ATTRIBUTE(elem, pObject, pntRef, StringObjectImpl, PntRef);
            	GET_ATTRIBUTE(elem, pObject, featureRef, StringObjectImpl, FeatureRef);
            	GET_ATTRIBUTE(elem, pObject, pointGeometry, EnumPointGeometryTypeImpl, PointGeometry);
            	GET_ATTRIBUTE(elem, pObject, DTMAttribute, EnumDTMAttributeTypeImpl, DTMAttribute);
            	GET_ATTRIBUTE(elem, pObject, timeStamp, StringObjectImpl, TimeStamp);
            	GET_ATTRIBUTE(elem, pObject, role, EnumSurveyRoleTypeImpl, Role);
            	GET_ATTRIBUTE(elem, pObject, determinedTimeStamp, StringObjectImpl, DeterminedTimeStamp);
            	GET_ATTRIBUTE(elem, pObject, ellipsoidHeight, DoubleObjectImpl, EllipsoidHeight);
            	GET_ATTRIBUTE(elem, pObject, latitude, DoubleObjectImpl, Latitude);
            	GET_ATTRIBUTE(elem, pObject, longitude, DoubleObjectImpl, Longitude);
            	GET_ATTRIBUTE(elem, pObject, zone, StringObjectImpl, Zone);
            	GET_ATTRIBUTE(elem, pObject, northingStdError, DoubleObjectImpl, NorthingStdError);
            	GET_ATTRIBUTE(elem, pObject, eastingStdError, DoubleObjectImpl, EastingStdError);
            	GET_ATTRIBUTE(elem, pObject, elevationStdError, DoubleObjectImpl, ElevationStdError);
            
            	//recursively get sub element value.
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            	GET_TEXT_VALUE(elem, pObject, DoubleCollection);
            
            	return pObject;
            }
            
            
            DataPoints* LoadDataPoints(xmlNodePtr elem)
            {
            	DataPoints* pObject = factory->createDataPoints();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, name,           StringObjectImpl, Name           );
            	GET_ATTRIBUTE(elem, pObject, desc,           StringObjectImpl, Desc           );
            	GET_ATTRIBUTE(elem, pObject, code,           StringObjectImpl, Code           );
            	GET_ATTRIBUTE(elem, pObject, state,          EnumStateTypeImpl, State          );
            	GET_ATTRIBUTE(elem, pObject, pntRef,         StringObjectImpl, PntRef         );
            	GET_ATTRIBUTE(elem, pObject, pointGeometry,  EnumPointGeometryTypeImpl, PointGeometry  );
            	GET_ATTRIBUTE(elem, pObject, DTMAttribute,   EnumDTMAttributeTypeImpl, DTMAttribute   );
            
            	//recursively get sub element value.
            	GET_Sub_Element(elem, pObject, PntList3D  );
            	GET_Sub_Element(elem, pObject, Feature    );
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
           
            Contour* LoadContour(xmlNodePtr elem)
            {
            	Contour* pObject = factory->createContour();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, elev,  DoubleObjectImpl, Elev  );
            
            	//recursively get sub element value.
            	GET_Sub_Element(elem, pObject, Feature  );
            
            	//get single node.
            	GET_Sub_Single_Element(elem, pObject, PntList2D  );
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            AdministrativeDate* LoadAdministrativeDate(xmlNodePtr elem)
            {
            	AdministrativeDate* pObject = factory->createAdministrativeDate();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, adminDateType,  StringObjectImpl, AdminDateType  );
            	GET_ATTRIBUTE(elem, pObject, adminDate,      StringObjectImpl, AdminDate      );
            
            	//recursively get sub element value.
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            SurveyMonument* LoadSurveyMonument(xmlNodePtr elem)
            {
            	SurveyMonument* pObject = factory->createSurveyMonument();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, mntRef,             StringObjectImpl, MntRef             );
            	GET_ATTRIBUTE(elem, pObject, purpose,            StringObjectImpl, Purpose            );
            	GET_ATTRIBUTE(elem, pObject, state,              StringObjectImpl, State              );
            	GET_ATTRIBUTE(elem, pObject, adoptedSurvey,      StringObjectImpl, AdoptedSurvey      );
            	GET_ATTRIBUTE(elem, pObject, disturbedMonument,  StringObjectImpl, DisturbedMonument  );
            	GET_ATTRIBUTE(elem, pObject, disturbedDate,      StringObjectImpl, DisturbedDate      );
            	GET_ATTRIBUTE(elem, pObject, disturbedAnnotation, StringObjectImpl, DisturbedAnnotation);
            	GET_ATTRIBUTE(elem, pObject, replacedMonument,   StringObjectImpl, ReplacedMonument   );
            	GET_ATTRIBUTE(elem, pObject, replacedDate,       StringObjectImpl, ReplacedDate       );
            	GET_ATTRIBUTE(elem, pObject, replacedAnnotation, StringObjectImpl, ReplacedAnnotation );
            
            	//recursively get sub element value.
            	GET_Sub_Element(elem, pObject, Feature  );
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            ObstructionOffset* LoadObstructionOffset(xmlNodePtr elem)
            {
            	ObstructionOffset* pObject = factory->createObstructionOffset();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, staStart,  DoubleObjectImpl, StaStart  );
            	GET_ATTRIBUTE(elem, pObject, staEnd,    DoubleObjectImpl, StaEnd    );
            	GET_ATTRIBUTE(elem, pObject, offset,    DoubleObjectImpl, Offset    );
            	GET_ATTRIBUTE(elem, pObject, sideofRoad, EnumSideofRoadTypeImpl, SideofRoad);
            
            	//recursively get sub element value.
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            GPSSetup* LoadGPSSetup(xmlNodePtr elem)
            {
            	GPSSetup* pObject = factory->createGPSSetup();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, id,                   StringObjectImpl, Id                   );
            	GET_ATTRIBUTE(elem, pObject, antennaHeight,        DoubleObjectImpl, AntennaHeight        );
            	GET_ATTRIBUTE(elem, pObject, stationName,          StringObjectImpl, StationName          );
            	GET_ATTRIBUTE(elem, pObject, GPSAntennaDetailsID,  StringObjectImpl, GPSAntennaDetailsID  );
            	GET_ATTRIBUTE(elem, pObject, GPSReceiverDetailsID, StringObjectImpl, GPSReceiverDetailsID );
            	GET_ATTRIBUTE(elem, pObject, observationDataLink,  StringObjectImpl, ObservationDataLink  );
            	GET_ATTRIBUTE(elem, pObject, stationDescription,   StringObjectImpl, StationDescription   );
            	GET_ATTRIBUTE(elem, pObject, startTime,            DoubleObjectImpl, StartTime            );
            	GET_ATTRIBUTE(elem, pObject, stopTime,             DoubleObjectImpl, StopTime             );
            
            	//recursively get sub element value.
            	GET_Sub_Element(elem, pObject, TargetSetup  );
            	GET_Sub_Element(elem, pObject, FieldNote    );
            	GET_Sub_Element(elem, pObject, Feature      );
            
            	//get single node.
            	GET_Sub_Single_Element(elem, pObject, GPSPosition  );
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            Backsight* LoadBacksight(xmlNodePtr elem)
            {
            	Backsight* pObject = factory->createBacksight();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, id,            StringObjectImpl, Id            );
            	GET_ATTRIBUTE(elem, pObject, azimuth,       DoubleObjectImpl, Azimuth       );
            	GET_ATTRIBUTE(elem, pObject, targetHeight,  DoubleObjectImpl, TargetHeight  );
            	GET_ATTRIBUTE(elem, pObject, circle,        DoubleObjectImpl, Circle        );
            	GET_ATTRIBUTE(elem, pObject, setupID,       StringObjectImpl, SetupID       );
            
            	//recursively get sub element value.
            	GET_Sub_Element(elem, pObject, FieldNote  );
            	GET_Sub_Element(elem, pObject, Feature    );
            
            	//get single node.
            	GET_Sub_Single_Element(elem, pObject, BacksightPoint  );
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            PointType* LoadPointType(xmlNodePtr elem)
            {
            	PointType* pObject = factory->createPointType();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, name,                 StringObjectImpl, Name                 );
            	GET_ATTRIBUTE(elem, pObject, desc,                 StringObjectImpl, Desc                 );
            	GET_ATTRIBUTE(elem, pObject, code,                 StringObjectImpl, Code                 );
            	GET_ATTRIBUTE(elem, pObject, state,                EnumStateTypeImpl, State                );
            	GET_ATTRIBUTE(elem, pObject, pntRef,               StringObjectImpl, PntRef               );
            	GET_ATTRIBUTE(elem, pObject, featureRef,           StringObjectImpl, FeatureRef           );
            	GET_ATTRIBUTE(elem, pObject, pointGeometry,        EnumPointGeometryTypeImpl, PointGeometry        );
            	GET_ATTRIBUTE(elem, pObject, DTMAttribute,         EnumDTMAttributeTypeImpl, DTMAttribute         );
            	GET_ATTRIBUTE(elem, pObject, timeStamp,            StringObjectImpl, TimeStamp            );
            	GET_ATTRIBUTE(elem, pObject, role,                 EnumSurveyRoleTypeImpl, Role                 );
            	GET_ATTRIBUTE(elem, pObject, determinedTimeStamp,  StringObjectImpl, DeterminedTimeStamp  );
            	GET_ATTRIBUTE(elem, pObject, ellipsoidHeight,      DoubleObjectImpl, EllipsoidHeight      );
            	GET_ATTRIBUTE(elem, pObject, latitude,             DoubleObjectImpl, Latitude             );
            	GET_ATTRIBUTE(elem, pObject, longitude,            DoubleObjectImpl, Longitude            );
            	GET_ATTRIBUTE(elem, pObject, zone,                 StringObjectImpl, Zone                 );
            	GET_ATTRIBUTE(elem, pObject, northingStdError,     DoubleObjectImpl, NorthingStdError     );
            	GET_ATTRIBUTE(elem, pObject, eastingStdError,      DoubleObjectImpl, EastingStdError      );
            	GET_ATTRIBUTE(elem, pObject, elevationStdError,    DoubleObjectImpl, ElevationStdError    );
            
            	//recursively get sub element value.
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            	GET_TEXT_VALUE(elem, pObject, DoubleCollection);
            
            	return pObject;
            }
            
            CrossSects* LoadCrossSects(xmlNodePtr elem)
            {
            	CrossSects* pObject = factory->createCrossSects();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, desc,             StringObjectImpl, Desc             );
            	GET_ATTRIBUTE(elem, pObject, name,             StringObjectImpl, Name             );
            	GET_ATTRIBUTE(elem, pObject, state,            EnumStateTypeImpl, State            );
            	GET_ATTRIBUTE(elem, pObject, calcMethod,       EnumXsVolCalcMethodTypeImpl, CalcMethod       );
            	GET_ATTRIBUTE(elem, pObject, curveCorrection,  BooleanObjectImpl, CurveCorrection  );
            	GET_ATTRIBUTE(elem, pObject, swellFactor,      DoubleObjectImpl, SwellFactor      );
            	GET_ATTRIBUTE(elem, pObject, shrinkFactor,     DoubleObjectImpl, ShrinkFactor     );
            
            	//recursively get sub element value.
            	GET_Sub_Element(elem, pObject, CrossSect  );
            	GET_Sub_Element(elem, pObject, Feature    );
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            Surface* LoadSurface(xmlNodePtr elem)
            {
            	Surface* pObject = factory->createSurface();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, name,  StringObjectImpl, Name  );
            	GET_ATTRIBUTE(elem, pObject, desc,  StringObjectImpl, Desc  );
            	GET_ATTRIBUTE(elem, pObject, OID,   StringObjectImpl, OID   );
            	GET_ATTRIBUTE(elem, pObject, state, EnumStateTypeImpl, State );
            
            	//recursively get sub element value.
            	GET_Sub_Element(elem, pObject, Feature  );
            
            	//get single node.
            	GET_Sub_Single_Element(elem, pObject, SourceData  );
            	GET_Sub_Single_Element(elem, pObject, Definition  );
            	GET_Sub_Single_Element(elem, pObject, Watersheds  );
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            Curb* LoadCurb(xmlNodePtr elem)
            {
            	Curb* pObject = factory->createCurb();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, staStart,  DoubleObjectImpl, StaStart  );
            	GET_ATTRIBUTE(elem, pObject, staEnd,    DoubleObjectImpl, StaEnd    );
            	GET_ATTRIBUTE(elem, pObject, sideofRoad, EnumSideofRoadTypeImpl, SideofRoad);
            	GET_ATTRIBUTE(elem, pObject, type,      EnumCurbTypeImpl, Type      );
            
            	//recursively get sub element value.
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            
            WideningLane* LoadWideningLane(xmlNodePtr elem)
            {
            	WideningLane* pObject = factory->createWideningLane();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, staStart,           DoubleObjectImpl, StaStart           );
            	GET_ATTRIBUTE(elem, pObject, staEnd,             DoubleObjectImpl, StaEnd             );
            	GET_ATTRIBUTE(elem, pObject, beginFullWidthSta,  DoubleObjectImpl, BeginFullWidthSta  );
            	GET_ATTRIBUTE(elem, pObject, endFullWidthSta,    DoubleObjectImpl, EndFullWidthSta    );
            	GET_ATTRIBUTE(elem, pObject, offset,             DoubleObjectImpl, Offset             );
            	GET_ATTRIBUTE(elem, pObject, widening,           DoubleObjectImpl, Widening           );
            	GET_ATTRIBUTE(elem, pObject, width,              DoubleObjectImpl, Width              );
            	GET_ATTRIBUTE(elem, pObject, sideofRoad,         EnumSideofRoadTypeImpl, SideofRoad         );
            
            	//recursively get sub element value.
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            SurveyorCertificate* LoadSurveyorCertificate(xmlNodePtr elem)
            {
            	SurveyorCertificate* pObject = factory->createSurveyorCertificate();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, name,             StringObjectImpl, Name             );
            	GET_ATTRIBUTE(elem, pObject, certificateType,  StringObjectImpl, CertificateType  );
            	GET_ATTRIBUTE(elem, pObject, textCertificate,  StringObjectImpl, TextCertificate  );
            	GET_ATTRIBUTE(elem, pObject, surveyDate,       StringObjectImpl, SurveyDate       );
            
            	//recursively get sub element value.
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            P* LoadP(xmlNodePtr elem)
            {
            	P* pObject = factory->createP();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, name, StringObjectImpl, Name);
            	GET_ATTRIBUTE(elem, pObject, desc, StringObjectImpl, Desc);
            	GET_ATTRIBUTE(elem, pObject, code, StringObjectImpl, Code);
            	GET_ATTRIBUTE(elem, pObject, state, EnumStateTypeImpl, State);
            	GET_ATTRIBUTE(elem, pObject, pntRef, StringObjectImpl, PntRef);
            	GET_ATTRIBUTE(elem, pObject, featureRef, StringObjectImpl, FeatureRef);
            	GET_ATTRIBUTE(elem, pObject, pointGeometry, EnumPointGeometryTypeImpl, PointGeometry);
            	GET_ATTRIBUTE(elem, pObject, DTMAttribute, EnumDTMAttributeTypeImpl, DTMAttribute);
            	GET_ATTRIBUTE(elem, pObject, timeStamp, StringObjectImpl, TimeStamp);
            	GET_ATTRIBUTE(elem, pObject, role, EnumSurveyRoleTypeImpl, Role);
            	GET_ATTRIBUTE(elem, pObject, determinedTimeStamp, StringObjectImpl, DeterminedTimeStamp);
            	GET_ATTRIBUTE(elem, pObject, ellipsoidHeight, DoubleObjectImpl, EllipsoidHeight);
            	GET_ATTRIBUTE(elem, pObject, latitude, DoubleObjectImpl, Latitude);
            	GET_ATTRIBUTE(elem, pObject, longitude, DoubleObjectImpl, Longitude);
            	GET_ATTRIBUTE(elem, pObject, zone, StringObjectImpl, Zone);
            	GET_ATTRIBUTE(elem, pObject, northingStdError, DoubleObjectImpl, NorthingStdError);
            	GET_ATTRIBUTE(elem, pObject, eastingStdError, DoubleObjectImpl, EastingStdError);
            	GET_ATTRIBUTE(elem, pObject, elevationStdError, DoubleObjectImpl, ElevationStdError);
            	GET_ATTRIBUTE(elem, pObject, id,  UIntegerObjectImpl, Id  );
            
            	//recursively get sub element value.
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            	GET_TEXT_VALUE(elem, pObject, DoubleCollection);
            
            	return pObject;
            }
            
            
            TwoWayLeftTurnLane* LoadTwoWayLeftTurnLane(xmlNodePtr elem)
            {
            	TwoWayLeftTurnLane* pObject = factory->createTwoWayLeftTurnLane();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, staStart,           DoubleObjectImpl, StaStart           );
            	GET_ATTRIBUTE(elem, pObject, staEnd,             DoubleObjectImpl, StaEnd             );
            	GET_ATTRIBUTE(elem, pObject, beginFullWidthSta,  DoubleObjectImpl, BeginFullWidthSta  );
            	GET_ATTRIBUTE(elem, pObject, endFullWidthSta,    DoubleObjectImpl, EndFullWidthSta    );
            	GET_ATTRIBUTE(elem, pObject, startOffset,        DoubleObjectImpl, StartOffset        );
            	GET_ATTRIBUTE(elem, pObject, endOffset,          DoubleObjectImpl, EndOffset          );
            	GET_ATTRIBUTE(elem, pObject, width,              DoubleObjectImpl, Width              );
            	GET_ATTRIBUTE(elem, pObject, sideofRoad,         EnumSideofRoadTypeImpl, SideofRoad         );
            
            	//recursively get sub element value.
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            RawObservation* LoadRawObservation(xmlNodePtr elem)
            {
            	RawObservation* pObject = factory->createRawObservation();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, setupID, StringObjectImpl, SetupID);
            	GET_ATTRIBUTE(elem, pObject, targetSetupID, StringObjectImpl, TargetSetupID);
            	GET_ATTRIBUTE(elem, pObject, setID, StringObjectImpl, SetID);
            	GET_ATTRIBUTE(elem, pObject, purpose, EnumPurposeTypeImpl, Purpose);
            	GET_ATTRIBUTE(elem, pObject, targetHeight, DoubleObjectImpl, TargetHeight);
            	GET_ATTRIBUTE(elem, pObject, horizAngle, DoubleObjectImpl, HorizAngle);
            	GET_ATTRIBUTE(elem, pObject, slopeDistance, DoubleObjectImpl, SlopeDistance);
            	GET_ATTRIBUTE(elem, pObject, zenithAngle, DoubleObjectImpl, ZenithAngle);
            	GET_ATTRIBUTE(elem, pObject, horizDistance, DoubleObjectImpl, HorizDistance);
            	GET_ATTRIBUTE(elem, pObject, vertDistance, DoubleObjectImpl, VertDistance);
            	GET_ATTRIBUTE(elem, pObject, azimuth, DoubleObjectImpl, Azimuth);
            	GET_ATTRIBUTE(elem, pObject, unused, BooleanObjectImpl, Unused);
            	GET_ATTRIBUTE(elem, pObject, directFace, BooleanObjectImpl, DirectFace);
            	GET_ATTRIBUTE(elem, pObject, coordGeomRefs, StringCollectionImpl, CoordGeomRefs);
            	GET_ATTRIBUTE(elem, pObject, timeStamp, StringObjectImpl, TimeStamp);
            	GET_ATTRIBUTE(elem, pObject, alignRef, StringObjectImpl, AlignRef);
            	GET_ATTRIBUTE(elem, pObject, alignStationName, StringObjectImpl, AlignStationName);
            	GET_ATTRIBUTE(elem, pObject, alignOffset, DoubleObjectImpl, AlignOffset);
            	GET_ATTRIBUTE(elem, pObject, upperStadia, DoubleObjectImpl, UpperStadia);
            	GET_ATTRIBUTE(elem, pObject, rod, DoubleObjectImpl, Rod);
            	GET_ATTRIBUTE(elem, pObject, lowerStadia, DoubleObjectImpl, LowerStadia);
            	GET_ATTRIBUTE(elem, pObject, circlePositionSet, DoubleObjectImpl, CirclePositionSet);
            	GET_ATTRIBUTE(elem, pObject, status, EnumObservationStatusTypeImpl, Status);
            
            	//recursively get sub element value.
                GET_Sub_Element(elem, pObject, FieldNote           );
                GET_Sub_Element(elem, pObject, Feature             );
            
            	//get single node.
            	GET_Sub_Single_Element(elem, pObject, TargetPoint  );
            	GET_Sub_Single_Element(elem, pObject, OffsetVals   );
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            TargetSetup* LoadTargetSetup(xmlNodePtr elem)
            {
            	TargetSetup* pObject = factory->createTargetSetup();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, id,                   StringObjectImpl, Id                   );
            	GET_ATTRIBUTE(elem, pObject, targetHeight,         DoubleObjectImpl, TargetHeight         );
            	GET_ATTRIBUTE(elem, pObject, edmTargetVertOffset,  DoubleObjectImpl, EdmTargetVertOffset  );
            	GET_ATTRIBUTE(elem, pObject, prismConstant,        DoubleObjectImpl, PrismConstant        );
            
            	//recursively get sub element value.
            	GET_Sub_Element(elem, pObject, FieldNote  );
            	GET_Sub_Element(elem, pObject, Feature    );
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            Channel* LoadChannel(xmlNodePtr elem)
            {
            	Channel* pObject = factory->createChannel();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, height,       DoubleObjectImpl, Height       );
            	GET_ATTRIBUTE(elem, pObject, widthTop,     DoubleObjectImpl, WidthTop     );
            	GET_ATTRIBUTE(elem, pObject, widthBottom,  DoubleObjectImpl, WidthBottom  );
            	GET_ATTRIBUTE(elem, pObject, desc,         StringObjectImpl, Desc         );
            	GET_ATTRIBUTE(elem, pObject, hazenWilliams, DoubleObjectImpl, HazenWilliams);
            	GET_ATTRIBUTE(elem, pObject, mannings,     DoubleObjectImpl, Mannings     );
            	GET_ATTRIBUTE(elem, pObject, material,     StringObjectImpl, Material     );
            	GET_ATTRIBUTE(elem, pObject, thickness,    DoubleObjectImpl, Thickness    );
            
            	//recursively get sub element value.
            	GET_Sub_Element(elem, pObject, Feature  );
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            PipeFlow* LoadPipeFlow(xmlNodePtr elem)
            {
            	PipeFlow* pObject = factory->createPipeFlow();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, flowIn,            DoubleObjectImpl, FlowIn            );
            	GET_ATTRIBUTE(elem, pObject, areaCatchment,     DoubleObjectImpl, AreaCatchment     );
            	GET_ATTRIBUTE(elem, pObject, desc,              StringObjectImpl, Desc              );
            	GET_ATTRIBUTE(elem, pObject, depthCritical,     DoubleObjectImpl, DepthCritical     );
            	GET_ATTRIBUTE(elem, pObject, hglDown,           DoubleObjectImpl, HglDown           );
            	GET_ATTRIBUTE(elem, pObject, hglUp,             DoubleObjectImpl, HglUp             );
            	GET_ATTRIBUTE(elem, pObject, intensity,         DoubleObjectImpl, Intensity         );
            	GET_ATTRIBUTE(elem, pObject, runoffCoeff,       DoubleObjectImpl, RunoffCoeff       );
            	GET_ATTRIBUTE(elem, pObject, slopeCritical,     DoubleObjectImpl, SlopeCritical     );
            	GET_ATTRIBUTE(elem, pObject, timeInlet,         DoubleObjectImpl, TimeInlet         );
            	GET_ATTRIBUTE(elem, pObject, velocityCritical,  DoubleObjectImpl, VelocityCritical  );
            
            	//recursively get sub element value.
            	GET_Sub_Element(elem, pObject, Feature  );
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            PointFile* LoadPointFile(xmlNodePtr elem)
            {
            	PointFile* pObject = factory->createPointFile();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, fileName,  StringObjectImpl, FileName  );
            	GET_ATTRIBUTE(elem, pObject, fileType,  StringObjectImpl, FileType  );
            	GET_ATTRIBUTE(elem, pObject, fileFormat, StringObjectImpl, FileFormat);
            
            	//recursively get sub element value.
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            BacksightPoint* LoadBacksightPoint(xmlNodePtr elem)
            {
            	BacksightPoint* pObject = factory->createBacksightPoint();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, name, StringObjectImpl, Name);
            	GET_ATTRIBUTE(elem, pObject, desc, StringObjectImpl, Desc);
            	GET_ATTRIBUTE(elem, pObject, code, StringObjectImpl, Code);
            	GET_ATTRIBUTE(elem, pObject, state, EnumStateTypeImpl, State);
            	GET_ATTRIBUTE(elem, pObject, pntRef, StringObjectImpl, PntRef);
            	GET_ATTRIBUTE(elem, pObject, featureRef, StringObjectImpl, FeatureRef);
            	GET_ATTRIBUTE(elem, pObject, pointGeometry, EnumPointGeometryTypeImpl, PointGeometry);
            	GET_ATTRIBUTE(elem, pObject, DTMAttribute, EnumDTMAttributeTypeImpl, DTMAttribute);
            	GET_ATTRIBUTE(elem, pObject, timeStamp, StringObjectImpl, TimeStamp);
            	GET_ATTRIBUTE(elem, pObject, role, EnumSurveyRoleTypeImpl, Role);
            	GET_ATTRIBUTE(elem, pObject, determinedTimeStamp, StringObjectImpl, DeterminedTimeStamp);
            	GET_ATTRIBUTE(elem, pObject, ellipsoidHeight, DoubleObjectImpl, EllipsoidHeight);
            	GET_ATTRIBUTE(elem, pObject, latitude, DoubleObjectImpl, Latitude);
            	GET_ATTRIBUTE(elem, pObject, longitude, DoubleObjectImpl, Longitude);
            	GET_ATTRIBUTE(elem, pObject, zone, StringObjectImpl, Zone);
            	GET_ATTRIBUTE(elem, pObject, northingStdError, DoubleObjectImpl, NorthingStdError);
            	GET_ATTRIBUTE(elem, pObject, eastingStdError, DoubleObjectImpl, EastingStdError);
            	GET_ATTRIBUTE(elem, pObject, elevationStdError, DoubleObjectImpl, ElevationStdError);
            
            	//recursively get sub element value.
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            	GET_TEXT_VALUE(elem, pObject, DoubleCollection);
            
            	return pObject;
            }
            
            Personnel* LoadPersonnel(xmlNodePtr elem)
            {
            	Personnel* pObject = factory->createPersonnel();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, name,     StringObjectImpl, Name     );
            	GET_ATTRIBUTE(elem, pObject, role,     StringObjectImpl, Role     );
            	GET_ATTRIBUTE(elem, pObject, regType,  StringObjectImpl, RegType  );
            	GET_ATTRIBUTE(elem, pObject, regNumber, StringObjectImpl, RegNumber);
            
            	//recursively get sub element value.
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            Monument* LoadMonument(xmlNodePtr elem)
            {
            	Monument* pObject = factory->createMonument();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, name,              StringObjectImpl, Name              );
            	GET_ATTRIBUTE(elem, pObject, pntRef,            StringObjectImpl, PntRef            );
            	GET_ATTRIBUTE(elem, pObject, featureRef,        StringObjectImpl, FeatureRef        );
            	GET_ATTRIBUTE(elem, pObject, desc,              StringObjectImpl, Desc              );
            	GET_ATTRIBUTE(elem, pObject, state,             StringObjectImpl, State             );
            	GET_ATTRIBUTE(elem, pObject, type,              StringObjectImpl, Type              );
            	GET_ATTRIBUTE(elem, pObject, condition,         StringObjectImpl, Condition         );
            	GET_ATTRIBUTE(elem, pObject, category,          EnumMonumentCategoryImpl, Category          );
            	GET_ATTRIBUTE(elem, pObject, beacon,            EnumBeaconTypeImpl, Beacon            );
            	GET_ATTRIBUTE(elem, pObject, beaconProtection,  EnumBeaconProtectionTypeImpl, BeaconProtection  );
            	GET_ATTRIBUTE(elem, pObject, oID,               StringObjectImpl, OID               );
            	GET_ATTRIBUTE(elem, pObject, reference,         StringObjectImpl, Reference         );
            	GET_ATTRIBUTE(elem, pObject, originSurvey,      StringObjectImpl, OriginSurvey      );
            
            	//recursively get sub element value.
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            Amendment* LoadAmendment(xmlNodePtr elem)
            {
            	Amendment* pObject = factory->createAmendment();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, dealingNumber,  StringObjectImpl, DealingNumber  );
            	GET_ATTRIBUTE(elem, pObject, amendmentDate,  StringObjectImpl, AmendmentDate  );
            	GET_ATTRIBUTE(elem, pObject, comments,       StringObjectImpl, Comments       );
            
            	//recursively get sub element value.
            	GET_Sub_Element(elem, pObject, AmendmentItem  );
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            InstrumentDetails* LoadInstrumentDetails(xmlNodePtr elem)
            {
            	InstrumentDetails* pObject = factory->createInstrumentDetails();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, id,                   StringObjectImpl, Id                   );
            	GET_ATTRIBUTE(elem, pObject, edmAccuracyConstant,  DoubleObjectImpl, EdmAccuracyConstant  );
            	GET_ATTRIBUTE(elem, pObject, edmAccuracyppm,       DoubleObjectImpl, EdmAccuracyppm       );
            	GET_ATTRIBUTE(elem, pObject, edmVertOffset,        DoubleObjectImpl, EdmVertOffset        );
            	GET_ATTRIBUTE(elem, pObject, horizAnglePrecision,  DoubleObjectImpl, HorizAnglePrecision  );
            	GET_ATTRIBUTE(elem, pObject, manufacturer,         StringObjectImpl, Manufacturer         );
            	GET_ATTRIBUTE(elem, pObject, model,                StringObjectImpl, Model                );
            	GET_ATTRIBUTE(elem, pObject, serialNumber,         StringObjectImpl, SerialNumber         );
            	GET_ATTRIBUTE(elem, pObject, zenithAnglePrecision, DoubleObjectImpl, ZenithAnglePrecision );
            	GET_ATTRIBUTE(elem, pObject, carrierWavelength,    DoubleObjectImpl, CarrierWavelength    );
            	GET_ATTRIBUTE(elem, pObject, refractiveIndex,      DoubleObjectImpl, RefractiveIndex      );
            	GET_ATTRIBUTE(elem, pObject, horizCollimation,     DoubleObjectImpl, HorizCollimation     );
            	GET_ATTRIBUTE(elem, pObject, vertCollimation,      DoubleObjectImpl, VertCollimation      );
            	GET_ATTRIBUTE(elem, pObject, stadiaFactor,         DoubleObjectImpl, StadiaFactor         );
            
            	//recursively get sub element value.
            
            	//get single node.
            	GET_Sub_Single_Element(elem, pObject, Corrections  );
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            StructFlow* LoadStructFlow(xmlNodePtr elem)
            {
            	StructFlow* pObject = factory->createStructFlow();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, lossIn,           DoubleObjectImpl, LossIn           );
            	GET_ATTRIBUTE(elem, pObject, lossOut,          DoubleObjectImpl, LossOut          );
            	GET_ATTRIBUTE(elem, pObject, desc,             StringObjectImpl, Desc             );
            	GET_ATTRIBUTE(elem, pObject, hglIn,            DoubleObjectImpl, HglIn            );
            	GET_ATTRIBUTE(elem, pObject, hglOut,           DoubleObjectImpl, HglOut           );
            	GET_ATTRIBUTE(elem, pObject, localDepression,  DoubleObjectImpl, LocalDepression  );
            	GET_ATTRIBUTE(elem, pObject, slopeSurf,        DoubleObjectImpl, SlopeSurf        );
            	GET_ATTRIBUTE(elem, pObject, slopeGutter,      DoubleObjectImpl, SlopeGutter      );
            	GET_ATTRIBUTE(elem, pObject, widthGutter,      DoubleObjectImpl, WidthGutter      );
            
            	//recursively get sub element value.
            	GET_Sub_Element(elem, pObject, Feature  );
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            LandXML* LoadLandXML(xmlNodePtr elem)
            {
            	LandXML* pObject = factory->createLandXML();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, date,       StringObjectImpl, Date       );
            	GET_ATTRIBUTE(elem, pObject, time,       StringObjectImpl, Time       );
            	GET_ATTRIBUTE(elem, pObject, version,    StringObjectImpl, Version    );
            	GET_ATTRIBUTE(elem, pObject, language,   StringObjectImpl, Language   );
            	GET_ATTRIBUTE(elem, pObject, readOnly,   BooleanObjectImpl, ReadOnly   );
            	GET_ATTRIBUTE(elem, pObject, LandXMLId,  IntegerObjectImpl, LandXMLId  );
            	GET_ATTRIBUTE(elem, pObject, crc,        IntegerObjectImpl, Crc        );
            
            	//recursively get sub element value.
            	GET_Sub_Element(elem, pObject, CgPoints           );
            	GET_Sub_Element(elem, pObject, Alignments         );
            	GET_Sub_Element(elem, pObject, Amendment          );
            	GET_Sub_Element(elem, pObject, GradeModel         );
            	GET_Sub_Element(elem, pObject, Monuments          );
            	GET_Sub_Element(elem, pObject, Parcels            );
            	GET_Sub_Element(elem, pObject, PlanFeatures       );
            	GET_Sub_Element(elem, pObject, PipeNetworks       );
            	GET_Sub_Element(elem, pObject, Roadways           );
            	GET_Sub_Element(elem, pObject, Surfaces           );
            	GET_Sub_Element(elem, pObject, Survey             );
            	GET_Sub_Element(elem, pObject, FeatureDictionary  );
            
            	//get single node.
            	GET_Sub_Single_Element(elem, pObject, Units             );
            	GET_Sub_Single_Element(elem, pObject, CoordinateSystem  );
            	GET_Sub_Single_Element(elem, pObject, Project           );
            	GET_Sub_Single_Element(elem, pObject, Application       );

            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            Faces* LoadFaces(xmlNodePtr elem)
            {
            	Faces* pObject = factory->createFaces();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, desc,  StringObjectImpl, Desc  );
            	GET_ATTRIBUTE(elem, pObject, name,  StringObjectImpl, Name  );
            	GET_ATTRIBUTE(elem, pObject, state, EnumStateTypeImpl, State );
            
            	//recursively get sub element value.
            	GET_Sub_Element(elem, pObject, F        );
            	GET_Sub_Element(elem, pObject, Feature  );
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            DecisionSightDistance* LoadDecisionSightDistance(xmlNodePtr elem)
            {
            	DecisionSightDistance* pObject = factory->createDecisionSightDistance();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, station,  DoubleObjectImpl, Station  );
            	GET_ATTRIBUTE(elem, pObject, maneuver, EnumManeuverTypeImpl, Maneuver );
            
            	//recursively get sub element value.
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            Roadways* LoadRoadways(xmlNodePtr elem)
            {
            	Roadways* pObject = factory->createRoadways();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, name,  StringObjectImpl, Name  );
            	GET_ATTRIBUTE(elem, pObject, desc,  StringObjectImpl, Desc  );
            	GET_ATTRIBUTE(elem, pObject, state, EnumStateTypeImpl, State );
            
            	//recursively get sub element value.
            	GET_Sub_Element(elem, pObject, Roadway        );
            	GET_Sub_Element(elem, pObject, Intersections  );
            	GET_Sub_Element(elem, pObject, Feature        );
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            FeatureDictionary* LoadFeatureDictionary(xmlNodePtr elem)
            {
            	FeatureDictionary* pObject = factory->createFeatureDictionary();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, name,     StringObjectImpl, Name     );
            	GET_ATTRIBUTE(elem, pObject, version,  StringObjectImpl, Version  );
            
            	//recursively get sub element value.
            	GET_Sub_Element(elem, pObject, DocFileRef  );
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            ZoneWidth* LoadZoneWidth(xmlNodePtr elem)
            {
            	ZoneWidth* pObject = factory->createZoneWidth();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, staStart,  DoubleObjectImpl, StaStart  );
            	GET_ATTRIBUTE(elem, pObject, staEnd,    DoubleObjectImpl, StaEnd    );
            	GET_ATTRIBUTE(elem, pObject, startWidth, DoubleObjectImpl, StartWidth);
            	GET_ATTRIBUTE(elem, pObject, endWidth,  DoubleObjectImpl, EndWidth  );
            
            	//recursively get sub element value.
            	GET_Sub_Element(elem, pObject, Feature  );
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            ParaCurve* LoadParaCurve(xmlNodePtr elem)
            {
            	ParaCurve* pObject = factory->createParaCurve();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, length,  DoubleObjectImpl, Length  );
            	GET_ATTRIBUTE(elem, pObject, desc,    StringObjectImpl, Desc    );
            
            	//recursively get sub element value.
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            	GET_TEXT_VALUE(elem, pObject, DoubleCollection);
            
            	return pObject;
            }
            
            CgPoints* LoadCgPoints(xmlNodePtr elem)
            {
            	CgPoints* pObject = factory->createCgPoints();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, desc,        StringObjectImpl, Desc        );
            	GET_ATTRIBUTE(elem, pObject, name,        StringObjectImpl, Name        );
            	GET_ATTRIBUTE(elem, pObject, state,       EnumStateTypeImpl, State       );
            	GET_ATTRIBUTE(elem, pObject, code,        StringObjectImpl, Code        );
            	GET_ATTRIBUTE(elem, pObject, zoneNumber,  UIntegerObjectImpl, ZoneNumber  );
            	GET_ATTRIBUTE(elem, pObject, DTMAttribute, EnumDTMAttributeTypeImpl, DTMAttribute);
            
            	//recursively get sub element value.
            	GET_Sub_Element(elem, pObject, CgPoint      );
            	GET_Sub_Element(elem, pObject, Feature      );
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            DesignHour* LoadDesignHour(xmlNodePtr elem)
            {
            	DesignHour* pObject = factory->createDesignHour();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, staStart,  DoubleObjectImpl, StaStart  );
            	GET_ATTRIBUTE(elem, pObject, staEnd,    DoubleObjectImpl, StaEnd    );
            	GET_ATTRIBUTE(elem, pObject, volume,    DoubleObjectImpl, Volume    );
            
            	//recursively get sub element value.
            	GET_Sub_Element(elem, pObject, Feature  );
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            ConnSpiral* LoadConnSpiral(xmlNodePtr elem)
            {
            	ConnSpiral* pObject = factory->createConnSpiral();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            
            	//recursively get sub element value.
            
            	//get single node.
            	GET_Sub_Single_Element(elem, pObject, Spiral  );
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            Alignment* LoadAlignment(xmlNodePtr elem)
            {
            	Alignment* pObject = factory->createAlignment();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, name,      StringObjectImpl, Name      );
            	GET_ATTRIBUTE(elem, pObject, length,    DoubleObjectImpl, Length    );
            	GET_ATTRIBUTE(elem, pObject, staStart,  DoubleObjectImpl, StaStart  );
            	GET_ATTRIBUTE(elem, pObject, desc,      StringObjectImpl, Desc      );
            	GET_ATTRIBUTE(elem, pObject, oID,       StringObjectImpl, OID       );
            	GET_ATTRIBUTE(elem, pObject, state,     EnumStateTypeImpl, State     );
            
            	//recursively get sub element value.
            	GET_Sub_Element(elem, pObject, CrossSects      );
            	GET_Sub_Element(elem, pObject, StaEquation     );
            	GET_Sub_Element(elem, pObject, Profile         );
            	GET_Sub_Element(elem, pObject, Superelevation  );
            	GET_Sub_Element(elem, pObject, Feature         );
            
            	//get single node.
            	GET_Sub_Single_Element(elem, pObject, CoordGeom  );
            	GET_Sub_Single_Element(elem, pObject, Start      );
            	GET_Sub_Single_Element(elem, pObject, AlignPIs   );
            	GET_Sub_Single_Element(elem, pObject, Cant       );
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            POI* LoadPI(xmlNodePtr elem)
            {
            	POI* pObject = factory->createPOI();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, name, StringObjectImpl, Name);
            	GET_ATTRIBUTE(elem, pObject, desc, StringObjectImpl, Desc);
            	GET_ATTRIBUTE(elem, pObject, code, StringObjectImpl, Code);
            	GET_ATTRIBUTE(elem, pObject, state, EnumStateTypeImpl, State);
            	GET_ATTRIBUTE(elem, pObject, pntRef, StringObjectImpl, PntRef);
            	GET_ATTRIBUTE(elem, pObject, featureRef, StringObjectImpl, FeatureRef);
            	GET_ATTRIBUTE(elem, pObject, pointGeometry, EnumPointGeometryTypeImpl, PointGeometry);
            	GET_ATTRIBUTE(elem, pObject, DTMAttribute, EnumDTMAttributeTypeImpl, DTMAttribute);
            	GET_ATTRIBUTE(elem, pObject, timeStamp, StringObjectImpl, TimeStamp);
            	GET_ATTRIBUTE(elem, pObject, role, EnumSurveyRoleTypeImpl, Role);
            	GET_ATTRIBUTE(elem, pObject, determinedTimeStamp, StringObjectImpl, DeterminedTimeStamp);
            	GET_ATTRIBUTE(elem, pObject, ellipsoidHeight, DoubleObjectImpl, EllipsoidHeight);
            	GET_ATTRIBUTE(elem, pObject, latitude, DoubleObjectImpl, Latitude);
            	GET_ATTRIBUTE(elem, pObject, longitude, DoubleObjectImpl, Longitude);
            	GET_ATTRIBUTE(elem, pObject, zone, StringObjectImpl, Zone);
            	GET_ATTRIBUTE(elem, pObject, northingStdError, DoubleObjectImpl, NorthingStdError);
            	GET_ATTRIBUTE(elem, pObject, eastingStdError, DoubleObjectImpl, EastingStdError);
            	GET_ATTRIBUTE(elem, pObject, elevationStdError, DoubleObjectImpl, ElevationStdError);
            
            	//recursively get sub element value.
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            	GET_TEXT_VALUE(elem, pObject, DoubleCollection);
            
            	return pObject;
            }
            
            Alignments* LoadAlignments(xmlNodePtr elem)
            {
            	Alignments* pObject = factory->createAlignments();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, desc,  StringObjectImpl, Desc  );
            	GET_ATTRIBUTE(elem, pObject, name,  StringObjectImpl, Name  );
            	GET_ATTRIBUTE(elem, pObject, state, EnumStateTypeImpl, State );
            
            	//recursively get sub element value.
            	GET_Sub_Element(elem, pObject, Alignment  );
            	GET_Sub_Element(elem, pObject, Feature    );
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            Roadside* LoadRoadside(xmlNodePtr elem)
            {
            	Roadside* pObject = factory->createRoadside();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            
            	//recursively get sub element value.
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            PeakHour* LoadPeakHour(xmlNodePtr elem)
            {
            	PeakHour* pObject = factory->createPeakHour();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, staStart,  DoubleObjectImpl, StaStart  );
            	GET_ATTRIBUTE(elem, pObject, staEnd,    DoubleObjectImpl, StaEnd    );
            	GET_ATTRIBUTE(elem, pObject, sideofRoad, EnumSideofRoadTypeImpl, SideofRoad);
            	GET_ATTRIBUTE(elem, pObject, volume,    DoubleObjectImpl, Volume    );
            
            	//recursively get sub element value.
            	GET_Sub_Element(elem, pObject, Feature  );
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            Chain* LoadChain(xmlNodePtr elem)
            {
            	Chain* pObject = factory->createChain();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, name,           StringObjectImpl, Name           );
            	GET_ATTRIBUTE(elem, pObject, desc,           StringObjectImpl, Desc           );
            	GET_ATTRIBUTE(elem, pObject, code,           StringObjectImpl, Code           );
            	GET_ATTRIBUTE(elem, pObject, state,          EnumStateTypeImpl, State          );
            	GET_ATTRIBUTE(elem, pObject, pointGeometry,  EnumPointGeometryTypeImpl, PointGeometry  );
            	GET_ATTRIBUTE(elem, pObject, DTMAttribute,   EnumDTMAttributeTypeImpl, DTMAttribute   );
            	GET_ATTRIBUTE(elem, pObject, timeStamp,      StringObjectImpl, TimeStamp      );
            	GET_ATTRIBUTE(elem, pObject, role,           EnumSurveyRoleTypeImpl, Role           );
            	GET_ATTRIBUTE(elem, pObject, station,        DoubleObjectImpl, Station        );
            	GET_ATTRIBUTE(elem, pObject, zone,           StringObjectImpl, Zone           );
            	GET_ATTRIBUTE(elem, pObject, status,         EnumObservationStatusTypeImpl, Status         );
            
            	//recursively get sub element value.
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            	GET_TEXT_VALUE(elem, pObject, StringCollection);
            
            	return pObject;
            }
            
            ObservationGroup* LoadObservationGroup(xmlNodePtr elem)
            {
            	ObservationGroup* pObject = factory->createObservationGroup();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, id,                StringObjectImpl, Id                );
            	GET_ATTRIBUTE(elem, pObject, purpose,           EnumPurposeTypeImpl, Purpose           );
            	GET_ATTRIBUTE(elem, pObject, setupID,           StringObjectImpl, SetupID           );
            	GET_ATTRIBUTE(elem, pObject, targetSetupID,     StringObjectImpl, TargetSetupID     );
            	GET_ATTRIBUTE(elem, pObject, setID,             StringObjectImpl, SetID             );
            	GET_ATTRIBUTE(elem, pObject, coordGeomRefs,     StringCollectionImpl, CoordGeomRefs     );
            	GET_ATTRIBUTE(elem, pObject, alignRef,          StringObjectImpl, AlignRef          );
            	GET_ATTRIBUTE(elem, pObject, alignStationName,  StringObjectImpl, AlignStationName  );
            	GET_ATTRIBUTE(elem, pObject, alignOffset,       DoubleObjectImpl, AlignOffset       );
            
            	//recursively get sub element value.
            	GET_Sub_Element(elem, pObject, RawObservation  );
            	GET_Sub_Element(elem, pObject, FieldNote       );
            	GET_Sub_Element(elem, pObject, Feature         );
            
            	//get single node.
            	GET_Sub_Single_Element(elem, pObject, Backsight              );
            	GET_Sub_Single_Element(elem, pObject, ReducedObservation     );
            	GET_Sub_Single_Element(elem, pObject, TargetPoint            );
            	GET_Sub_Single_Element(elem, pObject, RedHorizontalPosition  );
            	GET_Sub_Single_Element(elem, pObject, ReducedArcObservation  );
            	GET_Sub_Single_Element(elem, pObject, RedVerticalObservation );
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            ComplexName* LoadComplexName(xmlNodePtr elem)
            {
            	ComplexName* pObject = factory->createComplexName();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, desc,      StringObjectImpl, Desc      );
            	GET_ATTRIBUTE(elem, pObject, priority,  IntegerObjectImpl, Priority  );
            
            	//recursively get sub element value.
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            AddressPoint* LoadAddressPoint(xmlNodePtr elem)
            {
            	AddressPoint* pObject = factory->createAddressPoint();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, name,              StringObjectImpl, Name              );
            	GET_ATTRIBUTE(elem, pObject, desc,              StringObjectImpl, Desc              );
            	GET_ATTRIBUTE(elem, pObject, code,              StringObjectImpl, Code              );
            	GET_ATTRIBUTE(elem, pObject, state,             EnumStateTypeImpl, State             );
            	GET_ATTRIBUTE(elem, pObject, pntRef,            StringObjectImpl, PntRef            );
            	GET_ATTRIBUTE(elem, pObject, featureRef,        StringObjectImpl, FeatureRef        );
            	GET_ATTRIBUTE(elem, pObject, pointGeometry,     EnumPointGeometryTypeImpl, PointGeometry     );
            	GET_ATTRIBUTE(elem, pObject, DTMAttribute,      EnumDTMAttributeTypeImpl, DTMAttribute      );
            	GET_ATTRIBUTE(elem, pObject, timeStamp,         StringObjectImpl, TimeStamp         );
            	GET_ATTRIBUTE(elem, pObject, role,              EnumSurveyRoleTypeImpl, Role              );
            	GET_ATTRIBUTE(elem, pObject, determinedTimeStamp, StringObjectImpl, DeterminedTimeStamp);
            	GET_ATTRIBUTE(elem, pObject, ellipsoidHeight,   DoubleObjectImpl, EllipsoidHeight   );
            	GET_ATTRIBUTE(elem, pObject, latitude,          DoubleObjectImpl, Latitude          );
            	GET_ATTRIBUTE(elem, pObject, longitude,         DoubleObjectImpl, Longitude         );
            	GET_ATTRIBUTE(elem, pObject, zone,              StringObjectImpl, Zone              );
            	GET_ATTRIBUTE(elem, pObject, northingStdError,  DoubleObjectImpl, NorthingStdError  );
            	GET_ATTRIBUTE(elem, pObject, eastingStdError,   DoubleObjectImpl, EastingStdError   );
            	GET_ATTRIBUTE(elem, pObject, elevationStdError, DoubleObjectImpl, ElevationStdError );
            	GET_ATTRIBUTE(elem, pObject, addressPointType,  StringObjectImpl, AddressPointType  );
            
            	//recursively get sub element value.
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            	GET_TEXT_VALUE(elem, pObject, DoubleCollection);
            
            	return pObject;
            }
            
            PointType3dReq* LoadPointType3dReq(xmlNodePtr elem)
            {
            	PointType3dReq* pObject = factory->createPointType3dReq();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, name,           StringObjectImpl, Name           );
            	GET_ATTRIBUTE(elem, pObject, desc,           StringObjectImpl, Desc           );
            	GET_ATTRIBUTE(elem, pObject, code,           StringObjectImpl, Code           );
            	GET_ATTRIBUTE(elem, pObject, state,          EnumStateTypeImpl, State          );
            	GET_ATTRIBUTE(elem, pObject, pntRef,         StringObjectImpl, PntRef         );
            	GET_ATTRIBUTE(elem, pObject, featureRef,     StringObjectImpl, FeatureRef     );
            	GET_ATTRIBUTE(elem, pObject, pointGeometry,  EnumPointGeometryTypeImpl, PointGeometry  );
            	GET_ATTRIBUTE(elem, pObject, DTMAttribute,   EnumDTMAttributeTypeImpl, DTMAttribute   );
            	GET_ATTRIBUTE(elem, pObject, timeStamp,      StringObjectImpl, TimeStamp      );
            	GET_ATTRIBUTE(elem, pObject, role,           EnumSurveyRoleTypeImpl, Role           );
            
            	//recursively get sub element value.
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            	GET_TEXT_VALUE(elem, pObject, DoubleCollection);
            
            	return pObject;
            }
            
            PassingLane* LoadPassingLane(xmlNodePtr elem)
            {
            	PassingLane* pObject = factory->createPassingLane();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, staStart,           DoubleObjectImpl, StaStart           );
            	GET_ATTRIBUTE(elem, pObject, staEnd,             DoubleObjectImpl, StaEnd             );
            	GET_ATTRIBUTE(elem, pObject, beginFullWidthSta,  DoubleObjectImpl, BeginFullWidthSta  );
            	GET_ATTRIBUTE(elem, pObject, endFullWidthSta,    DoubleObjectImpl, EndFullWidthSta    );
            	GET_ATTRIBUTE(elem, pObject, width,              DoubleObjectImpl, Width              );
            	GET_ATTRIBUTE(elem, pObject, sideofRoad,         EnumSideofRoadTypeImpl, SideofRoad         );
            
            	//recursively get sub element value.
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            ZoneMaterial* LoadZoneMaterial(xmlNodePtr elem)
            {
            	ZoneMaterial* pObject = factory->createZoneMaterial();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, staStart,  DoubleObjectImpl, StaStart  );
            	GET_ATTRIBUTE(elem, pObject, staEnd,    DoubleObjectImpl, StaEnd    );
            	GET_ATTRIBUTE(elem, pObject, material,  EnumZoneMaterialTypeImpl, Material  );
            
            	//recursively get sub element value.
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            Metric* LoadMetric(xmlNodePtr elem)
            {
            	Metric* pObject = factory->createMetric();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, areaUnit,            EnumMetAreaImpl, AreaUnit            );
            	GET_ATTRIBUTE(elem, pObject, linearUnit,          EnumMetLinearImpl, LinearUnit          );
            	GET_ATTRIBUTE(elem, pObject, volumeUnit,          EnumMetVolumeImpl, VolumeUnit          );
            	GET_ATTRIBUTE(elem, pObject, temperatureUnit,     EnumMetTemperatureImpl, TemperatureUnit     );
            	GET_ATTRIBUTE(elem, pObject, pressureUnit,        EnumMetPressureImpl, PressureUnit        );
            	GET_ATTRIBUTE(elem, pObject, diameterUnit,        EnumMetDiameterImpl, DiameterUnit        );
            	GET_ATTRIBUTE(elem, pObject, widthUnit,           EnumMetWidthImpl, WidthUnit           );
            	GET_ATTRIBUTE(elem, pObject, heightUnit,          EnumMetHeightImpl, HeightUnit          );
            	GET_ATTRIBUTE(elem, pObject, velocityUnit,        EnumMetVelocityImpl, VelocityUnit        );
            	GET_ATTRIBUTE(elem, pObject, flowUnit,            EnumMetFlowImpl, FlowUnit            );
            	GET_ATTRIBUTE(elem, pObject, angularUnit,         EnumAngularTypeImpl, AngularUnit         );
            	GET_ATTRIBUTE(elem, pObject, directionUnit,       EnumAngularTypeImpl, DirectionUnit       );
            	GET_ATTRIBUTE(elem, pObject, latLongAngularUnit,  EnumLatLongAngularTypeImpl, LatLongAngularUnit  );
            	GET_ATTRIBUTE(elem, pObject, elevationUnit,       EnumElevationTypeImpl, ElevationUnit       );
            
            	//recursively get sub element value.
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            
           
            
            PipeNetwork* LoadPipeNetwork(xmlNodePtr elem)
            {
            	PipeNetwork* pObject = factory->createPipeNetwork();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, name,         StringObjectImpl, Name         );
            	GET_ATTRIBUTE(elem, pObject, pipeNetType,  EnumPipeNetworkTypeImpl, PipeNetType  );
            	GET_ATTRIBUTE(elem, pObject, alignmentRef, StringObjectImpl, AlignmentRef );
            	GET_ATTRIBUTE(elem, pObject, desc,         StringObjectImpl, Desc         );
            	GET_ATTRIBUTE(elem, pObject, oID,          StringObjectImpl, OID          );
            	GET_ATTRIBUTE(elem, pObject, state,        EnumStateTypeImpl, State        );
            
            	//recursively get sub element value.
            	GET_Sub_Element(elem, pObject, Feature  );
            
            	//get single node.
            	GET_Sub_Single_Element(elem, pObject, Structs  );
            	GET_Sub_Single_Element(elem, pObject, Pipes    );
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            CoordinateSystem* LoadCoordinateSystem(xmlNodePtr elem)
            {
            	CoordinateSystem* pObject = factory->createCoordinateSystem();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, desc,                            StringObjectImpl, Desc                            );
            	GET_ATTRIBUTE(elem, pObject, name,                            StringObjectImpl, Name                            );
            	GET_ATTRIBUTE(elem, pObject, epsgCode,                        StringObjectImpl, EpsgCode                        );
            	GET_ATTRIBUTE(elem, pObject, ogcWktCode,                      StringObjectImpl, OgcWktCode                      );
            	GET_ATTRIBUTE(elem, pObject, horizontalDatum,                 StringObjectImpl, HorizontalDatum                 );
            	GET_ATTRIBUTE(elem, pObject, verticalDatum,                   StringObjectImpl, VerticalDatum                   );
            	GET_ATTRIBUTE(elem, pObject, ellipsoidName,                   StringObjectImpl, EllipsoidName                   );
            	GET_ATTRIBUTE(elem, pObject, horizontalCoordinateSystemName,  StringObjectImpl, HorizontalCoordinateSystemName  );
            	GET_ATTRIBUTE(elem, pObject, geocentricCoordinateSystemName,  StringObjectImpl, GeocentricCoordinateSystemName  );
            	GET_ATTRIBUTE(elem, pObject, fileLocation,                    StringObjectImpl, FileLocation                    );
            	GET_ATTRIBUTE(elem, pObject, rotationAngle,                   DoubleObjectImpl, RotationAngle                   );
            	GET_ATTRIBUTE(elem, pObject, datum,                           StringObjectImpl, Datum                           );
            	GET_ATTRIBUTE(elem, pObject, fittedCoordinateSystemName,      StringObjectImpl, FittedCoordinateSystemName      );
            	GET_ATTRIBUTE(elem, pObject, compoundCoordinateSystemName,    StringObjectImpl, CompoundCoordinateSystemName    );
            	GET_ATTRIBUTE(elem, pObject, localCoordinateSystemName,       StringObjectImpl, LocalCoordinateSystemName       );
            	GET_ATTRIBUTE(elem, pObject, geographicCoordinateSystemName,  StringObjectImpl, GeographicCoordinateSystemName  );
            	GET_ATTRIBUTE(elem, pObject, projectedCoordinateSystemName,   StringObjectImpl, ProjectedCoordinateSystemName   );
            	GET_ATTRIBUTE(elem, pObject, verticalCoordinateSystemName,    StringObjectImpl, VerticalCoordinateSystemName    );
            
            	//recursively get sub element value.
            	GET_Sub_Element(elem, pObject, FieldNote  );
            	GET_Sub_Element(elem, pObject, Feature    );
            
            	//get single node.
            	GET_Sub_Single_Element(elem, pObject, Start  );
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            CrossSect* LoadCrossSect(xmlNodePtr elem)
            {
            	CrossSect* pObject = factory->createCrossSect();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, sta,           DoubleObjectImpl, Sta           );
            	GET_ATTRIBUTE(elem, pObject, name,          StringObjectImpl, Name          );
            	GET_ATTRIBUTE(elem, pObject, desc,          StringObjectImpl, Desc          );
            	GET_ATTRIBUTE(elem, pObject, angleSkew,     DoubleObjectImpl, AngleSkew     );
            	GET_ATTRIBUTE(elem, pObject, areaCut,       DoubleObjectImpl, AreaCut       );
            	GET_ATTRIBUTE(elem, pObject, areaFill,      DoubleObjectImpl, AreaFill      );
            	GET_ATTRIBUTE(elem, pObject, centroidCut,   DoubleObjectImpl, CentroidCut   );
            	GET_ATTRIBUTE(elem, pObject, centroidFill,  DoubleObjectImpl, CentroidFill  );
            	GET_ATTRIBUTE(elem, pObject, sectType,      StringObjectImpl, SectType      );
            	GET_ATTRIBUTE(elem, pObject, volumeCut,     DoubleObjectImpl, VolumeCut     );
            	GET_ATTRIBUTE(elem, pObject, volumeFill,    DoubleObjectImpl, VolumeFill    );
            
            	//recursively get sub element value.
            	GET_Sub_Element(elem, pObject, CrossSectSurf        );
            	GET_Sub_Element(elem, pObject, DesignCrossSectSurf  );
            	GET_Sub_Element(elem, pObject, Feature              );
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            PointResults* LoadPointResults(xmlNodePtr elem)
            {
            	PointResults* pObject = factory->createPointResults();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, setupID,                    StringObjectImpl, SetupID                    );
            	GET_ATTRIBUTE(elem, pObject, targetSetupID,              StringObjectImpl, TargetSetupID              );
            	GET_ATTRIBUTE(elem, pObject, meanHorizAngle,             DoubleObjectImpl, MeanHorizAngle             );
            	GET_ATTRIBUTE(elem, pObject, horizStdDeviation,          DoubleObjectImpl, HorizStdDeviation          );
            	GET_ATTRIBUTE(elem, pObject, meanzenithAngle,            DoubleObjectImpl, MeanzenithAngle            );
            	GET_ATTRIBUTE(elem, pObject, vertStdDeviation,           DoubleObjectImpl, VertStdDeviation           );
            	GET_ATTRIBUTE(elem, pObject, meanSlopeDistance,          DoubleObjectImpl, MeanSlopeDistance          );
            	GET_ATTRIBUTE(elem, pObject, slopeDistanceStdDeviation,  DoubleObjectImpl, SlopeDistanceStdDeviation  );
            
            	//recursively get sub element value.
            	GET_Sub_Element(elem, pObject, FieldNote  );
            	GET_Sub_Element(elem, pObject, Feature    );
            
            	//get single node.
            	GET_Sub_Single_Element(elem, pObject, TargetPoint  );
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            PostedSpeed* LoadPostedSpeed(xmlNodePtr elem)
            {
            	PostedSpeed* pObject = factory->createPostedSpeed();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, staStart,  DoubleObjectImpl, StaStart  );
            	GET_ATTRIBUTE(elem, pObject, staEnd,    DoubleObjectImpl, StaEnd    );
            	GET_ATTRIBUTE(elem, pObject, sideofRoad, EnumSideofRoadTypeImpl, SideofRoad);
            	GET_ATTRIBUTE(elem, pObject, speedLimit, DoubleObjectImpl, SpeedLimit);
            
            	//recursively get sub element value.
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            GPSReceiverDetails* LoadGPSReceiverDetails(xmlNodePtr elem)
            {
            	GPSReceiverDetails* pObject = factory->createGPSReceiverDetails();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, id,            StringObjectImpl, Id            );
            	GET_ATTRIBUTE(elem, pObject, manufacturer,  StringObjectImpl, Manufacturer  );
            	GET_ATTRIBUTE(elem, pObject, model,         StringObjectImpl, Model         );
            	GET_ATTRIBUTE(elem, pObject, serialNumber,  StringObjectImpl, SerialNumber  );
            
            	//recursively get sub element value.
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            PurposeOfSurvey* LoadPurposeOfSurvey(xmlNodePtr elem)
            {
            	PurposeOfSurvey* pObject = factory->createPurposeOfSurvey();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, name,  StringObjectImpl, Name  );
            
            	//recursively get sub element value.
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            RoadName* LoadRoadName(xmlNodePtr elem)
            {
            	RoadName* pObject = factory->createRoadName();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, roadNameType,  StringObjectImpl, RoadNameType  );
            	GET_ATTRIBUTE(elem, pObject, roadName,      StringObjectImpl, RoadName      );
            	GET_ATTRIBUTE(elem, pObject, roadNameSuffix, StringObjectImpl, RoadNameSuffix);
            	GET_ATTRIBUTE(elem, pObject, roadType,      StringObjectImpl, RoadType      );
            	GET_ATTRIBUTE(elem, pObject, pclRef,        StringCollectionImpl, PclRef        );
            
            	//recursively get sub element value.
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            Zone* LoadZone(xmlNodePtr elem)
            {
            	Zone* pObject = factory->createZone();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, desc,            StringObjectImpl, Desc            );
            	GET_ATTRIBUTE(elem, pObject, name,            StringObjectImpl, Name            );
            	GET_ATTRIBUTE(elem, pObject, state,           EnumStateTypeImpl, State           );
            	GET_ATTRIBUTE(elem, pObject, priority,        IntegerObjectImpl, Priority        );
            	GET_ATTRIBUTE(elem, pObject, category,        EnumZoneCategoryTypeImpl, Category        );
            	GET_ATTRIBUTE(elem, pObject, staStart,        DoubleObjectImpl, StaStart        );
            	GET_ATTRIBUTE(elem, pObject, staEnd,          DoubleObjectImpl, StaEnd          );
            	GET_ATTRIBUTE(elem, pObject, startWidth,      DoubleObjectImpl, StartWidth      );
            	GET_ATTRIBUTE(elem, pObject, startVertValue,  DoubleObjectImpl, StartVertValue  );
            	GET_ATTRIBUTE(elem, pObject, startVertType,   EnumZoneVertTypeImpl, StartVertType   );
            	GET_ATTRIBUTE(elem, pObject, endWidth,        DoubleObjectImpl, EndWidth        );
            	GET_ATTRIBUTE(elem, pObject, endVertValue,    DoubleObjectImpl, EndVertValue    );
            	GET_ATTRIBUTE(elem, pObject, endVertType,     EnumZoneVertTypeImpl, EndVertType     );
            
            	//recursively get sub element value.
            	GET_Sub_Element(elem, pObject, ZoneWidth               );
            	GET_Sub_Element(elem, pObject, ZoneSlope               );
            	GET_Sub_Element(elem, pObject, ZoneCutFill             );
            	GET_Sub_Element(elem, pObject, ZoneMaterial            );
            	GET_Sub_Element(elem, pObject, ZoneCrossSectStructure  );
            	GET_Sub_Element(elem, pObject, Feature                 );
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            StaEquation* LoadStaEquation(xmlNodePtr elem)
            {
            	StaEquation* pObject = factory->createStaEquation();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, staAhead,     DoubleObjectImpl, StaAhead     );
            	GET_ATTRIBUTE(elem, pObject, staBack,      DoubleObjectImpl, StaBack      );
            	GET_ATTRIBUTE(elem, pObject, staInternal,  DoubleObjectImpl, StaInternal  );
            	GET_ATTRIBUTE(elem, pObject, staIncrement, EnumStationIncrementDirectionTypeImpl, StaIncrement );
            	GET_ATTRIBUTE(elem, pObject, desc,         StringObjectImpl, Desc         );
            
            	//recursively get sub element value.
            	GET_Sub_Element(elem, pObject, Feature  );
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            GradeSurface* LoadGradeSurface(xmlNodePtr elem)
            {
            	GradeSurface* pObject = factory->createGradeSurface();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, alignmentRef,         StringObjectImpl, AlignmentRef         );
            	GET_ATTRIBUTE(elem, pObject, stationAlignmentRef,  StringObjectImpl, StationAlignmentRef  );
            	GET_ATTRIBUTE(elem, pObject, surfaceType,          EnumZoneSurfaceTypeImpl, SurfaceType          );
            	GET_ATTRIBUTE(elem, pObject, surfaceRef,           StringObjectImpl, SurfaceRef           );
            	GET_ATTRIBUTE(elem, pObject, surfaceRefs,          StringCollectionImpl, SurfaceRefs          );
            	GET_ATTRIBUTE(elem, pObject, cgPointRefs,          StringCollectionImpl, CgPointRefs          );
            	GET_ATTRIBUTE(elem, pObject, name,                 StringObjectImpl, Name                 );
            	GET_ATTRIBUTE(elem, pObject, desc,                 StringObjectImpl, Desc                 );
            	GET_ATTRIBUTE(elem, pObject, state,                EnumStateTypeImpl, State                );
            
            	//recursively get sub element value.
            	GET_Sub_Element(elem, pObject, Zones        );
            	GET_Sub_Element(elem, pObject, Feature      );
            
            	//get single node.
            	GET_Sub_Single_Element(elem, pObject, Start  );
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            Survey* LoadSurvey(xmlNodePtr elem)
            {
            	Survey* pObject = factory->createSurvey();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, desc,                StringObjectImpl, Desc                );
            	GET_ATTRIBUTE(elem, pObject, date,                StringObjectImpl, Date                );
            	GET_ATTRIBUTE(elem, pObject, startTime,           StringObjectImpl, StartTime           );
            	GET_ATTRIBUTE(elem, pObject, endTime,             StringObjectImpl, EndTime             );
            	GET_ATTRIBUTE(elem, pObject, state,               EnumStateTypeImpl, State               );
            	GET_ATTRIBUTE(elem, pObject, horizontalAccuracy,  StringObjectImpl, HorizontalAccuracy  );
            	GET_ATTRIBUTE(elem, pObject, verticalAccuracy,    StringObjectImpl, VerticalAccuracy    );
            
            	//recursively get sub element value.
            	GET_Sub_Element(elem, pObject, SurveyMonument  );
            	GET_Sub_Element(elem, pObject, CgPoints        );
            	GET_Sub_Element(elem, pObject, InstrumentSetup );
            	GET_Sub_Element(elem, pObject, LaserSetup      );
            	GET_Sub_Element(elem, pObject, GPSSetup        );
            	GET_Sub_Element(elem, pObject, TargetSetup     );
            	GET_Sub_Element(elem, pObject, GPSVector       );
            	GET_Sub_Element(elem, pObject, GPSPosition     );
            	GET_Sub_Element(elem, pObject, ObservationGroup);
            	GET_Sub_Element(elem, pObject, ControlChecks   );
            	GET_Sub_Element(elem, pObject, FieldNote       );
            	GET_Sub_Element(elem, pObject, Feature         );
            
            	//get single node.
            	GET_Sub_Single_Element(elem, pObject, SurveyHeader  );
            	GET_Sub_Single_Element(elem, pObject, Equipment     );
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            Imperial* LoadImperial(xmlNodePtr elem)
            {
            	Imperial* pObject = factory->createImperial();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, areaUnit,            EnumImpAreaImpl, AreaUnit            );
            	GET_ATTRIBUTE(elem, pObject, linearUnit,          EnumImpLinearImpl, LinearUnit          );
            	GET_ATTRIBUTE(elem, pObject, volumeUnit,          EnumImpVolumeImpl, VolumeUnit          );
            	GET_ATTRIBUTE(elem, pObject, temperatureUnit,     EnumImpTemperatureImpl, TemperatureUnit     );
            	GET_ATTRIBUTE(elem, pObject, pressureUnit,        EnumImpPressureImpl, PressureUnit        );
            	GET_ATTRIBUTE(elem, pObject, diameterUnit,        EnumImpDiameterImpl, DiameterUnit        );
            	GET_ATTRIBUTE(elem, pObject, widthUnit,           EnumImpWidthImpl, WidthUnit           );
            	GET_ATTRIBUTE(elem, pObject, heightUnit,          EnumImpHeightImpl, HeightUnit          );
            	GET_ATTRIBUTE(elem, pObject, velocityUnit,        EnumImpVelocityImpl, VelocityUnit        );
            	GET_ATTRIBUTE(elem, pObject, flowUnit,            EnumImpFlowImpl, FlowUnit            );
            	GET_ATTRIBUTE(elem, pObject, angularUnit,         EnumAngularTypeImpl, AngularUnit         );
            	GET_ATTRIBUTE(elem, pObject, directionUnit,       EnumAngularTypeImpl, DirectionUnit       );
            	GET_ATTRIBUTE(elem, pObject, latLongAngularUnit,  EnumLatLongAngularTypeImpl, LatLongAngularUnit  );
            	GET_ATTRIBUTE(elem, pObject, elevationUnit,       EnumElevationTypeImpl, ElevationUnit       );
            
            	//recursively get sub element value.
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            
            DesignSpeed* LoadDesignSpeed(xmlNodePtr elem)
            {
            	DesignSpeed* pObject = factory->createDesignSpeed();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            	GET_ATTRIBUTE(elem, pObject, staStart,  DoubleObjectImpl, StaStart  );
            	GET_ATTRIBUTE(elem, pObject, staEnd,    DoubleObjectImpl, StaEnd    );
            	GET_ATTRIBUTE(elem, pObject, speed,     DoubleObjectImpl, Speed     );
            
            	//recursively get sub element value.
            	GET_Sub_Element(elem, pObject, Feature  );
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
            Connection* LoadConnection(xmlNodePtr elem)
            {
            	Connection* pObject = factory->createConnection();
            
            
            	//fetch property values from Xerces DOM, and put them into SDK runtime objects.
            
            	//recursively get sub element value.
            	GET_Sub_Element(elem, pObject, Feature  );
            
            	//get single node.
            
            	//get text value and put it into Double, Integer collection.
            
            	return pObject;
            }
            
    };
}; // namespace : LX
