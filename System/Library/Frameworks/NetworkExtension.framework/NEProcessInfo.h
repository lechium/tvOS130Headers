/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:35 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface NEProcessInfo : NSObject
+(void)initGlobals;
+(id)copyUUIDForSingleArch:(int)arg1 ;
+(id)copyUUIDsForFatBinary:(int)arg1 ;
+(id)copyUUIDsFromExecutable:(const char*)arg1 ;
+(id)copyUUIDsForExecutable:(id)arg1 ;
+(id)copyUUIDsForBundleID:(id)arg1 uid:(unsigned)arg2 ;
+(void)clearUUIDCache;
+(id)getApplicationNameFromPlugin:(id)arg1 userUID:(unsigned)arg2 ;
+(id)copyDNSUUIDs;
+(id)copyNEHelperUUIDs;
+(BOOL)is64bitCapable;
-(id)init;
@end

