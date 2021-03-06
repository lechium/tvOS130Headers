/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:49 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXUIImageProvider.h>

@protocol PXUIImageProvider;
@class NSString;

@interface PXCMMPreviewUIImageProvider : NSObject <PXUIImageProvider> {

	id<PXUIImageProvider> _underlyingAssetImageProvider;

}

@property (nonatomic,readonly) id<PXUIImageProvider> underlyingAssetImageProvider;              //@synthesize underlyingAssetImageProvider=_underlyingAssetImageProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)startCachingImagesForAssets:(id)arg1 targetSize:(CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 ;
-(void)stopCachingImagesForAssets:(id)arg1 targetSize:(CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 ;
-(void)stopCachingImagesForAllAssets;
-(void)cancelImageRequest:(long long)arg1 ;
-(long long)requestImageForAsset:(id)arg1 targetSize:(CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(/*^block*/id)arg5 ;
-(id)initWithUnderlyingAssetImageProvider:(id)arg1 ;
-(id)_underlyingAssetsFromPreviewAssets:(id)arg1 ;
-(id<PXUIImageProvider>)underlyingAssetImageProvider;
@end

