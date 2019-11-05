/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:40 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VKMercatorTerrainHeightProvider;
#import <VectorKit/VectorKit-Structs.h>
@interface VKMercatorTerrainHeightCache : NSObject {

	id<VKMercatorTerrainHeightProvider> _heightProvider;
	map<md::Anchor *, float, std::__1::less<md::Anchor *>, std::__1::allocator<std::__1::pair<md::Anchor *const, float> > >* _anchorToHeight;

}

@property (assign,nonatomic) id<VKMercatorTerrainHeightProvider> heightProvider;              //@synthesize heightProvider=_heightProvider - In the implementation block
-(double)heightForAnchor:(Anchor*)arg1 ;
-(void)removeCachedValueForAnchor:(Anchor*)arg1 ;
-(void)invalidateRect:(const Box<double, 2>*)arg1 ;
-(id<VKMercatorTerrainHeightProvider>)heightProvider;
-(void)setHeightProvider:(id<VKMercatorTerrainHeightProvider>)arg1 ;
@end
