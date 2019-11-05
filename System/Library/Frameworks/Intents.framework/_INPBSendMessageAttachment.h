/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:48 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <Intents/_INPBSendMessageAttachment.h>
@class _INPBFileDataAttachment, _INPBURLValue;


@protocol _INPBSendMessageAttachment <NSObject>
@property (assign,nonatomic) BOOL currentLocation; 
@property (nonatomic,readonly) BOOL hasCurrentLocation; 
@property (nonatomic,retain) _INPBFileDataAttachment * file; 
@property (nonatomic,readonly) BOOL hasFile; 
@property (nonatomic,retain) _INPBURLValue * fileURL; 
@property (nonatomic,readonly) BOOL hasFileURL; 
@property (nonatomic,retain) _INPBURLValue * speechDataURL; 
@property (nonatomic,readonly) BOOL hasSpeechDataURL; 
@property (nonatomic,readonly) unsigned long long whichDatasource; 
@required
-(_INPBURLValue *)fileURL;
-(void)setFileURL:(id)arg1;
-(_INPBFileDataAttachment *)file;
-(BOOL)currentLocation;
-(void)setCurrentLocation:(BOOL)arg1;
-(BOOL)hasCurrentLocation;
-(void)setFile:(id)arg1;
-(BOOL)hasFile;
-(BOOL)hasFileURL;
-(_INPBURLValue *)speechDataURL;
-(void)setSpeechDataURL:(id)arg1;
-(BOOL)hasSpeechDataURL;
-(unsigned long long)whichDatasource;

@end

#import <Intents/NSSecureCoding.h>
#import <Intents/NSCopying.h>

@class _INPBFileDataAttachment, _INPBURLValue, NSString;

@interface _INPBSendMessageAttachment : PBCodable <_INPBSendMessageAttachment, NSSecureCoding, NSCopying> {

	{?=} _has;
	BOOL _currentLocation;
	BOOL __encodeLegacyGloryData;
	_INPBFileDataAttachment* _file;
	_INPBURLValue* _fileURL;
	_INPBURLValue* _speechDataURL;
	unsigned long long _whichDatasource;

}

@property (assign,setter=_setEncodeLegacyGloryData:,nonatomic) BOOL _encodeLegacyGloryData;              //@synthesize _encodeLegacyGloryData=__encodeLegacyGloryData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL currentLocation;                                                       //@synthesize currentLocation=_currentLocation - In the implementation block
@property (nonatomic,readonly) BOOL hasCurrentLocation; 
@property (nonatomic,retain) _INPBFileDataAttachment * file;                                             //@synthesize file=_file - In the implementation block
@property (nonatomic,readonly) BOOL hasFile; 
@property (nonatomic,retain) _INPBURLValue * fileURL;                                                    //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,readonly) BOOL hasFileURL; 
@property (nonatomic,retain) _INPBURLValue * speechDataURL;                                              //@synthesize speechDataURL=_speechDataURL - In the implementation block
@property (nonatomic,readonly) BOOL hasSpeechDataURL; 
@property (nonatomic,readonly) unsigned long long whichDatasource;                                       //@synthesize whichDatasource=_whichDatasource - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(_INPBURLValue *)fileURL;
-(void)setFileURL:(_INPBURLValue *)arg1 ;
-(id)dictionaryRepresentation;
-(_INPBFileDataAttachment *)file;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)currentLocation;
-(void)setCurrentLocation:(BOOL)arg1 ;
-(BOOL)hasCurrentLocation;
-(void)setFile:(_INPBFileDataAttachment *)arg1 ;
-(BOOL)_encodeLegacyGloryData;
-(void)_setEncodeLegacyGloryData:(BOOL)arg1 ;
-(BOOL)hasFile;
-(BOOL)hasFileURL;
-(_INPBURLValue *)speechDataURL;
-(void)setSpeechDataURL:(_INPBURLValue *)arg1 ;
-(BOOL)hasSpeechDataURL;
-(unsigned long long)whichDatasource;
@end
