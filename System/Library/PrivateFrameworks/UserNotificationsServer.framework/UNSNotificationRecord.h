/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:37 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UserNotificationsServer/BSDescriptionProviding.h>

@class NSString, NSArray, NSNumber, NSDate, NSURL, NSSet, NSDateComponents, CLRegion, NSTimeZone, NSDictionary;

@interface UNSNotificationRecord : NSObject <BSDescriptionProviding> {

	BOOL _hasDefaultAction;
	BOOL _hasCriticalAlertSound;
	BOOL _shouldBadgeApplicationIcon;
	BOOL _shouldHideDate;
	BOOL _shouldHideTime;
	BOOL _shouldIgnoreDoNotDisturb;
	BOOL _shouldIgnoreDowntime;
	BOOL _shouldIgnoreRingerSwitch;
	BOOL _shouldSuppressScreenLightUp;
	BOOL _shouldPlaySound;
	BOOL _shouldPresentAlert;
	BOOL _shouldAuthenticateDefaultAction;
	BOOL _shouldBackgroundDefaultAction;
	BOOL _shouldPreventNotificationDismissalAfterDefaultAction;
	BOOL _shouldSoundRepeat;
	BOOL _shouldSuppressSyncDismissalWhenRemoved;
	BOOL _shouldUseRequestIdentifierForDismissalSync;
	BOOL _shouldPreemptPresentedNotification;
	BOOL _shouldPreemptSTAR;
	BOOL _allowsDefaultDestinations;
	BOOL _allowsAlertDestination;
	BOOL _allowsLockScreenDestination;
	BOOL _allowsNotificationCenterDestination;
	BOOL _allowsCarPlayDestination;
	BOOL _allowsSpokenDestination;
	BOOL _triggerRepeats;
	NSString* _accessoryImageName;
	NSArray* _attachments;
	NSNumber* _badge;
	NSString* _body;
	NSDate* _contentDate;
	NSArray* _bodyLocalizationArguments;
	NSString* _bodyLocalizationKey;
	NSString* _categoryIdentifier;
	NSString* _threadIdentifier;
	NSNumber* _contentAvailable;
	NSNumber* _mutableContent;
	NSDate* _date;
	NSString* _defaultActionTitle;
	NSString* _defaultActionTitleLocalizationKey;
	NSURL* _defaultActionURL;
	NSDate* _expirationDate;
	NSString* _header;
	NSArray* _headerLocalizationArguments;
	NSString* _headerLocalizationKey;
	NSString* _iconApplicationIdentifier;
	NSString* _iconName;
	NSString* _iconPath;
	NSString* _identifier;
	NSString* _launchImageName;
	NSDate* _requestDate;
	NSString* _audioCategory;
	NSNumber* _audioVolume;
	double _soundMaximumDuration;
	NSString* _subtitle;
	NSArray* _subtitleLocalizationArguments;
	NSString* _subtitleLocalizationKey;
	NSString* _title;
	NSArray* _titleLocalizationArguments;
	NSString* _titleLocalizationKey;
	NSString* _summaryArgument;
	unsigned long long _summaryArgumentCount;
	NSString* _targetContentIdentifier;
	NSString* _toneAlertTopic;
	long long _toneAlertType;
	NSString* _toneFileName;
	NSURL* _toneFileURL;
	NSString* _toneIdentifier;
	unsigned long long _toneMediaLibraryItemIdentifier;
	NSSet* _topicIdentifiers;
	NSDate* _triggerDate;
	NSDateComponents* _triggerDateComponents;
	NSString* _triggerRepeatCalendarIdentifier;
	unsigned long long _triggerRepeatInterval;
	CLRegion* _triggerRegion;
	double _triggerTimeInterval;
	NSTimeZone* _triggerTimeZone;
	NSString* _triggerType;
	NSDictionary* _userInfo;
	NSString* _vibrationIdentifier;
	NSURL* _vibrationPatternFileURL;

}

