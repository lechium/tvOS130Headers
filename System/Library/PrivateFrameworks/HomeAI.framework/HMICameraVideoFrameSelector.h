/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:31 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeAI/HomeAI-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <HomeAI/HMICameraVideoFrameSamplerDelegate.h>
#import <HomeAI/HMFLogging.h>

@class HMICameraVideoFrameSampler, NSMutableArray, NSArray, NSString;

@interface HMICameraVideoFrameSelector : HMFObject <HMICameraVideoFrameSamplerDelegate, HMFLogging> {

	HMICameraVideoFrameSampler* _sampler;
	NSMutableArray* _framesInternal;
	long long _maxFrameCount;
	SCD_Struct_HM4 _sampleRate;

}

@property (readonly) HMICameraVideoFrameSampler * sampler;              //@synthesize sampler=_sampler - In the implementation block
@property (readonly) SCD_Struct_HM4 sampleRate;                         //@synthesize sampleRate=_sampleRate - In the implementation block
@property (readonly) NSMutableArray * framesInternal;                   //@synthesize framesInternal=_framesInternal - In the implementation block
@property (readonly) long long maxFrameCount;                           //@synthesize maxFrameCount=_maxFrameCount - In the implementation block
@property (readonly) NSArray * frames; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(void)finish;
-(NSArray *)frames;
-(SCD_Struct_HM4)sampleRate;
-(HMICameraVideoFrameSampler *)sampler;
-(id)initWithResourceAttributes:(id)arg1 sampleRate:(SCD_Struct_HM4)arg2 ;
-(BOOL)handleVideoFrame:(id)arg1 error:(id*)arg2 ;
-(BOOL)willHandleFrames;
-(NSMutableArray *)framesInternal;
-(long long)maxFrameCount;
-(void)sampler:(id)arg1 didFindSample:(id)arg2 target:(id)arg3 ;
@end

