/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:54:29 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/PineBoard.app/PineBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PineBoard/PineBoard-Structs.h>
#import <PineBoard/XBSnapshotDataProvider.h>

@class XBSnapshotDataProviderContext, FBSceneSnapshot, UIImage, NSString;

@interface PBSceneSnapshotDataProvider : NSObject <XBSnapshotDataProvider> {

	XBSnapshotDataProviderContext* _context;
	FBSceneSnapshot* _snapshot;
	UIImage* _cachedImage;
	double _scaleFactor;

}

@property (nonatomic,readonly) FBSceneSnapshot * snapshot;                                  //@synthesize snapshot=_snapshot - In the implementation block
@property (nonatomic,readonly) UIImage * cachedImage;                                       //@synthesize cachedImage=_cachedImage - In the implementation block
@property (nonatomic,readonly) double scaleFactor;                                          //@synthesize scaleFactor=_scaleFactor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain,readonly) XBSnapshotDataProviderContext * context;              //@synthesize context=_context - In the implementation block
-(id)init;
-(XBSnapshotDataProviderContext *)context;
-(FBSceneSnapshot *)snapshot;
-(double)scaleFactor;
-(id)fetchImage;
-(void)invalidateImage;
-(UIImage *)cachedImage;
-(id)initWithSceneSnapshot:(id)arg1 scaleFactor:(double)arg2 ;
@end

