/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:51 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotosUICore/PhotosUICore-Structs.h>
@class NSMutableArray, NSMutableIndexSet, NSString, NSIndexSet;

@interface PXTilingLayoutInvalidationContext : NSObject {

	NSMutableArray* _invalidatedTileIdentifiers;
	NSMutableIndexSet* _invalidatedTileGroups;
	BOOL _invalidatedAllTiles;
	BOOL _invalidatedContentBounds;
	BOOL _invalidatedScrollBounds;
	BOOL _invalidatedVisibleRect;
	BOOL _invalidatedScrollInfo;
	NSString* _tag;

}

@property (nonatomic,readonly) NSIndexSet * invalidatedTileGroups; 
@property (nonatomic,readonly) BOOL invalidatedAllTiles;                        //@synthesize invalidatedAllTiles=_invalidatedAllTiles - In the implementation block
@property (nonatomic,readonly) BOOL invalidatedContentBounds;                   //@synthesize invalidatedContentBounds=_invalidatedContentBounds - In the implementation block
@property (nonatomic,readonly) BOOL invalidatedScrollBounds;                    //@synthesize invalidatedScrollBounds=_invalidatedScrollBounds - In the implementation block
@property (nonatomic,readonly) BOOL invalidatedVisibleRect;                     //@synthesize invalidatedVisibleRect=_invalidatedVisibleRect - In the implementation block
@property (nonatomic,readonly) BOOL invalidatedScrollInfo;                      //@synthesize invalidatedScrollInfo=_invalidatedScrollInfo - In the implementation block
@property (nonatomic,copy) NSString * tag;                                      //@synthesize tag=_tag - In the implementation block
-(id)description;
-(NSString *)tag;
-(void)setTag:(NSString *)arg1 ;
-(void)invalidateEverything;
-(void)invalidateTileWithIdentifier:(PXTileIdentifier)arg1 ;
-(void)invalidateTilesInGroup:(unsigned long long)arg1 ;
-(void)enumerateInvalidatedTileIdentifiersUsingBlock:(/*^block*/id)arg1 ;
-(void)invalidateAllTiles;
-(void)invalidateContentBounds;
-(void)invalidateScrollBounds;
-(void)invalidateVisibleRect;
-(void)invalidateScrollInfo;
-(NSIndexSet *)invalidatedTileGroups;
-(BOOL)invalidatedAllTiles;
-(BOOL)invalidatedContentBounds;
-(BOOL)invalidatedScrollBounds;
-(BOOL)invalidatedVisibleRect;
-(BOOL)invalidatedScrollInfo;
@end

