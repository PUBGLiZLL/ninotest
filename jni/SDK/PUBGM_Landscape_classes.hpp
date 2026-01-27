#pragma once

//PUBGM(0.13.5)32位SDK
//作者:清华
//Telegram:@qinghuanb666
//生成时间:Fri Apr 18 20:44:40 2025

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Landscape.ControlPointMeshComponent
// 0x0000 (0x0660 - 0x0660)
class UControlPointMeshComponent : public UStaticMeshComponent
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.ControlPointMeshComponent");
		return pStaticClass;
	}

};


// Class Landscape.LandscapeProxy
// 0x0348 (0x0600 - 0x02B8)
class ALandscapeProxy : public AActor
{
public:
	class ULandscapeSplinesComponent*                  SplineComponent;                                          // 0x02B8(0x0004) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FGuid                                       LandscapeGuid;                                            // 0x02BC(0x0010) (IsPlainOldData)
	struct FIntPoint                                   LandscapeSectionOffset;                                   // 0x02CC(0x0008) (IsPlainOldData)
	int                                                MaxLODLevel;                                              // 0x02D4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LODDistanceFactor;                                        // 0x02D8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ELandscapeLODFalloff>                  LODFalloff;                                               // 0x02DC(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02DD(0x0003) MISSED OFFSET
	int                                                StaticLightingLOD;                                        // 0x02E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UPhysicalMaterial*                           DefaultPhysMaterial;                                      // 0x02E4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StreamingDistanceMultiplier;                              // 0x02E8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bCacheHeightData : 1;                                     // 0x02EC(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x3];                                       // 0x02ED(0x0003) MISSED OFFSET
	class UMaterialInterface*                          LandscapeMaterial;                                        // 0x02F0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          LandscapeHoleMaterial;                                    // 0x02F4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NegativeZBoundsExtension;                                 // 0x02F8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PositiveZBoundsExtension;                                 // 0x02FC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class ULandscapeComponent*>                 LandscapeComponents;                                      // 0x0300(0x000C) (ExportObject, ZeroConstructor)
	TArray<class ULandscapeHeightfieldCollisionComponent*> CollisionComponents;                                      // 0x030C(0x000C) (ExportObject, ZeroConstructor)
	TArray<class UHierarchicalInstancedStaticMeshComponent*> FoliageComponents;                                        // 0x0318(0x000C) (ExportObject, ZeroConstructor, Transient, DuplicateTransient)
	unsigned char                                      UnknownData02[0x48];                                      // 0x0324(0x0048) MISSED OFFSET
	bool                                               bHasLandscapeGrass;                                       // 0x036C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x036D(0x0003) MISSED OFFSET
	float                                              StaticLightingResolution;                                 // 0x0370(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bCastStaticShadow : 1;                                    // 0x0374(0x0001) (Edit)
	unsigned char                                      bCastShadowAsTwoSided : 1;                                // 0x0374(0x0001) (Edit)
	unsigned char                                      bCastFarShadow : 1;                                       // 0x0374(0x0001) (Edit)
	struct FLightingChannels                           LightingChannels;                                         // 0x0375(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bUseMaterialPositionOffsetInStaticLighting : 1;           // 0x0376(0x0001) (Edit)
	unsigned char                                      bRenderCustomDepth : 1;                                   // 0x0376(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData04[0x1];                                       // 0x0377(0x0001) MISSED OFFSET
	int                                                CustomDepthStencilValue;                                  // 0x0378(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLightmassPrimitiveSettings                 LightmassSettings;                                        // 0x037C(0x0018) (Edit)
	int                                                CollisionMipLevel;                                        // 0x0394(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                SimpleCollisionMipLevel;                                  // 0x0398(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CollisionThickness;                                       // 0x039C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FBodyInstance                               BodyInstance;                                             // 0x03A0(0x01D0) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bGenerateOverlapEvents : 1;                               // 0x0570(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bBakeMaterialPositionOffsetIntoCollision : 1;             // 0x0570(0x0001) (Edit)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0571(0x0003) MISSED OFFSET
	int                                                ComponentSizeQuads;                                       // 0x0574(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SubsectionSizeQuads;                                      // 0x0578(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NumSubsections;                                           // 0x057C(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bUsedForNavigation : 1;                                   // 0x0580(0x0001) (Edit)
	ENavDataGatheringMode                              NavigationGeometryGatheringMode;                          // 0x0581(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseLandscapeForCullingInvisibleHLODVertices;             // 0x0582(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7D];                                      // 0x0583(0x007D) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.LandscapeProxy");
		return pStaticClass;
	}


	void EditorApplySpline(class USplineComponent* InSplineComponent, float StartWidth, float EndWidth, float StartSideFalloff, float EndSideFalloff, float StartRoll, float EndRoll, int NumSubdivisions, bool bRaiseHeights, bool bLowerHeights, class ULandscapeLayerInfoObject* PaintLayer);
	void ChangeLODDistanceFactor(float InLODDistanceFactor);
};


