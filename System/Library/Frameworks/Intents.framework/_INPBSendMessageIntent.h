/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:54 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <Intents/_INPBSendMessageIntent.h>
@class NSArray, _INPBString, NSString, _INPBIntentMetadata, _INPBContact, _INPBDataString;


@protocol _INPBSendMessageIntent <NSObject>
@property (nonatomic,copy) NSArray * attachments; 
@property (nonatomic,readonly) unsigned long long attachmentsCount; 
@property (nonatomic,retain) _INPBString * content; 
@property (nonatomic,readonly) BOOL hasContent; 
@property (nonatomic,copy) NSString * conversationIdentifier; 
@property (nonatomic,readonly) BOOL hasConversationIdentifier; 
@property (assign,nonatomic) int effect; 
@property (assign,nonatomic) BOOL hasEffect; 
@property (nonatomic,retain) _INPBString * groupName; 
@property (nonatomic,readonly) BOOL hasGroupName; 
@property (nonatomic,retain) _INPBIntentMetadata * intentMetadata; 
@property (nonatomic,readonly) BOOL hasIntentMetadata; 
@property (assign,nonatomic) int messageType; 
@property (assign,nonatomic) BOOL hasMessageType; 
@property (nonatomic,copy) NSArray * recipients; 
@property (nonatomic,readonly) unsigned long long recipientsCount; 
@property (nonatomic,retain) _INPBContact * sender; 
@property (nonatomic,readonly) BOOL hasSender; 
@property (nonatomic,copy) NSString * serviceName; 
@property (nonatomic,readonly) BOOL hasServiceName; 
@property (nonatomic,retain) _INPBDataString * speakableGroupName; 
@property (nonatomic,readonly) BOOL hasSpeakableGroupName; 
@required
+(Class)recipientType;
+(Class)attachmentsType;
-(_INPBContact *)sender;
-(void)setSender:(id)arg1;
-(_INPBString *)content;
-(NSArray *)attachments;
-(void)setAttachments:(id)arg1;
-(NSString *)serviceName;
-(void)addRecipient:(id)arg1;
-(void)setRecipients:(id)arg1;
-(NSArray *)recipients;
-(int)messageType;
-(void)setMessageType:(int)arg1;
-(void)setServiceName:(id)arg1;
-(BOOL)hasServiceName;
-(_INPBString *)groupName;
-(void)setGroupName:(id)arg1;
-(void)setContent:(id)arg1;
-(void)setHasMessageType:(BOOL)arg1;
-(BOOL)hasMessageType;
-(id)messageTypeAsString:(int)arg1;
-(int)StringAsMessageType:(id)arg1;
-(BOOL)hasContent;
-(NSString *)conversationIdentifier;
-(_INPBIntentMetadata *)intentMetadata;
-(void)setIntentMetadata:(id)arg1;
-(BOOL)hasIntentMetadata;
-(void)clearRecipients;
-(unsigned long long)recipientsCount;
-(id)effectAsString:(int)arg1;
-(int)StringAsEffect:(id)arg1;
-(id)recipientAtIndex:(unsigned long long)arg1;
-(void)setConversationIdentifier:(id)arg1;
-(BOOL)hasConversationIdentifier;
-(int)effect;
-(void)setEffect:(int)arg1;
-(BOOL)hasEffect;
-(void)setHasEffect:(BOOL)arg1;
-(BOOL)hasGroupName;
-(BOOL)hasSender;
-(_INPBDataString *)speakableGroupName;
-(void)setSpeakableGroupName:(id)arg1;
-(BOOL)hasSpeakableGroupName;
-(void)clearAttachments;
-(void)addAttachments:(id)arg1;
-(id)attachmentsAtIndex:(unsigned long long)arg1;
-(unsigned long long)attachmentsCount;

@end

#import <Intents/NSSecureCoding.h>
#import <Intents/NSCopying.h>

@class NSArray, _INPBString, NSString, _INPBIntentMetadata, _INPBContact, _INPBDataString;

@interface _INPBSendMessageIntent : PBCodable <_INPBSendMessageIntent, NSSecureCoding, NSCopying> {

	SCD_Struct_IN1 _has;
	BOOL __encodeLegacyGloryData;
	int _effect;
	int _messageType;
	NSArray* _attachments;
	_INPBString* _content;
	NSString* _conversationIdentifier;
	_INPBString* _groupName;
	_INPBIntentMetadata* _intentMetadata;
	NSArray* _recipients;
	_INPBContact* _sender;
	NSString* _serviceName;
	_INPBDataString* _speakableGroupName;

}

