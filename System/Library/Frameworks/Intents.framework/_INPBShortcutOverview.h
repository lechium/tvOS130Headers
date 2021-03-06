/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:04 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <Intents/_INPBShortcutOverview.h>
@class _INPBDataString, _INPBImageValue, NSArray;


@protocol _INPBShortcutOverview <NSObject>
@property (nonatomic,retain) _INPBDataString * descriptiveText; 
@property (nonatomic,readonly) BOOL hasDescriptiveText; 
@property (nonatomic,retain) _INPBImageValue * icon; 
@property (nonatomic,readonly) BOOL hasIcon; 
@property (nonatomic,retain) _INPBDataString * name; 
@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,copy) NSArray * steps; 
@property (nonatomic,readonly) unsigned long long stepsCount; 
@property (nonatomic,retain) _INPBDataString * voiceCommand; 
@property (nonatomic,readonly) BOOL hasVoiceCommand; 
@required
+(Class)stepsType;
-(_INPBDataString *)name;
-(void)setName:(id)arg1;
-(_INPBImageValue *)icon;
-(void)setIcon:(id)arg1;
-(BOOL)hasName;
-(NSArray *)steps;
-(unsigned long long)stepsCount;
-(id)stepsAtIndex:(unsigned long long)arg1;
-(BOOL)hasIcon;
-(void)clearSteps;
-(void)setSteps:(id)arg1;
-(void)addSteps:(id)arg1;
-(_INPBDataString *)descriptiveText;
-(void)setDescriptiveText:(id)arg1;
-(_INPBDataString *)voiceCommand;
-(void)setVoiceCommand:(id)arg1;
-(BOOL)hasVoiceCommand;
-(BOOL)hasDescriptiveText;

@end

#import <Intents/NSSecureCoding.h>
#import <Intents/NSCopying.h>

@class _INPBDataString, _INPBImageValue, NSArray, NSString;

@interface _INPBShortcutOverview : PBCodable <_INPBShortcutOverview, NSSecureCoding, NSCopying> {

	{?=} _has;
	BOOL __encodeLegacyGloryData;
	_INPBDataString* _descriptiveText;
	_INPBImageValue* _icon;
	_INPBDataString* _name;
	NSArray* _steps;
	_INPBDataString* _voiceCommand;

}

@property (assign,setter=_setEncodeLegacyGloryData:,nonatomic) BOOL _encodeLegacyGloryData;              //@synthesize _encodeLegacyGloryData=__encodeLegacyGloryData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) _INPBDataString * descriptiveText;                                          //@synthesize descriptiveText=_descriptiveText - In the implementation block
@property (nonatomic,readonly) BOOL hasDescriptiveText; 
@property (nonatomic,retain) _INPBImageValue * icon;                                                     //@synthesize icon=_icon - In the implementation block
@property (nonatomic,readonly) BOOL hasIcon; 
@property (nonatomic,retain) _INPBDataString * name;                                                     //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,copy) NSArray * steps;                                                              //@synthesize steps=_steps - In the implementation block
@property (nonatomic,readonly) unsigned long long stepsCount; 
@property (nonatomic,retain) _INPBDataString * voiceCommand;                                             //@synthesize voiceCommand=_voiceCommand - In the implementation block
@property (nonatomic,readonly) BOOL hasVoiceCommand; 
+(BOOL)supportsSecureCoding;
+(Class)stepsType;
-(_INPBDataString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(_INPBDataString *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(_INPBImageValue *)icon;
-(void)setIcon:(_INPBImageValue *)arg1 ;
-(BOOL)hasName;
-(NSArray *)steps;
-(unsigned long long)stepsCount;
-(id)stepsAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasIcon;
-(void)clearSteps;
-(void)setSteps:(NSArray *)arg1 ;
-(void)addSteps:(id)arg1 ;
-(BOOL)_encodeLegacyGloryData;
-(void)_setEncodeLegacyGloryData:(BOOL)arg1 ;
-(_INPBDataString *)descriptiveText;
-(void)setDescriptiveText:(_INPBDataString *)arg1 ;
-(_INPBDataString *)voiceCommand;
-(void)setVoiceCommand:(_INPBDataString *)arg1 ;
-(BOOL)hasVoiceCommand;
-(BOOL)hasDescriptiveText;
@end