// Class Landscape.Landscape
// 0x0000 (0x0600 - 0x0600)
class ALandscape : public ALandscapeProxy
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.Landscape");
		return pStaticClass;
	}

};


// Class Landscape.LandscapeComponent
// 0x0150 (0x0740 - 0x05F0)
class ULandscapeComponent : public UPrimitiveComponent
{
public:
	int                                                SectionBaseX;                                             // 0x05F0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                SectionBaseY;                                             // 0x05F4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                ComponentSizeQuads;                                       // 0x05F8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SubsectionSizeQuads;                                      // 0x05FC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NumSubsections;                                           // 0x0600(0x0004) (ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          OverrideMaterial;                                         // 0x0604(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          OverrideHoleMaterial;                                     // 0x0608(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UMaterialInstanceConstant*>           MaterialInstances;                                        // 0x060C(0x000C) (ZeroConstructor)
	TArray<struct FWeightmapLayerAllocationInfo>       WeightmapLayerAllocations;                                // 0x0618(0x000C) (ZeroConstructor)
	TArray<class UTexture2D*>                          WeightmapTextures;                                        // 0x0624(0x000C) (ZeroConstructor)
	class UTexture2D*                                  XYOffsetmapTexture;                                       // 0x0630(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0634(0x000C) MISSED OFFSET
	struct FVector4                                    WeightmapScaleBias;                                       // 0x0640(0x0010) (IsPlainOldData)
	float                                              WeightmapSubsectionOffset;                                // 0x0650(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0654(0x000C) MISSED OFFSET
	struct FVector4                                    HeightmapScaleBias;                                       // 0x0660(0x0010) (IsPlainOldData)
	class UTexture2D*                                  HeightmapTexture;                                         // 0x0670(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FBox                                        CachedLocalBox;                                           // 0x0674(0x001C) (IsPlainOldData)
	TLazyObjectPtr<class ULandscapeHeightfieldCollisionComponent> CollisionComponent;                                       // 0x0690(0x001C) (ExportObject, InstancedReference, IsPlainOldData)
	struct FGuid                                       MapBuildDataId;                                           // 0x06AC(0x0010) (IsPlainOldData)
	TArray<struct FGuid>                               IrrelevantLights;                                         // 0x06BC(0x000C) (ZeroConstructor, Deprecated)
	int                                                CollisionMipLevel;                                        // 0x06C8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                SimpleCollisionMipLevel;                                  // 0x06CC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NegativeZBoundsExtension;                                 // 0x06D0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PositiveZBoundsExtension;                                 // 0x06D4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StaticLightingResolution;                                 // 0x06D8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ForcedLOD;                                                // 0x06DC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                LODBias;                                                  // 0x06E0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       stateID;                                                  // 0x06E4(0x0010) (IsPlainOldData)
	struct FGuid                                       BakedTextureMaterialGuid;                                 // 0x06F4(0x0010) (IsPlainOldData)
	class UTexture2D*                                  GIBakedBaseColorTexture;                                  // 0x0704(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      MobileBlendableLayerMask;                                 // 0x0708(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0709(0x0003) MISSED OFFSET
	class UMaterialInterface*                          MobileMaterialInterface;                                  // 0x070C(0x0004) (ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  MobileWeightNormalmapTexture;                             // 0x0710(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<uint16_t>                                   CachedHeightData;                                         // 0x0714(0x000C) (ZeroConstructor)
	unsigned char                                      UnknownData03[0x20];                                      // 0x0720(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.LandscapeComponent");
		return pStaticClass;
	}

};


