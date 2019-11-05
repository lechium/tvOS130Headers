/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:14 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iCalendar/ICSPredefinedValue.h>

@class NSString;

@interface ICSStatusValue : ICSPredefinedValue {

	NSString* _statusString;

}

@property (retain) NSString * statusString;              //@synthesize statusString=_statusString - In the implementation block
+(id)statusValueFromICSString:(id)arg1 ;
+(id)statusTypeFromCode:(int)arg1 statusString:(id)arg2 ;
+(id)statusTypeFromCode:(int)arg1 ;
-(NSString *)statusString;
-(void)setStatusString:(NSString *)arg1 ;
-(void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2 ;
@end
