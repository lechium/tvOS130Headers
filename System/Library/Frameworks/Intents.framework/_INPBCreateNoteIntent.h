/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:49 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <Intents/_INPBCreateNoteIntent.h>
@class _INPBNoteContent, _INPBDataString, _INPBIntentMetadata;


@protocol _INPBCreateNoteIntent <NSObject>
@property (nonatomic,retain) _INPBNoteContent * content; 
@property (nonatomic,readonly) BOOL hasContent; 
@property (nonatomic,retain) _INPBDataString * groupName; 
@property (nonatomic,readonly) BOOL hasGroupName; 
@property (nonatomic,retain) _INPBIntentMetadata * intentMetadata; 
@property (nonatomic,readonly) BOOL hasIntentMetadata; 
@property (nonatomic,retain) _INPBDataString * title; 
@property (nonatomic,readonly) BOOL hasTitle; 
@required
-(_INPBNoteContent *)content;
-(_INPBDataString *)title;
-(void)setTitle:(id)arg1;
-(_INPBDataString *)groupName;
-(void)setGroupName:(id)arg1;
-(void)setContent:(id)arg1;
-(BOOL)hasTitle;
-(BOOL)hasContent;
-(_INPBIntentMetadata *)intentMetadata;
-(void)setIntentMetadata:(id)arg1;
-(BOOL)hasIntentMetadata;
-(BOOL)hasGroupName;

@end

#import <Intents/NSSecureCoding.h>
#import <Intents/NSCopying.h>

@class _INPBNoteContent, _INPBDataString, _INPBIntentMetadata, NSString;

@interface _INPBCreateNoteIntent : PBCodable <_INPBCreateNoteIntent, NSSecureCoding, NSCopying> {

	{?=} _has;
	BOOL __encodeLegacyGloryData;
	_INPBNoteContent* _content;
	_INPBDataString* _groupName;
	_INPBIntentMetadata* _intentMetadata;
	_INPBDataString* _title;

}

@property (assign,setter=_setEncodeLegacyGloryData:,nonatomic) BOOL _encodeLegacyGloryData;              //@synthesize _encodeLegacyGloryData=__encodeLegacyGloryData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) _INPBNoteContent * content;                                                 //@synthesize content=_content - In the implementation block
@property (nonatomic,readonly) BOOL hasContent; 
@property (nonatomic,retain) _INPBDataString * groupName;                                                //@synthesize groupName=_groupName - In the implementation block
@property (nonatomic,readonly) BOOL hasGroupName; 
@property (nonatomic,retain) _INPBIntentMetadata * intentMetadata;                                       //@synthesize intentMetadata=_intentMetadata - In the implementation block
@property (nonatomic,readonly) BOOL hasIntentMetadata; 
@property (nonatomic,retain) _INPBDataString * title;                                                    //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) BOOL hasTitle; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(_INPBNoteContent *)content;
-(id)dictionaryRepresentation;
-(_INPBDataString *)title;
-(void)setTitle:(_INPBDataString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(_INPBDataString *)groupName;
-(void)setGroupName:(_INPBDataString *)arg1 ;
-(void)setContent:(_INPBNoteContent *)arg1 ;
-(BOOL)hasTitle;
-(BOOL)hasContent;
-(BOOL)_encodeLegacyGloryData;
-(void)_setEncodeLegacyGloryData:(BOOL)arg1 ;
-(_INPBIntentMetadata *)intentMetadata;
-(void)setIntentMetadata:(_INPBIntentMetadata *)arg1 ;
-(BOOL)hasIntentMetadata;
-(BOOL)hasGroupName;
@end

