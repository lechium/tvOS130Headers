/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:42 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TrackingAvoidance/TrackingAvoidance-Structs.h>
@interface TAFilterGeneral : NSObject
+(id)filterSuspiciousDeviceWithStore:(id)arg1 settings:(id)arg2 ignoredSet:(id)arg3 outgoingRequests:(id*)arg4 ;
+(double)distOfTravelAlong:(id)arg1 ;
+(id)filterSuspiciousDeviceWithStore:(id)arg1 ignoredSet:(id)arg2 outgoingRequests:(id*)arg3 ;
+(id)filteredInterVisitMetadata:(id)arg1 inInterval:(id)arg2 withLocRelevanceThreshold:(double)arg3 ;
+(id)filteredPeopleDensityResults:(id)arg1 within:(id)arg2 ;
+(BOOL)inHighConfidencePedestrianState:(SCD_Struct_TA5)arg1 interval:(double)arg2 distOfTravel:(double)arg3 withFilterSettings:(id)arg4 ;
+(BOOL)shouldIssuePeopleDensityScan:(unsigned long long)arg1 distTravel:(double)arg2 durationOfTravel:(double)arg3 settings:(id)arg4 resultsInBuffer:(id)arg5 ;
@end

