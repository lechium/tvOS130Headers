/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:51 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <Intents/_INPBIntentSupport.h>
@class NSArray;


@protocol _INPBIntentSupport <NSObject>
@property (nonatomic,copy) NSArray * intentsRestrictedWhileLockeds; 
@property (nonatomic,readonly) unsigned long long intentsRestrictedWhileLockedsCount; 
@property (nonatomic,copy) NSArray * intentsSupporteds; 
@property (nonatomic,readonly) unsigned long long intentsSupportedsCount; 
@property (nonatomic,copy) NSArray * supportedMediaCategories; 
@property (nonatomic,readonly) unsigned long long supportedMediaCategoriesCount; 
@required
+(Class)intentsRestrictedWhileLockedType;
+(Class)intentsSupportedType;
-(NSArray *)supportedMediaCategories;
-(void)setSupportedMediaCategories:(id)arg1;
-(void)clearIntentsRestrictedWhileLockeds;
-(void)addIntentsRestrictedWhileLocked:(id)arg1;
-(id)intentsRestrictedWhileLockedAtIndex:(unsigned long long)arg1;
-(void)clearIntentsSupporteds;
-(void)addIntentsSupported:(id)arg1;
-(id)intentsSupportedAtIndex:(unsigned long long)arg1;
-(void)clearSupportedMediaCategories;
-(void)addSupportedMediaCategories:(id)arg1;
-(id)supportedMediaCategoriesAtIndex:(unsigned long long)arg1;
-(NSArray *)intentsRestrictedWhileLockeds;
-(void)setIntentsRestrictedWhileLockeds:(id)arg1;
-(unsigned long long)intentsRestrictedWhileLockedsCount;
-(NSArray *)intentsSupporteds;
-(void)setIntentsSupporteds:(id)arg1;
-(unsigned long long)intentsSupportedsCount;
-(unsigned long long)supportedMediaCategoriesCount;

@end

#import <Intents/NSSecureCoding.h>
#import <Intents/NSCopying.h>

@class NSArray, NSString;

@interface _INPBIntentSupport : PBCodable <_INPBIntentSupport, NSSecureCoding, NSCopying> {

	{?=} _has;
	BOOL __encodeLegacyGloryData;
	NSArray* _intentsRestrictedWhileLockeds;
	NSArray* _intentsSupporteds;
	NSArray* _supportedMediaCategories;

}

@property (assign,setter=_setEncodeLegacyGloryData:,nonatomic) BOOL _encodeLegacyGloryData;              //@synthesize _encodeLegacyGloryData=__encodeLegacyGloryData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSArray * intentsRestrictedWhileLockeds;                                      //@synthesize intentsRestrictedWhileLockeds=_intentsRestrictedWhileLockeds - In the implementation block
@property (nonatomic,readonly) unsigned long long intentsRestrictedWhileLockedsCount; 
@property (nonatomic,copy) NSArray * intentsSupporteds;                                                  //@synthesize intentsSupporteds=_intentsSupporteds - In the implementation block
@property (nonatomic,readonly) unsigned long long intentsSupportedsCount; 
@property (nonatomic,copy) NSArray * supportedMediaCategories;                                           //@synthesize supportedMediaCategories=_supportedMediaCategories - In the implementation block
@property (nonatomic,readonly) unsigned long long supportedMediaCategoriesCount; 
+(BOOL)supportsSecureCoding;
+(Class)intentsRestrictedWhileLockedType;
+(Class)intentsSupportedType;
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
-(NSArray *)supportedMediaCategories;
-(void)setSupportedMediaCategories:(NSArray *)arg1 ;
-(void)clearIntentsRestrictedWhileLockeds;
-(void)addIntentsRestrictedWhileLocked:(id)arg1 ;
-(id)intentsRestrictedWhileLockedAtIndex:(unsigned long long)arg1 ;
-(void)clearIntentsSupporteds;
-(void)addIntentsSupported:(id)arg1 ;
-(id)intentsSupportedAtIndex:(unsigned long long)arg1 ;
-(void)clearSupportedMediaCategories;
-(void)addSupportedMediaCategories:(id)arg1 ;
-(id)supportedMediaCategoriesAtIndex:(unsigned long long)arg1 ;
-(NSArray *)intentsRestrictedWhileLockeds;
-(void)setIntentsRestrictedWhileLockeds:(NSArray *)arg1 ;
-(unsigned long long)intentsRestrictedWhileLockedsCount;
-(NSArray *)intentsSupporteds;
-(void)setIntentsSupporteds:(NSArray *)arg1 ;
-(unsigned long long)intentsSupportedsCount;
-(unsigned long long)supportedMediaCategoriesCount;
@end
