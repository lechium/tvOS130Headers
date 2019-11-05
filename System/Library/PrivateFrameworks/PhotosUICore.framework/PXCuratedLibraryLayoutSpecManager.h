/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:45 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PXFeatureSpecManager.h>

@class NSArray, PXCuratedLibraryLayoutSpec;

@interface PXCuratedLibraryLayoutSpecManager : PXFeatureSpecManager {

	NSArray* _availableThumbnailSizes;

}

@property (nonatomic,readonly) PXCuratedLibraryLayoutSpec * spec; 
@property (nonatomic,retain) NSArray * availableThumbnailSizes;                //@synthesize availableThumbnailSizes=_availableThumbnailSizes - In the implementation block
-(id)createSpec;
-(Class)specClass;
-(BOOL)shouldUpdateSpecForExtendedTraitCollection:(id)arg1 change:(unsigned long long)arg2 ;
-(void)setAvailableThumbnailSizes:(NSArray *)arg1 ;
-(NSArray *)availableThumbnailSizes;
@end
