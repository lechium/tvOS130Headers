/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:49 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/rtcreportingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <rtcreportingd/rtcreportingd-Structs.h>
#import <rtcreportingd/RTCReportingBackend.h>

@interface PowerLogBackend : RTCReportingBackend
-(id)initWithName:(id)arg1 profile:(id)arg2 productFamily:(id)arg3 ;
-(id)sendMessage:(id)arg1 timestamp:(const timeval*)arg2 method:(unsigned short)arg3 respCode:(unsigned short)arg4 eventID:(unsigned short)arg5 ;
@end
