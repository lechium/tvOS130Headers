/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:34 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/demod
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MSDEnrollPassword : NSObject
+(id)sharedInstance;
-(id)encodeBase64:(char*)arg1 ofLength:(unsigned)arg2 ;
-(id)createPasswordFor:(id)arg1 pairingCode:(id)arg2 ;
@end
