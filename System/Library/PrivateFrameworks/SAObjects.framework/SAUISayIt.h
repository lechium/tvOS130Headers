/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:26 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class SAUIAudioData, NSString, NSNumber;

@interface SAUISayIt : SABaseClientBoundCommand

@property (assign,setter=siriui_setIgnoresMuteSwitch:,nonatomic) BOOL siriui_ignoresMuteSwitch; 
@property (nonatomic,retain) SAUIAudioData * audioData; 
@property (nonatomic,copy) NSString * audioDataUrl; 
@property (assign,nonatomic) BOOL canUseServerTTS; 
@property (nonatomic,retain) id<SAAceSerializable> context; 
@property (nonatomic,copy) NSString * dialogIdentifier; 
@property (nonatomic,copy) NSString * gender; 
@property (nonatomic,copy) NSString * languageCode; 
@property (nonatomic,copy) NSNumber * listenAfterSpeaking; 
@property (nonatomic,copy) NSString * message; 
@property (assign,nonatomic) BOOL repeatable; 
+(id)sayIt;
+(id)sayItWithDictionary:(id)arg1 context:(id)arg2 ;
-(long long)_afui_usefulUserResultType;
-(void)_siriui_applyUserInfoDictionary:(id)arg1 ;
-(void)siriui_setIgnoresMuteSwitch:(BOOL)arg1 ;
-(BOOL)siriui_ignoresMuteSwitch;
-(void)_af_extractDialogInfo:(/*^block*/id)arg1 ;
-(void)af_addEntriesToAnalyticsContext:(id)arg1 ;
-(id)af_dialogIdentifiersForAnalyticsContext;
-(NSString *)languageCode;
-(id<SAAceSerializable>)context;
-(id)groupIdentifier;
-(void)setContext:(id<SAAceSerializable>)arg1 ;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)gender;
-(void)setGender:(NSString *)arg1 ;
-(void)setLanguageCode:(NSString *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)dialogIdentifier;
-(void)setDialogIdentifier:(NSString *)arg1 ;
-(SAUIAudioData *)audioData;
-(void)setAudioData:(SAUIAudioData *)arg1 ;
-(NSString *)audioDataUrl;
-(void)setAudioDataUrl:(NSString *)arg1 ;
-(BOOL)canUseServerTTS;
-(void)setCanUseServerTTS:(BOOL)arg1 ;
-(NSNumber *)listenAfterSpeaking;
-(void)setListenAfterSpeaking:(NSNumber *)arg1 ;
-(BOOL)repeatable;
-(void)setRepeatable:(BOOL)arg1 ;
@end
