/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:21 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLAssetsdDemoServiceProtocol.h>

@class PLAssetsdConnectionAuthorization, NSString;

@interface PLAssetsdDemoService : NSObject <PLAssetsdDemoServiceProtocol> {

	PLAssetsdConnectionAuthorization* _connectionAuthorization;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cleanupForStoreDemoMode;
-(void)hasCompletedRestorePostProcessingWithReply:(/*^block*/id)arg1 ;
-(void)hasCompletedMomentAnalysisWithReply:(/*^block*/id)arg1 ;
-(id)initWithConnectionAuthorization:(id)arg1 ;
@end
