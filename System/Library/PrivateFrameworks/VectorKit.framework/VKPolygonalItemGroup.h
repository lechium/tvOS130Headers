/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:39 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VectorKit/VectorKit-Structs.h>
@class NSMutableOrderedSet, NSOrderedSet;

@interface VKPolygonalItemGroup : NSObject {

	unsigned _cullingMask;
	optional<md::MeshSet<ggl::PolygonBase::CompressedMeshMesh, ggl::PolygonBase::CompressedVbo> >* _fillMeshInfo;
	vector<std::__1::shared_ptr<ggl::PolygonBase::CompressedMeshMesh>, std::__1::allocator<std::__1::shared_ptr<ggl::PolygonBase::CompressedMeshMesh> > >* _fillMeshes;
	vector<std::__1::vector<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange> >, std::__1::allocator<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange> > > >, std::__1::allocator<std::__1::vector<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange> >, std::__1::allocator<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange> > > > > >* _fillCullingGroups;
	vector<std::__1::vector<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange> >, std::__1::allocator<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange> > > >, std::__1::allocator<std::__1::vector<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange> >, std::__1::allocator<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange> > > > > >* _strokeCullingGroups;
	vector<std::__1::vector<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange> >, std::__1::allocator<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange> > > >, std::__1::allocator<std::__1::vector<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange> >, std::__1::allocator<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange> > > > > >* _venueCullingGroups;
	vector<std::__1::vector<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange> >, std::__1::allocator<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange> > > >, std::__1::allocator<std::__1::vector<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange> >, std::__1::allocator<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange> > > > > >* _venueEndCapCullingGroups;
	vector<std::__1::vector<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange> >, std::__1::allocator<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange> > > >, std::__1::allocator<std::__1::vector<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange> >, std::__1::allocator<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange> > > > > >* _venueWallHorizontalStrokeCullingGroups;
	vector<std::__1::vector<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange> >, std::__1::allocator<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange> > > >, std::__1::allocator<std::__1::vector<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange> >, std::__1::allocator<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange> > > > > >* _venueWallVerticalStrokeCullingGroups;
	unordered_map<std::__1::pair<void *, unsigned long>, std::__1::vector<Edge, std::__1::allocator<Edge> >, std::__1::hash<SectionKey>, std::__1::equal_to<std::__1::pair<void *, unsigned long> >, std::__1::allocator<std::__1::pair<const std::__1::pair<void *, unsigned long>, std::__1::vector<Edge, std::__1::allocator<Edge> > > > >* _polygonEdges;
	unordered_set<unsigned long long, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<unsigned long long> >* _featureIds;
	Box<float, 3> _boundingBox;
	float _tileZoom;
	float _contentScale;
	vector<ggl::Batcher, std::__1::allocator<ggl::Batcher> >* _fillRenderItemBatchers;
	vector<ggl::Batcher, std::__1::allocator<ggl::Batcher> >* _strokeRenderItemBatchers;
	Matrix<float, 2, 1> _centroid;
	NSMutableOrderedSet* _attributeSets;
	vector<std::__1::shared_ptr<gss::StylesheetQuery<gss::PropertyID> >, std::__1::allocator<std::__1::shared_ptr<gss::StylesheetQuery<gss::PropertyID> > > >* _styleQueries;
	vector<std::__1::shared_ptr<gss::StylesheetQuery<gss::PropertyID> >, std::__1::allocator<std::__1::shared_ptr<gss::StylesheetQuery<gss::PropertyID> > > >* _selectedStyleQueries;
	shared_ptr<gss::StylesheetManager<gss::PropertyID> >* _styleManager;
	PolygonRouteAttributes _routeAttributes;
	BOOL _isFixedSize;
	BOOL _stylesUpToDate;
	BOOL _hasRouteAttributes;

}

