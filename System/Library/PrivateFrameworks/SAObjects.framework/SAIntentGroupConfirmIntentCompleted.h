/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:28 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class SAIntentGroupProtobufMessage, NSString;

@interface SAIntentGroupConfirmIntentCompleted : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,retain) SAIntentGroupProtobufMessage * intentResponse; 
@property (nonatomic,copy) NSString * jsonEncodedIntentResponse; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)confirmIntentCompleted;
+(id)confirmIntentCompletedWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)ins_jsonEncodedIntentResponse;
-(id)ins_protobufEncodedIntentResponse;
-(id)groupIdentifier;
-(SAIntentGroupProtobufMessage *)intentResponse;
-(void)setIntentResponse:(SAIntentGroupProtobufMessage *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)jsonEncodedIntentResponse;
-(void)setJsonEncodedIntentResponse:(NSString *)arg1 ;
@end
