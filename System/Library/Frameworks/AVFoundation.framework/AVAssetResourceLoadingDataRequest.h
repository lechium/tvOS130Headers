/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:32 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVAssetResourceLoadingDataRequestInternal;

@interface AVAssetResourceLoadingDataRequest : NSObject {

	AVAssetResourceLoadingDataRequestInternal* _dataRequest;

}

@property (nonatomic,readonly) long long requestedOffset; 
@property (nonatomic,readonly) long long requestedLength; 
@property (nonatomic,readonly) BOOL requestsAllDataToEndOfResource; 
@property (nonatomic,readonly) long long currentOffset; 
-(id)description;
-(id)init;
-(void)dealloc;
-(CFDictionaryRef)_requestInfo;
-(long long)requestedOffset;
-(long long)requestedLength;
-(long long)currentOffset;
-(BOOL)requestsAllDataToEndOfResource;
-(id)initWithLoadingRequest:(id)arg1 requestedOffset:(long long)arg2 requestedLength:(long long)arg3 requestsAllDataToEndOfResource:(BOOL)arg4 canSupplyIncrementalDataImmediately:(BOOL)arg5 ;
-(id)_loadingRequest;
-(void)respondWithData:(id)arg1 ;
@end