@property (nonatomic,copy) NSString * accessoryImageName;                                            //@synthesize accessoryImageName=_accessoryImageName - In the implementation block
@property (nonatomic,copy) NSArray * attachments;                                                    //@synthesize attachments=_attachments - In the implementation block
@property (nonatomic,copy) NSNumber * badge;                                                         //@synthesize badge=_badge - In the implementation block
@property (nonatomic,copy) NSString * body;                                                          //@synthesize body=_body - In the implementation block
@property (nonatomic,copy) NSDate * contentDate;                                                     //@synthesize contentDate=_contentDate - In the implementation block
@property (nonatomic,copy) NSArray * bodyLocalizationArguments;                                      //@synthesize bodyLocalizationArguments=_bodyLocalizationArguments - In the implementation block
@property (nonatomic,copy) NSString * bodyLocalizationKey;                                           //@synthesize bodyLocalizationKey=_bodyLocalizationKey - In the implementation block
@property (nonatomic,copy) NSString * categoryIdentifier;                                            //@synthesize categoryIdentifier=_categoryIdentifier - In the implementation block
@property (nonatomic,copy) NSString * threadIdentifier;                                              //@synthesize threadIdentifier=_threadIdentifier - In the implementation block
@property (nonatomic,copy) NSNumber * contentAvailable;                                              //@synthesize contentAvailable=_contentAvailable - In the implementation block
@property (nonatomic,copy) NSNumber * mutableContent;                                                //@synthesize mutableContent=_mutableContent - In the implementation block
@property (nonatomic,copy) NSDate * date;                                                            //@synthesize date=_date - In the implementation block
@property (assign,nonatomic) BOOL hasDefaultAction;                                                  //@synthesize hasDefaultAction=_hasDefaultAction - In the implementation block
@property (nonatomic,copy) NSString * defaultActionTitle;                                            //@synthesize defaultActionTitle=_defaultActionTitle - In the implementation block
@property (nonatomic,copy) NSString * defaultActionTitleLocalizationKey;                             //@synthesize defaultActionTitleLocalizationKey=_defaultActionTitleLocalizationKey - In the implementation block
@property (nonatomic,copy) NSURL * defaultActionURL;                                                 //@synthesize defaultActionURL=_defaultActionURL - In the implementation block
@property (assign,nonatomic) BOOL hasCriticalAlertSound;                                             //@synthesize hasCriticalAlertSound=_hasCriticalAlertSound - In the implementation block
@property (nonatomic,copy) NSDate * expirationDate;                                                  //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,copy) NSString * header;                                                        //@synthesize header=_header - In the implementation block
@property (nonatomic,copy) NSArray * headerLocalizationArguments;                                    //@synthesize headerLocalizationArguments=_headerLocalizationArguments - In the implementation block
@property (nonatomic,copy) NSString * headerLocalizationKey;                                         //@synthesize headerLocalizationKey=_headerLocalizationKey - In the implementation block
@property (nonatomic,copy) NSString * iconApplicationIdentifier;                                     //@synthesize iconApplicationIdentifier=_iconApplicationIdentifier - In the implementation block
@property (nonatomic,copy) NSString * iconName;                                                      //@synthesize iconName=_iconName - In the implementation block
@property (nonatomic,copy) NSString * iconPath;                                                      //@synthesize iconPath=_iconPath - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                                    //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * launchImageName;                                               //@synthesize launchImageName=_launchImageName - In the implementation block
@property (nonatomic,copy) NSDate * requestDate;                                                     //@synthesize requestDate=_requestDate - In the implementation block
@property (assign,nonatomic) BOOL shouldBadgeApplicationIcon;                                        //@synthesize shouldBadgeApplicationIcon=_shouldBadgeApplicationIcon - In the implementation block
@property (assign,nonatomic) BOOL shouldHideDate;                                                    //@synthesize shouldHideDate=_shouldHideDate - In the implementation block
@property (assign,nonatomic) BOOL shouldHideTime;                                                    //@synthesize shouldHideTime=_shouldHideTime - In the implementation block
@property (assign,nonatomic) BOOL shouldIgnoreDoNotDisturb;                                          //@synthesize shouldIgnoreDoNotDisturb=_shouldIgnoreDoNotDisturb - In the implementation block
@property (assign,nonatomic) BOOL shouldIgnoreDowntime;                                              //@synthesize shouldIgnoreDowntime=_shouldIgnoreDowntime - In the implementation block
@property (assign,nonatomic) BOOL shouldIgnoreRingerSwitch;                                          //@synthesize shouldIgnoreRingerSwitch=_shouldIgnoreRingerSwitch - In the implementation block
@property (assign,nonatomic) BOOL shouldSuppressScreenLightUp;                                       //@synthesize shouldSuppressScreenLightUp=_shouldSuppressScreenLightUp - In the implementation block
@property (assign,nonatomic) BOOL shouldPlaySound;                                                   //@synthesize shouldPlaySound=_shouldPlaySound - In the implementation block
@property (assign,nonatomic) BOOL shouldPresentAlert;                                                //@synthesize shouldPresentAlert=_shouldPresentAlert - In the implementation block
@property (assign,nonatomic) BOOL shouldAuthenticateDefaultAction;                                   //@synthesize shouldAuthenticateDefaultAction=_shouldAuthenticateDefaultAction - In the implementation block
@property (assign,nonatomic) BOOL shouldBackgroundDefaultAction;                                     //@synthesize shouldBackgroundDefaultAction=_shouldBackgroundDefaultAction - In the implementation block
@property (assign,nonatomic) BOOL shouldPreventNotificationDismissalAfterDefaultAction;              //@synthesize shouldPreventNotificationDismissalAfterDefaultAction=_shouldPreventNotificationDismissalAfterDefaultAction - In the implementation block
@property (assign,nonatomic) BOOL shouldSoundRepeat;                                                 //@synthesize shouldSoundRepeat=_shouldSoundRepeat - In the implementation block
@property (assign,nonatomic) BOOL shouldSuppressSyncDismissalWhenRemoved;                            //@synthesize shouldSuppressSyncDismissalWhenRemoved=_shouldSuppressSyncDismissalWhenRemoved - In the implementation block
@property (assign,nonatomic) BOOL shouldUseRequestIdentifierForDismissalSync;                        //@synthesize shouldUseRequestIdentifierForDismissalSync=_shouldUseRequestIdentifierForDismissalSync - In the implementation block
@property (assign,nonatomic) BOOL shouldPreemptPresentedNotification;                                //@synthesize shouldPreemptPresentedNotification=_shouldPreemptPresentedNotification - In the implementation block
@property (assign,nonatomic) BOOL shouldPreemptSTAR;                                                 //@synthesize shouldPreemptSTAR=_shouldPreemptSTAR - In the implementation block
@property (nonatomic,copy) NSString * audioCategory;                                                 //@synthesize audioCategory=_audioCategory - In the implementation block
@property (nonatomic,copy) NSNumber * audioVolume;                                                   //@synthesize audioVolume=_audioVolume - In the implementation block
@property (assign,nonatomic) double soundMaximumDuration;                                            //@synthesize soundMaximumDuration=_soundMaximumDuration - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                                                      //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy) NSArray * subtitleLocalizationArguments;                                  //@synthesize subtitleLocalizationArguments=_subtitleLocalizationArguments - In the implementation block
@property (nonatomic,copy) NSString * subtitleLocalizationKey;                                       //@synthesize subtitleLocalizationKey=_subtitleLocalizationKey - In the implementation block
@property (nonatomic,copy) NSString * title;                                                         //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSArray * titleLocalizationArguments;                                     //@synthesize titleLocalizationArguments=_titleLocalizationArguments - In the implementation block
@property (nonatomic,copy) NSString * titleLocalizationKey;                                          //@synthesize titleLocalizationKey=_titleLocalizationKey - In the implementation block
@property (nonatomic,copy) NSString * summaryArgument;                                               //@synthesize summaryArgument=_summaryArgument - In the implementation block
@property (assign,nonatomic) unsigned long long summaryArgumentCount;                                //@synthesize summaryArgumentCount=_summaryArgumentCount - In the implementation block
@property (nonatomic,copy) NSString * targetContentIdentifier;                                       //@synthesize targetContentIdentifier=_targetContentIdentifier - In the implementation block
@property (nonatomic,copy) NSString * toneAlertTopic;                                                //@synthesize toneAlertTopic=_toneAlertTopic - In the implementation block
@property (assign,nonatomic) long long toneAlertType;                                                //@synthesize toneAlertType=_toneAlertType - In the implementation block
@property (nonatomic,copy) NSString * toneFileName;                                                  //@synthesize toneFileName=_toneFileName - In the implementation block
@property (nonatomic,copy) NSURL * toneFileURL;                                                      //@synthesize toneFileURL=_toneFileURL - In the implementation block
@property (nonatomic,copy) NSString * toneIdentifier;                                                //@synthesize toneIdentifier=_toneIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long toneMediaLibraryItemIdentifier;                      //@synthesize toneMediaLibraryItemIdentifier=_toneMediaLibraryItemIdentifier - In the implementation block
@property (nonatomic,copy) NSSet * topicIdentifiers;                                                 //@synthesize topicIdentifiers=_topicIdentifiers - In the implementation block
@property (assign,nonatomic) BOOL allowsDefaultDestinations;                                         //@synthesize allowsDefaultDestinations=_allowsDefaultDestinations - In the implementation block
@property (assign,nonatomic) BOOL allowsAlertDestination;                                            //@synthesize allowsAlertDestination=_allowsAlertDestination - In the implementation block
@property (assign,nonatomic) BOOL allowsLockScreenDestination;                                       //@synthesize allowsLockScreenDestination=_allowsLockScreenDestination - In the implementation block
@property (assign,nonatomic) BOOL allowsNotificationCenterDestination;                               //@synthesize allowsNotificationCenterDestination=_allowsNotificationCenterDestination - In the implementation block
@property (assign,nonatomic) BOOL allowsCarPlayDestination;                                          //@synthesize allowsCarPlayDestination=_allowsCarPlayDestination - In the implementation block
@property (assign,nonatomic) BOOL allowsSpokenDestination;                                           //@synthesize allowsSpokenDestination=_allowsSpokenDestination - In the implementation block
@property (nonatomic,copy) NSDate * triggerDate;                                                     //@synthesize triggerDate=_triggerDate - In the implementation block
@property (nonatomic,copy) NSDateComponents * triggerDateComponents;                                 //@synthesize triggerDateComponents=_triggerDateComponents - In the implementation block
@property (nonatomic,copy) NSString * triggerRepeatCalendarIdentifier;                               //@synthesize triggerRepeatCalendarIdentifier=_triggerRepeatCalendarIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long triggerRepeatInterval;                               //@synthesize triggerRepeatInterval=_triggerRepeatInterval - In the implementation block
@property (assign,nonatomic) BOOL triggerRepeats;                                                    //@synthesize triggerRepeats=_triggerRepeats - In the implementation block
@property (nonatomic,copy) CLRegion * triggerRegion;                                                 //@synthesize triggerRegion=_triggerRegion - In the implementation block
@property (assign,nonatomic) double triggerTimeInterval;                                             //@synthesize triggerTimeInterval=_triggerTimeInterval - In the implementation block
@property (nonatomic,copy) NSTimeZone * triggerTimeZone;                                             //@synthesize triggerTimeZone=_triggerTimeZone - In the implementation block
@property (nonatomic,copy) NSString * triggerType;                                                   //@synthesize triggerType=_triggerType - In the implementation block
@property (nonatomic,copy) NSDictionary * userInfo;                                                  //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,copy) NSString * vibrationIdentifier;                                           //@synthesize vibrationIdentifier=_vibrationIdentifier - In the implementation block
@property (nonatomic,copy) NSURL * vibrationPatternFileURL;                                          //@synthesize vibrationPatternFileURL=_vibrationPatternFileURL - In the implementation block
@property (nonatomic,readonly) BOOL hasAlertContent; 
@property (nonatomic,readonly) BOOL hasBadge; 
@property (nonatomic,readonly) BOOL hasSound; 
@property (nonatomic,readonly) BOOL hasPendingTrigger; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)debugDescription;
-(NSString *)description;
-(id)init;
-(NSDictionary *)userInfo;
-(NSDate *)date;
-(NSString *)identifier;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSArray *)attachments;
-(id)dictionaryRepresentation;
-(void)setAttachments:(NSArray *)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSDate *)expirationDate;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(NSString *)targetContentIdentifier;
-(void)setTargetContentIdentifier:(NSString *)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(void)setDate:(NSDate *)arg1 ;
-(void)setCategoryIdentifier:(NSString *)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)setBody:(NSString *)arg1 ;
-(NSString *)categoryIdentifier;
-(NSString *)subtitle;
-(NSString *)body;
-(void)setTriggerType:(NSString *)arg1 ;
-(NSString *)triggerType;
-(NSNumber *)badge;
-(void)setBadge:(NSNumber *)arg1 ;
-(BOOL)hasBadge;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(NSString *)header;
-(void)setHeader:(NSString *)arg1 ;
-(NSString *)audioCategory;
-(NSNumber *)audioVolume;
-(BOOL)shouldIgnoreRingerSwitch;
-(NSString *)toneFileName;
-(NSURL *)toneFileURL;
-(NSString *)toneIdentifier;
-(unsigned long long)toneMediaLibraryItemIdentifier;
-(NSString *)vibrationIdentifier;
-(NSURL *)vibrationPatternFileURL;
-(void)setAudioCategory:(NSString *)arg1 ;
-(void)setAudioVolume:(NSNumber *)arg1 ;
-(void)setShouldIgnoreRingerSwitch:(BOOL)arg1 ;
-(void)setToneFileName:(NSString *)arg1 ;
-(void)setToneFileURL:(NSURL *)arg1 ;
-(void)setToneIdentifier:(NSString *)arg1 ;
-(void)setToneMediaLibraryItemIdentifier:(unsigned long long)arg1 ;
-(void)setVibrationIdentifier:(NSString *)arg1 ;
-(void)setVibrationPatternFileURL:(NSURL *)arg1 ;
-(void)setSummaryArgument:(NSString *)arg1 ;
-(void)setSummaryArgumentCount:(unsigned long long)arg1 ;
-(void)setLaunchImageName:(NSString *)arg1 ;
-(void)setThreadIdentifier:(NSString *)arg1 ;
-(void)setTopicIdentifiers:(NSSet *)arg1 ;
-(NSString *)accessoryImageName;
-(NSString *)defaultActionTitle;
-(NSURL *)defaultActionURL;
-(NSString *)launchImageName;
-(BOOL)shouldHideDate;
-(BOOL)shouldHideTime;
-(BOOL)shouldIgnoreDoNotDisturb;
-(BOOL)shouldIgnoreDowntime;
-(BOOL)shouldSuppressScreenLightUp;
-(BOOL)shouldAuthenticateDefaultAction;
-(BOOL)shouldBackgroundDefaultAction;
-(BOOL)shouldPreventNotificationDismissalAfterDefaultAction;
-(BOOL)shouldSuppressSyncDismissalWhenRemoved;
-(BOOL)shouldUseRequestIdentifierForDismissalSync;
-(BOOL)shouldPreemptPresentedNotification;
-(BOOL)shouldPreemptSTAR;
-(NSString *)threadIdentifier;
-(NSSet *)topicIdentifiers;
-(NSString *)summaryArgument;
-(unsigned long long)summaryArgumentCount;
-(BOOL)hasDefaultAction;
-(void)setAccessoryImageName:(NSString *)arg1 ;
-(void)setDefaultActionTitle:(NSString *)arg1 ;
-(void)setDefaultActionURL:(NSURL *)arg1 ;
-(void)setHasDefaultAction:(BOOL)arg1 ;
-(void)setShouldHideDate:(BOOL)arg1 ;
-(void)setShouldHideTime:(BOOL)arg1 ;
-(void)setShouldIgnoreDoNotDisturb:(BOOL)arg1 ;
-(void)setShouldIgnoreDowntime:(BOOL)arg1 ;
-(void)setShouldAuthenticateDefaultAction:(BOOL)arg1 ;
-(void)setShouldBackgroundDefaultAction:(BOOL)arg1 ;
-(void)setShouldPreventNotificationDismissalAfterDefaultAction:(BOOL)arg1 ;
-(void)setShouldSuppressScreenLightUp:(BOOL)arg1 ;
-(void)setShouldSuppressSyncDismissalWhenRemoved:(BOOL)arg1 ;
-(void)setShouldUseRequestIdentifierForDismissalSync:(BOOL)arg1 ;
-(void)setShouldPreemptPresentedNotification:(BOOL)arg1 ;
-(void)setShouldPreemptSTAR:(BOOL)arg1 ;
-(NSString *)iconName;
-(void)setTitleLocalizationKey:(NSString *)arg1 ;
-(void)setSubtitleLocalizationKey:(NSString *)arg1 ;
-(NSString *)titleLocalizationKey;
-(NSString *)subtitleLocalizationKey;
-(void)setRequestDate:(NSDate *)arg1 ;
-(NSDate *)requestDate;
-(void)setIconName:(NSString *)arg1 ;
-(BOOL)hasSound;
-(NSDate *)triggerDate;
-(void)setTriggerDate:(NSDate *)arg1 ;
-(BOOL)willNotifyUser;
-(BOOL)triggerRepeats;
-(CLRegion *)triggerRegion;
-(void)setBodyLocalizationArguments:(NSArray *)arg1 ;
-(void)setBodyLocalizationKey:(NSString *)arg1 ;
-(void)setContentDate:(NSDate *)arg1 ;
-(void)setContentAvailable:(NSNumber *)arg1 ;
-(void)setMutableContent:(NSNumber *)arg1 ;
-(void)setDefaultActionTitleLocalizationKey:(NSString *)arg1 ;
-(void)setHasCriticalAlertSound:(BOOL)arg1 ;
-(void)setHeaderLocalizationArguments:(NSArray *)arg1 ;
-(void)setHeaderLocalizationKey:(NSString *)arg1 ;
-(void)setIconApplicationIdentifier:(NSString *)arg1 ;
-(void)setIconPath:(NSString *)arg1 ;
-(void)setShouldBadgeApplicationIcon:(BOOL)arg1 ;
-(void)setShouldSoundRepeat:(BOOL)arg1 ;
-(void)setSoundMaximumDuration:(double)arg1 ;
-(void)setShouldPlaySound:(BOOL)arg1 ;
-(void)setShouldPresentAlert:(BOOL)arg1 ;
-(void)setSubtitleLocalizationArguments:(NSArray *)arg1 ;
-(void)setTitleLocalizationArguments:(NSArray *)arg1 ;
-(void)setToneAlertTopic:(NSString *)arg1 ;
-(void)setToneAlertType:(long long)arg1 ;
-(void)setAllowsDefaultDestinations:(BOOL)arg1 ;
-(void)setAllowsLockScreenDestination:(BOOL)arg1 ;
-(void)setAllowsNotificationCenterDestination:(BOOL)arg1 ;
-(void)setAllowsAlertDestination:(BOOL)arg1 ;
-(void)setAllowsCarPlayDestination:(BOOL)arg1 ;
-(void)setAllowsSpokenDestination:(BOOL)arg1 ;
-(void)setTriggerDateComponents:(NSDateComponents *)arg1 ;
-(void)setTriggerRegion:(CLRegion *)arg1 ;
-(void)setTriggerRepeatCalendarIdentifier:(NSString *)arg1 ;
-(void)setTriggerRepeatInterval:(unsigned long long)arg1 ;
-(void)setTriggerRepeats:(BOOL)arg1 ;
-(void)setTriggerTimeInterval:(double)arg1 ;
-(void)setTriggerTimeZone:(NSTimeZone *)arg1 ;
-(NSArray *)bodyLocalizationArguments;
-(NSString *)bodyLocalizationKey;
-(NSDate *)contentDate;
-(NSNumber *)contentAvailable;
-(NSNumber *)mutableContent;
-(NSString *)defaultActionTitleLocalizationKey;
-(NSArray *)headerLocalizationArguments;
-(NSString *)headerLocalizationKey;
-(NSString *)iconApplicationIdentifier;
-(NSString *)iconPath;
-(BOOL)hasCriticalAlertSound;
-(BOOL)shouldBadgeApplicationIcon;
-(BOOL)shouldPlaySound;
-(BOOL)shouldPresentAlert;
-(BOOL)shouldSoundRepeat;
-(double)soundMaximumDuration;
-(NSArray *)subtitleLocalizationArguments;
-(NSArray *)titleLocalizationArguments;
-(NSString *)toneAlertTopic;
-(long long)toneAlertType;
-(BOOL)allowsDefaultDestinations;
-(BOOL)allowsLockScreenDestination;
-(BOOL)allowsNotificationCenterDestination;
-(BOOL)allowsAlertDestination;
-(BOOL)allowsCarPlayDestination;
-(BOOL)allowsSpokenDestination;
-(NSDateComponents *)triggerDateComponents;
-(NSString *)triggerRepeatCalendarIdentifier;
-(unsigned long long)triggerRepeatInterval;
-(double)triggerTimeInterval;
-(NSTimeZone *)triggerTimeZone;
-(BOOL)isSimilar:(id)arg1 ;
-(BOOL)hasAlertContent;
-(BOOL)hasPendingTrigger;
@end
