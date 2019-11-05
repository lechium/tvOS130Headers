/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:23 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HIDAnalytics.framework/HIDAnalytics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HIDAnalytics/HIDAnalytics-Structs.h>
#import <HIDAnalytics/HIDAnalyticsEvent.h>

@class HIDAnalyticsHistogramEventField;

@interface HIDAnalyticsHistogramEvent : HIDAnalyticsEvent {

	HIDAnalyticsHistogramEventField* _field;
	BOOL _isUpdated;

}
-(id)value;
-(void)setValue:(id)arg1 ;
-(void)addField:(id)arg1 ;
-(void)setIntegerValue:(unsigned long long)arg1 ;
-(void)setIntegerValue:(unsigned long long)arg1 forField:(id)arg2 ;
-(id)initWithAttributes:(id)arg1 description:(id)arg2 ;
-(void)addHistogramFieldWithSegments:(id)arg1 segments:(HIDAnalyticsHistogramSegmentConfig*)arg2 count:(long long)arg3 ;
@end