@property (assign,setter=_setEncodeLegacyGloryData:,nonatomic) BOOL _encodeLegacyGloryData;              //@synthesize _encodeLegacyGloryData=__encodeLegacyGloryData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSArray * attachments;                                                        //@synthesize attachments=_attachments - In the implementation block
@property (nonatomic,readonly) unsigned long long attachmentsCount; 
@property (nonatomic,retain) _INPBString * content;                                                      //@synthesize content=_content - In the implementation block
@property (nonatomic,readonly) BOOL hasContent; 
@property (nonatomic,copy) NSString * conversationIdentifier;                                            //@synthesize conversationIdentifier=_conversationIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasConversationIdentifier; 
@property (assign,nonatomic) int effect;                                                                 //@synthesize effect=_effect - In the implementation block
@property (assign,nonatomic) BOOL hasEffect; 
@property (nonatomic,retain) _INPBString * groupName;                                                    //@synthesize groupName=_groupName - In the implementation block
@property (nonatomic,readonly) BOOL hasGroupName; 
@property (nonatomic,retain) _INPBIntentMetadata * intentMetadata;                                       //@synthesize intentMetadata=_intentMetadata - In the implementation block
@property (nonatomic,readonly) BOOL hasIntentMetadata; 
@property (assign,nonatomic) int messageType;                                                            //@synthesize messageType=_messageType - In the implementation block
@property (assign,nonatomic) BOOL hasMessageType; 
@property (nonatomic,copy) NSArray * recipients;                                                         //@synthesize recipients=_recipients - In the implementation block
@property (nonatomic,readonly) unsigned long long recipientsCount; 
@property (nonatomic,retain) _INPBContact * sender;                                                      //@synthesize sender=_sender - In the implementation block
@property (nonatomic,readonly) BOOL hasSender; 
@property (nonatomic,copy) NSString * serviceName;                                                       //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,readonly) BOOL hasServiceName; 
@property (nonatomic,retain) _INPBDataString * speakableGroupName;                                       //@synthesize speakableGroupName=_speakableGroupName - In the implementation block
@property (nonatomic,readonly) BOOL hasSpeakableGroupName; 
+(BOOL)supportsSecureCoding;
+(Class)recipientType;
+(Class)attachmentsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(_INPBContact *)sender;
-(void)setSender:(_INPBContact *)arg1 ;
-(_INPBString *)content;
-(NSArray *)attachments;
-(id)dictionaryRepresentation;
-(void)setAttachments:(NSArray *)arg1 ;
-(NSString *)serviceName;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)addRecipient:(id)arg1 ;
-(void)setRecipients:(NSArray *)arg1 ;
-(NSArray *)recipients;
-(int)messageType;
-(void)setMessageType:(int)arg1 ;
-(void)setServiceName:(NSString *)arg1 ;
-(BOOL)hasServiceName;
-(_INPBString *)groupName;
-(void)setGroupName:(_INPBString *)arg1 ;
-(void)setContent:(_INPBString *)arg1 ;
-(void)setHasMessageType:(BOOL)arg1 ;
-(BOOL)hasMessageType;
-(id)messageTypeAsString:(int)arg1 ;
-(int)StringAsMessageType:(id)arg1 ;
-(BOOL)hasContent;
-(NSString *)conversationIdentifier;
-(BOOL)_encodeLegacyGloryData;
-(void)_setEncodeLegacyGloryData:(BOOL)arg1 ;
-(_INPBIntentMetadata *)intentMetadata;
-(void)setIntentMetadata:(_INPBIntentMetadata *)arg1 ;
-(BOOL)hasIntentMetadata;
-(void)clearRecipients;
-(unsigned long long)recipientsCount;
-(id)effectAsString:(int)arg1 ;
-(int)StringAsEffect:(id)arg1 ;
-(id)recipientAtIndex:(unsigned long long)arg1 ;
-(void)setConversationIdentifier:(NSString *)arg1 ;
-(BOOL)hasConversationIdentifier;
-(int)effect;
-(void)setEffect:(int)arg1 ;
-(BOOL)hasEffect;
-(void)setHasEffect:(BOOL)arg1 ;
-(BOOL)hasGroupName;
-(BOOL)hasSender;
-(_INPBDataString *)speakableGroupName;
-(void)setSpeakableGroupName:(_INPBDataString *)arg1 ;
-(BOOL)hasSpeakableGroupName;
-(void)clearAttachments;
-(void)addAttachments:(id)arg1 ;
-(id)attachmentsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)attachmentsCount;
@end

