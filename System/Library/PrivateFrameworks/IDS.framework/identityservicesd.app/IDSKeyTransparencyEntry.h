/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:57 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <identityservicesd/identityservicesd-Structs.h>
@class NSData;

@interface IDSKeyTransparencyEntry : NSObject {

	NSData* _pushToken;
	NSData* _loggableData;

}

@property (nonatomic,readonly) NSData * pushToken;                 //@synthesize pushToken=_pushToken - In the implementation block
@property (nonatomic,readonly) NSData * loggableData;              //@synthesize loggableData=_loggableData - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSData *)pushToken;
-(id)initWithPushToken:(id)arg1 loggableData:(id)arg2 ;
-(NSData *)loggableData;
-(BOOL)isEqualToKeyTransparencyEntry:(id)arg1 ;
@end