// Class Landscape.LandscapeGizmoActor
// 0x0000 (0x02B8 - 0x02B8)
class ALandscapeGizmoActor : public AActor
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.LandscapeGizmoActor");
		return pStaticClass;
	}

};


// Class Landscape.LandscapeGizmoActiveActor
// 0x0040 (0x02F8 - 0x02B8)
class ALandscapeGizmoActiveActor : public ALandscapeGizmoActor
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x02B8(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.LandscapeGizmoActiveActor");
		return pStaticClass;
	}

};


// Class Landscape.LandscapeGizmoRenderComponent
// 0x0000 (0x05F0 - 0x05F0)
class ULandscapeGizmoRenderComponent : public UPrimitiveComponent
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.LandscapeGizmoRenderComponent");
		return pStaticClass;
	}

};


// Class Landscape.LandscapeGrassType
// 0x0024 (0x0040 - 0x001C)
class ULandscapeGrassType : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x001C(0x000C) MISSED OFFSET
	class UStaticMesh*                                 GrassMesh;                                                // 0x0028(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              GrassDensity;                                             // 0x002C(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              PlacementJitter;                                          // 0x0030(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	int                                                StartCullDistance;                                        // 0x0034(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	int                                                EndCullDistance;                                          // 0x0038(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               RandomRotation;                                           // 0x003C(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               AlignToSurface;                                           // 0x003D(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x003E(0x0002) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.LandscapeGrassType");
		return pStaticClass;
	}

};


// Class Landscape.LandscapeHeightfieldCollisionComponent
// 0x00C0 (0x06B0 - 0x05F0)
class ULandscapeHeightfieldCollisionComponent : public UPrimitiveComponent
{
public:
	TArray<class ULandscapeLayerInfoObject*>           ComponentLayerInfos;                                      // 0x05F0(0x000C) (ZeroConstructor)
	int                                                SectionBaseX;                                             // 0x05FC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SectionBaseY;                                             // 0x0600(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CollisionSizeQuads;                                       // 0x0604(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CollisionScale;                                           // 0x0608(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SimpleCollisionSizeQuads;                                 // 0x060C(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<unsigned char>                              CollisionQuadFlags;                                       // 0x0610(0x000C) (ZeroConstructor)
	struct FGuid                                       HeightfieldGuid;                                          // 0x061C(0x0010) (IsPlainOldData)
	struct FBox                                        CachedLocalBox;                                           // 0x062C(0x001C) (IsPlainOldData)
	TLazyObjectPtr<class ULandscapeComponent>          RenderComponent;                                          // 0x0648(0x001C) (ExportObject, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0664(0x000C) MISSED OFFSET
	TArray<class UPhysicalMaterial*>                   CookedPhysicalMaterials;                                  // 0x0670(0x000C) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x34];                                      // 0x067C(0x0034) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.LandscapeHeightfieldCollisionComponent");
		return pStaticClass;
	}

};


// Class Landscape.LandscapeInfo
// 0x0174 (0x0190 - 0x001C)
class ULandscapeInfo : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1C];                                      // 0x001C(0x001C) MISSED OFFSET
	struct FGuid                                       LandscapeGuid;                                            // 0x0038(0x0010) (IsPlainOldData)
	int                                                ComponentSizeQuads;                                       // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SubsectionSizeQuads;                                      // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ComponentNumSubsections;                                  // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     DrawScale;                                                // 0x0054(0x000C) (IsPlainOldData)
	unsigned char                                      UnknownData01[0x3C];                                      // 0x0060(0x003C) MISSED OFFSET
	unsigned char                                      UnknownData02[0x3C];                                      // 0x0060(0x003C) UNKNOWN PROPERTY: SetProperty Landscape.LandscapeInfo.Proxies
	unsigned char                                      UnknownData03[0xB8];                                      // 0x00D8(0x00B8) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.LandscapeInfo");
		return pStaticClass;
	}

};


