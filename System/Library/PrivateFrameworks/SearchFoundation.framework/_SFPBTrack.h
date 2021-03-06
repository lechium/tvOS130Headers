/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:42 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtocolBuffer/PBCodable.h>
#import <SearchFoundation/_SFPBTrack.h>
@class NSString, _SFPBURL, _SFPBActionItem, NSData;


@protocol _SFPBTrack <NSObject>
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * number; 
@property (nonatomic,copy) NSString * duration; 
@property (assign,nonatomic) BOOL highlighted; 
@property (nonatomic,retain) _SFPBURL * preview; 
@property (nonatomic,retain) _SFPBActionItem * playAction; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(id)initWithDictionary:(id)arg1;
-(NSString *)title;
-(void)setTitle:(id)arg1;
-(NSString *)duration;
-(void)setDuration:(id)arg1;
-(NSString *)number;
-(void)setNumber:(id)arg1;
-(BOOL)highlighted;
-(void)setHighlighted:(BOOL)arg1;
-(NSData *)jsonData;
-(_SFPBActionItem *)playAction;
-(void)setPlayAction:(id)arg1;
-(_SFPBURL *)preview;
-(void)setPreview:(id)arg1;
-(id)initWithJSON:(id)arg1;

@end

#import <SearchFoundation/NSSecureCoding.h>

@class NSString, _SFPBURL, _SFPBActionItem, NSData;

@interface _SFPBTrack : PBCodable <_SFPBTrack, NSSecureCoding> {

	BOOL _highlighted;
	NSString* _title;
	NSString* _number;
	NSString* _duration;
	_SFPBURL* _preview;
	_SFPBActionItem* _playAction;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * title;                            //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * number;                           //@synthesize number=_number - In the implementation block
@property (nonatomic,copy) NSString * duration;                         //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) BOOL highlighted;                          //@synthesize highlighted=_highlighted - In the implementation block
@property (nonatomic,retain) _SFPBURL * preview;                        //@synthesize preview=_preview - In the implementation block
@property (nonatomic,retain) _SFPBActionItem * playAction;              //@synthesize playAction=_playAction - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)duration;
-(void)setDuration:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)number;
-(void)setNumber:(NSString *)arg1 ;
-(BOOL)highlighted;
-(void)setHighlighted:(BOOL)arg1 ;
-(NSData *)jsonData;
-(id)initWithFacade:(id)arg1 ;
-(_SFPBActionItem *)playAction;
-(void)setPlayAction:(_SFPBActionItem *)arg1 ;
-(_SFPBURL *)preview;
-(void)setPreview:(_SFPBURL *)arg1 ;
-(id)initWithJSON:(id)arg1 ;
@end

