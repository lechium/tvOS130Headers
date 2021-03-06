/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:32 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVCaptureSynchronizedData.h>

@class AVCaptureSynchronizedDepthDataInternal, AVDepthData;

@interface AVCaptureSynchronizedDepthData : AVCaptureSynchronizedData {

	AVCaptureSynchronizedDepthDataInternal* _internal;

}

@property (readonly) AVDepthData * depthData; 
@property (readonly) BOOL depthDataWasDropped; 
@property (readonly) long long droppedReason; 
-(id)debugDescription;
-(id)description;
-(void)dealloc;
-(AVDepthData *)depthData;
-(long long)droppedReason;
-(BOOL)depthDataWasDropped;
-(id)_initWithDepthData:(id)arg1 timestamp:(SCD_Struct_AV7)arg2 depthDataWasDropped:(BOOL)arg3 droppedReason:(long long)arg4 ;
@end

