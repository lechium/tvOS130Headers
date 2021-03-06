/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:43 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/MetricMeasurement.framework/MetricMeasurement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetricMeasurement/MetricMeasurement-Structs.h>
#import <MetricMeasurement/MXMMetric.h>

@class MXMSampleTag, MXMInstrument;

@interface MXMClockMetric : MXMMetric {

	MXMSampleTag* _tag;

}

@property (nonatomic,readonly) MXMInstrument * instrument; 
+(BOOL)supportsSecureCoding;
+(id)absoluteTime;
+(id)continuousTime;
+(id)allTime;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)copy;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithTag:(id)arg1 ;
-(id)_unit;
-(BOOL)_shouldConstructProbe;
-(BOOL)harvestData:(id*)arg1 error:(id*)arg2 ;
-(id)_unitWithTag:(id)arg1 ;
@end