@property (nonatomic,readonly) BOOL isFixedSize;                                                                                       //@synthesize isFixedSize=_isFixedSize - In the implementation block
@property (nonatomic,readonly) Matrix<float centroid;                                                                                  //@synthesize centroid=_centroid - In the implementation block
@property (nonatomic,readonly) float tileZoom; 
@property (nonatomic,readonly) const Matrix<float* origin; 
@property (nonatomic,readonly) const Matrix<float* maxPoint; 
@property (nonatomic,readonly) Matrix<float size; 
@property (nonatomic,readonly) unsigned cullingMask;                                                                                   //@synthesize cullingMask=_cullingMask - In the implementation block
@property (nonatomic,readonly) vector<std::__1::shared_ptr<ggl::PolygonBase::CompressedMeshMesh>* fillMeshes; 
@property (nonatomic,readonly) NSOrderedSet * attributeSets; 
@property (nonatomic,readonly) vector<std::__1::shared_ptr<gss::StylesheetQuery<gss::PropertyID> >* styleQueries; 
@property (nonatomic,readonly) vector<std::__1::shared_ptr<gss::StylesheetQuery<gss::PropertyID> >* selectedStyleQueries; 
@property (nonatomic,readonly) const unordered_set<unsigned long long* featureIds; 
-(void)dealloc;
-(Matrix<float)size;
-(const Matrix<float*)origin;
-(void)setRouteAttributes:(const PolygonRouteAttributes*)arg1 ;
-(Matrix<float)centroid;
-(NSOrderedSet *)attributeSets;
-(vector<std::__1::shared_ptr<ggl::PolygonBase::CompressedMeshMesh>*)fillMeshes;
-(const Matrix<float*)maxPoint;
-(BOOL)hasFeatureId:(unsigned long long)arg1 ;
-(const MultiRange<unsigned long>*)commitRangesToFillRenderItemBatcher:(Batcher*)arg1 forMeshAtIndex:(unsigned long long)arg2 cullingMask:(unsigned)arg3 featureIdPredicate:(function<bool (unsigned long long)>*)arg4 ;
-(const MultiRange<unsigned long>*)commitRangesToStrokeRenderItemBatcher:(Batcher*)arg1 forMeshAtIndex:(unsigned long long)arg2 cullingMask:(unsigned)arg3 featureIdPredicate:(function<bool (unsigned long long)>*)arg4 ;
-(const unordered_set<unsigned long long*)featureIds;
-(vector<std::__1::shared_ptr<gss::StylesheetQuery<gss::PropertyID> >*)styleQueries;
-(const MultiRange<unsigned long>*)commitRangesToVenueWallRenderItemBatcher:(Batcher*)arg1 forMeshAtIndex:(unsigned long long)arg2 cullingMask:(unsigned)arg3 ;
-(const MultiRange<unsigned long>*)commitRangesToVenueWallEndCapRenderItemBatcher:(Batcher*)arg1 forMeshAtIndex:(unsigned long long)arg2 cullingMask:(unsigned)arg3 ;
-(const MultiRange<unsigned long>*)commitRangesToHorizontalVenueWallStrokeRenderItemBatcher:(Batcher*)arg1 forMeshAtIndex:(unsigned long long)arg2 cullingMask:(unsigned)arg3 ;
-(const MultiRange<unsigned long>*)commitRangesToVerticalVenueWallStrokeRenderItemBatcher:(Batcher*)arg1 forMeshAtIndex:(unsigned long long)arg2 cullingMask:(unsigned)arg3 ;
-(unsigned)cullingMask;
-(void)updateCachedStyles;
-(void)clearRouteAttributes;
-(unsigned char)maxAttributeSetsPerGroup;
-(id)initWithStyleQuery:(shared_ptr<gss::StylesheetQuery<gss::PropertyID> >*)arg1 tileZoom:(float)arg2 fixedAroundCentroid:(const Matrix<float, 2, 1>*)arg3 contentScale:(float)arg4 ;
-(vector<std::__1::shared_ptr<gss::StylesheetQuery<gss::PropertyID> >*)selectedStyleQueries;
-(float)tileZoom;
-(unsigned char)indexForGeoFeatureAttributes:(id)arg1 ;
-(void)willAddDataWithAccessor:(ResourceAccessor*)arg1 ;
-(void)didFinishAddingData;
-(BOOL)canAcceptPolygon:(SCD_Struct_VK181*)arg1 ;
-(BOOL)isFixedSize;
@end

