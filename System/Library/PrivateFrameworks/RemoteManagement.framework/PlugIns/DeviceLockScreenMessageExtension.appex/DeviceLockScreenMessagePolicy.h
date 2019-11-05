/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:16 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/PlugIns/DeviceLockScreenMessageExtension.appex/DeviceLockScreenMessageExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DeviceLockScreenMessageExtension/NSSecureCoding.h>

@class NSString, RMModelDeviceLockScreenMessageDeclaration;

@interface DeviceLockScreenMessagePolicy : NSObject <NSSecureCoding> {

	NSString* _accountIdentifier;
	long long _accountType;
	RMModelDeviceLockScreenMessageDeclaration* _declaration;

}

@property (nonatomic,copy,readonly) NSString * accountIdentifier;                                    //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,readonly) long long accountType;                                                //@synthesize accountType=_accountType - In the implementation block
@property (nonatomic,readonly) RMModelDeviceLockScreenMessageDeclaration * declaration;              //@synthesize declaration=_declaration - In the implementation block
@property (readonly) NSString * policyKey; 
+(BOOL)supportsSecureCoding;
+(id)policyWithConfiguration:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)accountType;
-(NSString *)accountIdentifier;
-(RMModelDeviceLockScreenMessageDeclaration *)declaration;
-(NSString *)policyKey;
-(id)initWithDeclaration:(id)arg1 accountIdentifier:(id)arg2 accountType:(long long)arg3 ;
-(BOOL)isEqualToDeviceLockScreenMessagePolicy:(id)arg1 ;
@end
