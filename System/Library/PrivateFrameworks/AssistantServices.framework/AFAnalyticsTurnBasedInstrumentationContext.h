/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:09 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <AssistantServices/NSSecureCoding.h>

@class SISchemaClientTurnContext, NSUUID;

@interface AFAnalyticsTurnBasedInstrumentationContext : NSObject <NSSecureCoding> {

	NSUUID* _turnIdentifier;
	SISchemaClientTurnContext* _turnContext;

}

@property (nonatomic,readonly) NSUUID * turnIdentifier; 
+(BOOL)supportsSecureCoding;
+(id)newTurnBasedContextWithPreviousTurnID:(NSUUID*)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)turnIdentifier;
-(id)initWithTurnIdentifier:(NSUUID*)arg1 ;
-(void)emitInstrumentation:(id)arg1 ;
-(void)emitInstrumentation:(id)arg1 machAbsoluteTime:(unsigned long long)arg2 ;
-(id)nextTurnBasedContext;
@end
