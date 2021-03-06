/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:15 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/Frameworks/RemoteManagementModel.framework/RemoteManagementModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemoteManagementModel/RemoteManagementModel-Structs.h>
#import <RemoteManagementModel/RMModelConfigurationBase.h>
#import <RemoteManagementModel/RMModelRegisteredTypeProtocol.h>

@class NSString;

@interface RMModelApplicationInstallDeclaration : RMModelConfigurationBase <RMModelRegisteredTypeProtocol> {

	NSString* _payloadApplication;

}

@property (nonatomic,copy) NSString * payloadApplication;              //@synthesize payloadApplication=_payloadApplication - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)allowedPayloadKeys;
+(id)registeredClassName;
+(id)registeredIdentifier;
+(id)buildWithIdentifier:(id)arg1 application:(id)arg2 ;
+(id)buildRequiredOnlyWithIdentifier:(id)arg1 application:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)assetReferences;
-(NSString *)payloadApplication;
-(void)setPayloadApplication:(NSString *)arg1 ;
-(BOOL)loadPayload:(id)arg1 serializationType:(short)arg2 error:(id*)arg3 ;
-(id)serializePayloadWithType:(short)arg1 ;
@end

