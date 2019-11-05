/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:51 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <Intents/_INPBDeleteTimerIntent.h>
@class _INPBIntentMetadata, _INPBTimer;


@protocol _INPBDeleteTimerIntent <NSObject>
@property (assign,nonatomic) BOOL deleteMultiple; 
@property (assign,nonatomic) BOOL hasDeleteMultiple; 
@property (nonatomic,retain) _INPBIntentMetadata * intentMetadata; 
@property (nonatomic,readonly) BOOL hasIntentMetadata; 
@property (nonatomic,retain) _INPBTimer * targetTimer; 
@property (nonatomic,readonly) BOOL hasTargetTimer; 
@required
-(_INPBIntentMetadata *)intentMetadata;
-(void)setIntentMetadata:(id)arg1;
-(BOOL)hasIntentMetadata;
-(BOOL)deleteMultiple;
-(void)setDeleteMultiple:(BOOL)arg1;
-(BOOL)hasDeleteMultiple;
-(void)setHasDeleteMultiple:(BOOL)arg1;
-(_INPBTimer *)targetTimer;
-(void)setTargetTimer:(id)arg1;
-(BOOL)hasTargetTimer;

@end

#import <Intents/NSSecureCoding.h>
#import <Intents/NSCopying.h>

@class _INPBIntentMetadata, _INPBTimer, NSString;

@interface _INPBDeleteTimerIntent : PBCodable <_INPBDeleteTimerIntent, NSSecureCoding, NSCopying> {

	SCD_Struct_IN3 _has;
	BOOL _deleteMultiple;
	BOOL __encodeLegacyGloryData;
	_INPBIntentMetadata* _intentMetadata;
	_INPBTimer* _targetTimer;

}

@property (assign,setter=_setEncodeLegacyGloryData:,nonatomic) BOOL _encodeLegacyGloryData;              //@synthesize _encodeLegacyGloryData=__encodeLegacyGloryData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL deleteMultiple;                                                        //@synthesize deleteMultiple=_deleteMultiple - In the implementation block
@property (assign,nonatomic) BOOL hasDeleteMultiple; 
@property (nonatomic,retain) _INPBIntentMetadata * intentMetadata;                                       //@synthesize intentMetadata=_intentMetadata - In the implementation block
@property (nonatomic,readonly) BOOL hasIntentMetadata; 
@property (nonatomic,retain) _INPBTimer * targetTimer;                                                   //@synthesize targetTimer=_targetTimer - In the implementation block
@property (nonatomic,readonly) BOOL hasTargetTimer; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)_encodeLegacyGloryData;
-(void)_setEncodeLegacyGloryData:(BOOL)arg1 ;
-(_INPBIntentMetadata *)intentMetadata;
-(void)setIntentMetadata:(_INPBIntentMetadata *)arg1 ;
-(BOOL)hasIntentMetadata;
-(BOOL)deleteMultiple;
-(void)setDeleteMultiple:(BOOL)arg1 ;
-(BOOL)hasDeleteMultiple;
-(void)setHasDeleteMultiple:(BOOL)arg1 ;
-(_INPBTimer *)targetTimer;
-(void)setTargetTimer:(_INPBTimer *)arg1 ;
-(BOOL)hasTargetTimer;
@end
