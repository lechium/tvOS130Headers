/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:49 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Contacts.framework/Support/contactsd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <contactsd/CNXPCActivityProtocol.h>

@interface CNXPCActivity : NSObject <CNXPCActivityProtocol>
+(void)run;
+(const char*)activityIdentifier;
+(void)registerActivity;
+(id)_stringFromXPCActivityState:(long long)arg1 ;
@end
