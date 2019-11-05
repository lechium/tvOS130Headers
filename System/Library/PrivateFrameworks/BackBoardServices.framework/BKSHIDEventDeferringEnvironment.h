/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:14 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BackBoardServices/BackBoardServices-Structs.h>
#import <BackBoardServices/NSSecureCoding.h>
#import <BackBoardServices/BSProtobufSerializable.h>
#import <BackBoardServices/NSCopying.h>

@class NSString;

@interface BKSHIDEventDeferringEnvironment : NSObject <NSSecureCoding, BSProtobufSerializable, NSCopying> {

	NSString* _identifier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)protobufSchema;
+(id)keyboardFocusEnvironment;
+(id)systemEnvironment;
+(id)environmentWithIdentifier:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initForProtobufDecoding;
-(id)_initWithIdentifier:(id)arg1 ;
-(BOOL)_isSystemEnvironment;
-(BOOL)_isKeyboardFocusEnvironment;
@end
