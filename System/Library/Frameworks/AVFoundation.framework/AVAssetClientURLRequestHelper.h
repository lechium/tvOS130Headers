/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:27 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVWeakReference, AVAssetResourceLoader;

@interface AVAssetClientURLRequestHelper : NSObject {

	AVWeakReference* _weakReferenceToSelf;
	AVWeakReference* _weakReferenceToAsset;
	/*^block*/id _figAssetProvider;
	AVWeakReference* _weakReferenceToResourceLoader;

}

@property (nonatomic,copy) id figAssetProvider;                                          //@synthesize figAssetProvider=_figAssetProvider - In the implementation block
@property (assign,nonatomic,__weak) AVAssetResourceLoader * resourceLoader; 
@property (nonatomic,readonly) const OpaqueFigAssetRef figAsset; 
-(void)dealloc;
-(id)URLAsset;
-(const OpaqueFigAssetRef)figAsset;
-(AVAssetResourceLoader *)resourceLoader;
-(id)initWithAsset:(id)arg1 ;
-(void)setFigAssetProvider:(id)arg1 ;
-(void)setResourceLoader:(AVAssetResourceLoader *)arg1 ;
-(id)figAssetProvider;
@end
