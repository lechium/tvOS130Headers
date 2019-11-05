/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:15 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BackBoardServices/BackBoardServices-Structs.h>
#import <BackBoardServices/NSSecureCoding.h>
#import <BackBoardServices/BSProtobufSerializable.h>
#import <BackBoardServices/NSCopying.h>
#import <BackBoardServices/NSMutableCopying.h>

@class BKSHIDEventDeferringToken, NSString;

@interface BKSHIDEventDeferringTarget : NSObject <NSSecureCoding, BSProtobufSerializable, NSCopying, NSMutableCopying> {

	int _pid;
	BKSHIDEventDeferringToken* _token;

}

@property (nonatomic,readonly) int pid;                                             //@synthesize pid=_pid - In the implementation block
@property (nonatomic,copy,readonly) BKSHIDEventDeferringToken * token;              //@synthesize token=_token - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)protobufSchema;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)init;
-(BKSHIDEventDeferringToken *)token;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(int)pid;
-(id)initForProtobufDecoding;
-(id)_initWithPID:(int)arg1 token:(id)arg2 ;
@end
