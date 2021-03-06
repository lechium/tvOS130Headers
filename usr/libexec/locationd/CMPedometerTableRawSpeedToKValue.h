/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:46 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/locationd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <locationd/locationd-Structs.h>
#import <locationd/CMPedometerTable.h>

@interface CMPedometerTableRawSpeedToKValue : CMPedometerTable
+(id)sharedInstance;
-(void)logBins;
-(BOOL)isRawSpeedValid:(double)arg1 ;
-(BOOL)isRawSpeedRun:(double)arg1 ;
-(void)updateBinsWithTrack:(id)arg1 ;
-(double)kValueForRawSpeed:(double)arg1 ;
-(id)initWithTestMode:(BOOL)arg1 ;
-(void)binsDidChange;
-(BOOL)isWalkCalibrationAvailable;
-(BOOL)isRunCalibrationAvailable;
-(SCD_Struct_CL46)binIntervalForRawSpeed:(double)arg1 ;
@end

