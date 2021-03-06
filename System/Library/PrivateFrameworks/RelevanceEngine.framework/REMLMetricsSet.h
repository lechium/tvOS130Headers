/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:12 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/REMLMetricsProvider.h>

@class NSMutableDictionary, NSMutableSet;

@interface REMLMetricsSet : NSObject <REMLMetricsProvider> {

	NSMutableDictionary* metricsIndex;
	NSMutableSet* metricsSet;

}
-(id)name;
-(id)init;
-(void)reset;
-(BOOL)addMetrics:(id)arg1 ;
-(void)updateMetricsFromFeatures:(id)arg1 prediction:(id)arg2 truth:(id)arg3 ;
-(id)getMetricsByName:(id)arg1 ;
@end

