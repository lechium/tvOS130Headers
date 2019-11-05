/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:11 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/REPredictor.h>
#import <RelevanceEngine/REAppUsagePredictorProperties.h>

@class RETimeline;

@interface REAppUsagePredictor : REPredictor <REAppUsagePredictorProperties> {

	RETimeline* _timeline;

}

@property (nonatomic,readonly) RETimeline * timeline; 
+(double)updateInterval;
+(id)supportedFeatures;
-(void)update;
-(RETimeline *)timeline;
-(id)featureValueForFeature:(id)arg1 element:(id)arg2 engine:(id)arg3 trainingContext:(id)arg4 ;
@end
