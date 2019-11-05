/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:54 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtocolBuffer/PBCodable.h>
#import <SiriInstrumentation/SISchemaClientFlow.h>
@class NSString, NSData;


@protocol SISchemaClientFlow <NSObject>
@property (nonatomic,copy) NSString * clientFlowPayload; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(id)initWithDictionary:(id)arg1;
-(NSData *)jsonData;
-(id)initWithJSON:(id)arg1;
-(void)setClientFlowPayload:(id)arg1;
-(NSString *)clientFlowPayload;

@end

#import <SiriInstrumentation/NSSecureCoding.h>

@class NSString, NSData;

@interface SISchemaClientFlow : PBCodable <SISchemaClientFlow, NSSecureCoding> {

	NSString* _clientFlowPayload;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * clientFlowPayload;              //@synthesize clientFlowPayload=_clientFlowPayload - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSData *)jsonData;
-(id)initWithJSON:(id)arg1 ;
-(void)setClientFlowPayload:(NSString *)arg1 ;
-(NSString *)clientFlowPayload;
@end
