/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:15 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemoteManagement/RMAssetResolver.h>

@protocol RMAssetResolver
@required
-(id)dataTaskWithAsset:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(id)downloadTaskWithAsset:(id)arg1 completionHandler:(/*^block*/id)arg2;

@end


@protocol OS_dispatch_queue;
@class NSURLSession, NSObject;

@interface RMAssetResolver : NSObject <RMAssetResolver> {

	NSURLSession* _URLSession;
	NSObject*<OS_dispatch_queue> _completionQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> completionQueue;              //@synthesize completionQueue=_completionQueue - In the implementation block
@property (nonatomic,retain) NSURLSession * URLSession;                                 //@synthesize URLSession=_URLSession - In the implementation block
-(id)init;
-(void)setCompletionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)completionQueue;
-(id)userAgent;
-(NSURLSession *)URLSession;
-(void)setURLSession:(NSURLSession *)arg1 ;
-(id)initWithURLSessionConfiguration:(id)arg1 ;
-(id)initWithURLSession:(id)arg1 ;
-(id)_createRequestWithURL:(id)arg1 acceptType:(id)arg2 ;
-(BOOL)_validateAsset:(id)arg1 reference:(id)arg2 didFinishWithResponse:(id)arg3 data:(id)arg4 error:(id*)arg5 ;
-(id)dataTaskWithAsset:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)downloadTaskWithAsset:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)resolveAssets:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

