/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:56 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <Intents/_INPBWellnessObjectResultValue.h>
@class _INPBDateTimeRange, _INPBString, NSArray;


@protocol _INPBWellnessObjectResultValue <NSObject>
@property (nonatomic,retain) _INPBDateTimeRange * recordDate; 
@property (nonatomic,readonly) BOOL hasRecordDate; 
@property (assign,nonatomic) int resultType; 
@property (assign,nonatomic) BOOL hasResultType; 
@property (nonatomic,retain) _INPBString * unit; 
@property (nonatomic,readonly) BOOL hasUnit; 
@property (nonatomic,copy) NSArray * values; 
@property (nonatomic,readonly) unsigned long long valuesCount; 
@required
+(Class)valuesType;
-(void)setValues:(id)arg1;
-(NSArray *)values;
-(_INPBString *)unit;
-(int)resultType;
-(void)setResultType:(int)arg1;
-(unsigned long long)valuesCount;
-(void)clearValues;
-(void)setHasResultType:(BOOL)arg1;
-(BOOL)hasResultType;
-(id)resultTypeAsString:(int)arg1;
-(int)StringAsResultType:(id)arg1;
-(id)valuesAtIndex:(unsigned long long)arg1;
-(void)addValues:(id)arg1;
-(_INPBDateTimeRange *)recordDate;
-(void)setRecordDate:(id)arg1;
-(void)setUnit:(id)arg1;
-(BOOL)hasUnit;
-(BOOL)hasRecordDate;

@end

#import <Intents/NSSecureCoding.h>
#import <Intents/NSCopying.h>

@class _INPBDateTimeRange, _INPBString, NSArray, NSString;

@interface _INPBWellnessObjectResultValue : PBCodable <_INPBWellnessObjectResultValue, NSSecureCoding, NSCopying> {

	SCD_Struct_IN3 _has;
	BOOL __encodeLegacyGloryData;
	int _resultType;
	_INPBDateTimeRange* _recordDate;
	_INPBString* _unit;
	NSArray* _values;

}

@property (assign,setter=_setEncodeLegacyGloryData:,nonatomic) BOOL _encodeLegacyGloryData;              //@synthesize _encodeLegacyGloryData=__encodeLegacyGloryData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) _INPBDateTimeRange * recordDate;                                            //@synthesize recordDate=_recordDate - In the implementation block
@property (nonatomic,readonly) BOOL hasRecordDate; 
@property (assign,nonatomic) int resultType;                                                             //@synthesize resultType=_resultType - In the implementation block
@property (assign,nonatomic) BOOL hasResultType; 
@property (nonatomic,retain) _INPBString * unit;                                                         //@synthesize unit=_unit - In the implementation block
@property (nonatomic,readonly) BOOL hasUnit; 
@property (nonatomic,copy) NSArray * values;                                                             //@synthesize values=_values - In the implementation block
@property (nonatomic,readonly) unsigned long long valuesCount; 
+(BOOL)supportsSecureCoding;
+(Class)valuesType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setValues:(NSArray *)arg1 ;
-(NSArray *)values;
-(_INPBString *)unit;
-(id)dictionaryRepresentation;
-(int)resultType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setResultType:(int)arg1 ;
-(unsigned long long)valuesCount;
-(void)clearValues;
-(void)setHasResultType:(BOOL)arg1 ;
-(BOOL)hasResultType;
-(id)resultTypeAsString:(int)arg1 ;
-(int)StringAsResultType:(id)arg1 ;
-(id)valuesAtIndex:(unsigned long long)arg1 ;
-(void)addValues:(id)arg1 ;
-(BOOL)_encodeLegacyGloryData;
-(void)_setEncodeLegacyGloryData:(BOOL)arg1 ;
-(_INPBDateTimeRange *)recordDate;
-(void)setRecordDate:(_INPBDateTimeRange *)arg1 ;
-(void)setUnit:(_INPBString *)arg1 ;
-(BOOL)hasUnit;
-(BOOL)hasRecordDate;
@end

