/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:49 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Support/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <appstored/AssetDataConsumer.h>

@protocol SZExtractor;
@class NSString;

@interface ZipDataStreamAdapter : NSObject <AssetDataConsumer> {

	BOOL _dataComplete;
	id<SZExtractor> _extractor;
	BOOL _hasConsumedData;
	NSString* _path;
	unsigned long long _resumptionOffset;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)_prepareExtractor:(id)arg1 toPath:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(NSString *)description;
-(void)finishWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)prepareWithCompletionHandler:(/*^block*/id)arg1 ;
-(unsigned long long)diskUsage;
-(void)consumeData:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)suspendWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithExtractor:(id)arg1 toPath:(id)arg2 ;
@end
