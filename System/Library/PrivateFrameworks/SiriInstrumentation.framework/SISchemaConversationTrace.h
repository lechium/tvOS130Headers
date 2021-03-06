/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:54 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtocolBuffer/PBCodable.h>
#import <SiriInstrumentation/SISchemaConversationTrace.h>
@class NSData;


@protocol SISchemaConversationTrace <NSObject>
@property (nonatomic,copy) NSData * previousTurnID; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(id)initWithDictionary:(id)arg1;
-(NSData *)jsonData;
-(void)setPreviousTurnID:(id)arg1;
-(id)initWithJSON:(id)arg1;
-(NSData *)previousTurnID;

@end

#import <SiriInstrumentation/NSSecureCoding.h>

@class NSData, NSString;

@interface SISchemaConversationTrace : PBCodable <SISchemaConversationTrace, NSSecureCoding> {

	NSData* _previousTurnID;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSData * previousTurnID;                 //@synthesize previousTurnID=_previousTurnID - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSData *)jsonData;
-(void)setPreviousTurnID:(NSData *)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(NSData *)previousTurnID;
@end

