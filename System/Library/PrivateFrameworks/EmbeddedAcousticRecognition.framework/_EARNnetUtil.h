/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:37 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _EARNnetUtil : NSObject
+(void)initialize;
+(id)doBackPropWithNnetModelFile:(id)arg1 inputFeatureVector:(id)arg2 inputTargetVector:(id)arg3 inputLearningRate:(float)arg4 inputFreezeComponents:(id)arg5 inputNumLocalIterations:(int)arg6 inputGradNormFactor:(float)arg7 inputGradNormType:(id)arg8 inputBatchSize:(float)arg9 inputObjectiveFunction:(id)arg10 outTrainingLosses:(id*)arg11 outModelLayersUpdated:(id*)arg12 ;
+(id)doBackPropWithNnetModelFile:(id)arg1 inputFeatureVector:(id)arg2 inputTargetVector:(id)arg3 inputLearningRate:(float)arg4 inputFreezeComponents:(id)arg5 inputNumLocalIterations:(int)arg6 inputGradNormFactor:(float)arg7 inputGradNormType:(id)arg8 inputBatchSize:(float)arg9 inputObjectiveFunction:(id)arg10 outTrainingLoss:(float*)arg11 outModelLayersUpdated:(id*)arg12 ;
@end
