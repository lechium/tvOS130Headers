/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:16 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PFBase64Codec : NSObject
+(const char*)decoder;
+(id)encodeData:(id)arg1 ;
+(id)decodeString:(id)arg1 ;
+(const char*)alphabet;
+(unsigned long long)encodedUuidLength;
+(BOOL)appendPadding;
+(BOOL)checkTerminators:(long long)arg1 expected:(long long)arg2 ;
+(id)encodeBytes:(const void*)arg1 withLength:(unsigned long long)arg2 ;
+(BOOL)decodeString:(id)arg1 with:(/*^block*/id)arg2 ;
+(id)encodeUuid:(id)arg1 ;
+(id)decodeUuid:(id)arg1 ;
-(id)init;
@end

