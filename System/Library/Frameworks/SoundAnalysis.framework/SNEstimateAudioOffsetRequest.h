/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:48 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SoundAnalysis/SNAnalyzerProviding.h>
#import <SoundAnalysis/SNRequest.h>

@class SNAudioOffsetEstimator, NSString;

@interface SNEstimateAudioOffsetRequest : NSObject <SNAnalyzerProviding, SNRequest> {

	SNAudioOffsetEstimator* _detector;

}

@property (nonatomic,readonly) double minimumObservableOffset; 
@property (nonatomic,readonly) double maximumObservableOffset; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) id<SNAnalyzing> analyzer; 
-(id)init;
-(double)offset;
-(id<SNAnalyzing>)analyzer;
-(double)minimumObservableOffset;
-(double)maximumObservableOffset;
@end
