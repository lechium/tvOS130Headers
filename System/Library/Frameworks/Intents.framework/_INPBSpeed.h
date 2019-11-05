/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:04 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <Intents/_INPBSpeed.h>
@class NSArray;


@protocol _INPBSpeed <NSObject>
@property (nonatomic,copy) NSArray * values; 
@property (nonatomic,readonly) unsigned long long valuesCount; 
@required
+(Class)valueType;
-(void)setValues:(id)arg1;
-(NSArray *)values;
-(void)addValue:(id)arg1;
-(id)valueAtIndex:(unsigned long long)arg1;
-(unsigned long long)valuesCount;
-(void)clearValues;

@end

#import <Intents/NSSecureCoding.h>
#import <Intents/NSCopying.h>

@class NSArray, NSString;

@interface _INPBSpeed : PBCodable <_INPBSpeed, NSSecureCoding, NSCopying> {

	{?=} _has;
	BOOL __encodeLegacyGloryData;
	NSArray* _values;

}

@property (assign,setter=_setEncodeLegacyGloryData:,nonatomic) BOOL _encodeLegacyGloryData;              //@synthesize _encodeLegacyGloryData=__encodeLegacyGloryData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSArray * values;                                                             //@synthesize values=_values - In the implementation block
@property (nonatomic,readonly) unsigned long long valuesCount; 
+(BOOL)supportsSecureCoding;
+(Class)valueType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setValues:(NSArray *)arg1 ;
-(NSArray *)values;
-(id)dictionaryRepresentation;
-(void)addValue:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)valueAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)valuesCount;
-(void)clearValues;
-(BOOL)_encodeLegacyGloryData;
-(void)_setEncodeLegacyGloryData:(BOOL)arg1 ;
@end
