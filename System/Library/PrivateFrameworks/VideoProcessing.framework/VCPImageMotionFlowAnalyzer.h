/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:43 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <VideoProcessing/VCPImageAnalyzer.h>

@class VCPCNNModelEspresso, NSArray, NSString, NSMutableArray;

@interface VCPImageMotionFlowAnalyzer : VCPImageAnalyzer {

	VCPCNNModelEspresso* _modelEspresso;
	NSArray* _inputNames;
	vector<float *, std::__1::allocator<float *> >* _inputsData;
	NSString* _resConfig;
	NSMutableArray* _results;

}
-(id)init;
-(void)dealloc;
-(int)createModel;
-(int)copyImage:(CVBufferRef)arg1 toData:(float*)arg2 withChannels:(int)arg3 ;
-(int)createInput:(float*)arg1 withBuffer:(CVBufferRef)arg2 cnnInputHeight:(int)arg3 cnnInputWidth:(int)arg4 ;
-(int)analyzeImages:(CVBufferRef)arg1 secondImage:(CVBufferRef)arg2 moflow:(float*)arg3 cancel:(/*^block*/id)arg4 ;
@end