// Class Landscape.LandscapeInfoMap
// 0x0044 (0x0060 - 0x001C)
class ULandscapeInfoMap : public UObject
{
public:
	unsigned char                                      UnknownData00[0x44];                                      // 0x001C(0x0044) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.LandscapeInfoMap");
		return pStaticClass;
	}

};


// Class Landscape.LandscapeLayerInfoObject
// 0x0024 (0x0040 - 0x001C)
class ULandscapeLayerInfoObject : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FName                                       LayerName;                                                // 0x0020(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	class UPhysicalMaterial*                           PhysMaterial;                                             // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Hardness;                                                 // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                LayerUsageDebugColor;                                     // 0x0030(0x0010) (Edit, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.LandscapeLayerInfoObject");
		return pStaticClass;
	}

};


// Class Landscape.LandscapeMaterialInstanceConstant
// 0x0000 (0x0118 - 0x0118)
class ULandscapeMaterialInstanceConstant : public UMaterialInstanceConstant
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.LandscapeMaterialInstanceConstant");
		return pStaticClass;
	}

};


// Class Landscape.LandscapeMeshCollisionComponent
// 0x0020 (0x06D0 - 0x06B0)
class ULandscapeMeshCollisionComponent : public ULandscapeHeightfieldCollisionComponent
{
public:
	struct FGuid                                       MeshGuid;                                                 // 0x06B0(0x0010) (IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x06C0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.LandscapeMeshCollisionComponent");
		return pStaticClass;
	}

};


// Class Landscape.LandscapeMeshProxyActor
// 0x0008 (0x02C0 - 0x02B8)
class ALandscapeMeshProxyActor : public AActor
{
public:
	class ULandscapeMeshProxyComponent*                LandscapeMeshProxyComponent;                              // 0x02B8(0x0004) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x02BC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.LandscapeMeshProxyActor");
		return pStaticClass;
	}

};


// Class Landscape.LandscapeMeshProxyComponent
// 0x0020 (0x0680 - 0x0660)
class ULandscapeMeshProxyComponent : public UStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x0660(0x000C) MISSED OFFSET
	TArray<struct FIntPoint>                           ProxyComponentBases;                                      // 0x066C(0x000C) (ZeroConstructor)
	int8_t                                             ProxyLOD;                                                 // 0x0678(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0679(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.LandscapeMeshProxyComponent");
		return pStaticClass;
	}

};


// Class Landscape.LandscapeSplinesComponent
// 0x0030 (0x0620 - 0x05F0)
class ULandscapeSplinesComponent : public UPrimitiveComponent
{
public:
	TArray<class ULandscapeSplineControlPoint*>        ControlPoints;                                            // 0x05F0(0x000C) (ZeroConstructor)
	TArray<class ULandscapeSplineSegment*>             Segments;                                                 // 0x05FC(0x000C) (ZeroConstructor)
	TArray<class UMeshComponent*>                      CookedForeignMeshComponents;                              // 0x0608(0x000C) (ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0614(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.LandscapeSplinesComponent");
		return pStaticClass;
	}

};


// Class Landscape.LandscapeSplineControlPoint
// 0x005C (0x0078 - 0x001C)
class ULandscapeSplineControlPoint : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x001C(0x000C) MISSED OFFSET
	struct FRotator                                    Rotation;                                                 // 0x0028(0x000C) (Edit, IsPlainOldData)
	float                                              Width;                                                    // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SideFalloff;                                              // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EndFalloff;                                               // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FLandscapeSplineConnection>          ConnectedSegments;                                        // 0x0040(0x000C) (ZeroConstructor)
	TArray<struct FLandscapeSplineInterpPoint>         Points;                                                   // 0x004C(0x000C) (ZeroConstructor)
	struct FBox                                        Bounds;                                                   // 0x0058(0x001C) (IsPlainOldData)
	class UControlPointMeshComponent*                  LocalMeshComponent;                                       // 0x0074(0x0004) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.LandscapeSplineControlPoint");
		return pStaticClass;
	}

};


