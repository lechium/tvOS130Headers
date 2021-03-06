/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:54 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtocolBuffer/PBCodable.h>
#import <SiriInstrumentation/SISchemaAcousticProfile.h>
@class NSData;


@protocol SISchemaAcousticProfile <NSObject>
@property (nonatomic,copy) NSData * a; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(id)initWithDictionary:(id)arg1;
-(void)setA:(id)arg1;
-(NSData *)a;
-(NSData *)jsonData;
-(id)initWithJSON:(id)arg1;

@end

#import <SiriInstrumentation/NSSecureCoding.h>

@class NSData, NSString;

@interface SISchemaAcousticProfile : PBCodable <SISchemaAcousticProfile, NSSecureCoding> {

	NSData* _a;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (a,nonatomic,copy) NSData * a;                            //@synthesize a=_a - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setA:(NSData *)arg1 ;
-(NSData *)a;
-(NSData *)jsonData;
-(id)initWithJSON:(id)arg1 ;
@end

