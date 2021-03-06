/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:16 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/Frameworks/RemoteManagementModel.framework/RemoteManagementModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemoteManagementModel/RemoteManagementModel-Structs.h>
#import <RemoteManagementModel/RMModelPayloadBase.h>

@class NSString, RMModelAnyPayload;

@interface RMModelDeclarationBase : RMModelPayloadBase {

	NSString* _declarationType;
	NSString* _declarationIdentifier;
	NSString* _declarationDescription;
	NSString* _declarationServerToken;
	RMModelAnyPayload* _declarationPayload;

}

@property (nonatomic,copy) NSString * declarationType;                          //@synthesize declarationType=_declarationType - In the implementation block
@property (nonatomic,copy) NSString * declarationIdentifier;                    //@synthesize declarationIdentifier=_declarationIdentifier - In the implementation block
@property (nonatomic,copy) NSString * declarationDescription;                   //@synthesize declarationDescription=_declarationDescription - In the implementation block
@property (nonatomic,copy) NSString * declarationServerToken;                   //@synthesize declarationServerToken=_declarationServerToken - In the implementation block
@property (nonatomic,copy) RMModelAnyPayload * declarationPayload;              //@synthesize declarationPayload=_declarationPayload - In the implementation block
+(id)declarationClassType;
+(id)load:(id)arg1 serializationType:(short)arg2 error:(id*)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDeclarationType:(NSString *)arg1 ;
-(void)setDeclarationIdentifier:(NSString *)arg1 ;
-(NSString *)declarationType;
-(NSString *)declarationIdentifier;
-(NSString *)declarationDescription;
-(void)setDeclarationDescription:(NSString *)arg1 ;
-(RMModelAnyPayload *)declarationPayload;
-(void)setDeclarationPayload:(RMModelAnyPayload *)arg1 ;
-(void)updateServerToken;
-(id)serializeWithType:(short)arg1 ;
-(BOOL)loadDeclarationFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3 ;
-(NSString *)declarationServerToken;
-(void)setDeclarationServerToken:(NSString *)arg1 ;
@end