// Class Landscape.LandscapeSplineSegment
// 0x006C (0x0088 - 0x001C)
class ULandscapeSplineSegment : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FLandscapeSplineSegmentConnection           Connections[0x2];                                         // 0x0020(0x0010) (Edit, EditFixedSize)
	struct FInterpCurveVector                          SplineInfo;                                               // 0x0040(0x0014)
	TArray<struct FLandscapeSplineInterpPoint>         Points;                                                   // 0x0054(0x000C) (ZeroConstructor)
	struct FBox                                        Bounds;                                                   // 0x0060(0x001C) (IsPlainOldData)
	TArray<class USplineMeshComponent*>                LocalMeshComponents;                                      // 0x007C(0x000C) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.LandscapeSplineSegment");
		return pStaticClass;
	}

};


// Class Landscape.LandscapeStreamingProxy
// 0x0020 (0x0620 - 0x0600)
class ALandscapeStreamingProxy : public ALandscapeProxy
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0600(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.LandscapeStreamingProxy");
		return pStaticClass;
	}

};


// Class Landscape.MaterialExpressionLandscapeGrassOutput
// 0x0008 (0x0050 - 0x0048)
class UMaterialExpressionLandscapeGrassOutput : public UMaterialExpressionCustomOutput
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0048(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeGrassOutput");
		return pStaticClass;
	}

};


// Class Landscape.MaterialExpressionLandscapeLayerBlend
// 0x0018 (0x0060 - 0x0048)
class UMaterialExpressionLandscapeLayerBlend : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0048(0x0008) MISSED OFFSET
	struct FGuid                                       ExpressionGUID;                                           // 0x0050(0x0010) (IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeLayerBlend");
		return pStaticClass;
	}

};


// Class Landscape.MaterialExpressionLandscapeLayerCoords
// 0x0040 (0x0088 - 0x0048)
class UMaterialExpressionLandscapeLayerCoords : public UMaterialExpression
{
public:
	struct FExpressionInput                            MappingScaleOverride;                                     // 0x0048(0x0030)
	float                                              MappingScale;                                             // 0x0078(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MappingRotation;                                          // 0x007C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MappingPanU;                                              // 0x0080(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MappingPanV;                                              // 0x0084(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeLayerCoords");
		return pStaticClass;
	}

};


// Class Landscape.MaterialExpressionLandscapeLayerSample
// 0x0020 (0x0068 - 0x0048)
class UMaterialExpressionLandscapeLayerSample : public UMaterialExpression
{
public:
	struct FName                                       ParameterName;                                            // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PreviewWeight;                                            // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       ExpressionGUID;                                           // 0x0054(0x0010) (IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0064(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeLayerSample");
		return pStaticClass;
	}

};


// Class Landscape.MaterialExpressionLandscapeLayerSwitch
// 0x0080 (0x00C8 - 0x0048)
class UMaterialExpressionLandscapeLayerSwitch : public UMaterialExpression
{
public:
	struct FExpressionInput                            LayerUsed;                                                // 0x0048(0x0030)
	struct FExpressionInput                            LayerNotUsed;                                             // 0x0078(0x0030)
	struct FName                                       ParameterName;                                            // 0x00A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      PreviewUsed : 1;                                          // 0x00B0(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00B1(0x0003) MISSED OFFSET
	struct FGuid                                       ExpressionGUID;                                           // 0x00B4(0x0010) (IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00C4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeLayerSwitch");
		return pStaticClass;
	}

};


// Class Landscape.MaterialExpressionLandscapeLayerWeight
// 0x0088 (0x00D0 - 0x0048)
class UMaterialExpressionLandscapeLayerWeight : public UMaterialExpression
{
public:
	struct FExpressionInput                            Base;                                                     // 0x0048(0x0030)
	struct FExpressionInput                            Layer;                                                    // 0x0078(0x0030)
	struct FName                                       ParameterName;                                            // 0x00A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PreviewWeight;                                            // 0x00B0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ConstBase;                                                // 0x00B4(0x000C) (Edit, IsPlainOldData)
	struct FGuid                                       ExpressionGUID;                                           // 0x00C0(0x0010) (IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeLayerWeight");
		return pStaticClass;
	}

};


// Class Landscape.MaterialExpressionLandscapeVisibilityMask
// 0x0010 (0x0058 - 0x0048)
class UMaterialExpressionLandscapeVisibilityMask : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0048(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeVisibilityMask");
		return pStaticClass;
	}

};


}

