/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:17 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/ICEnvironmentMonitorObserver.h>

@protocol OS_dispatch_queue;
@class NSObject, ICMusicSubscriptionStatus, ICUserIdentity, ICMusicSubscriptionFairPlayKeyStatus, SSVSubscriptionStatus, SSVFairPlaySubscriptionStatus, NSString;

@interface MPCloudServiceStatusController : NSObject <ICEnvironmentMonitorObserver> {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSObject*<OS_dispatch_queue> _calloutQueue;
	NSObject*<OS_dispatch_queue> _cloudLibraryStatusAccessQueue;
	long long _cloudLibraryStatus;
	unsigned long long _cloudLibraryObservationCount;
	BOOL _hasLoadedMatchStatus;
	BOOL _hasLoadedSubscriptionAvailability;
	ICMusicSubscriptionStatus* _lastKnownMusicSubscriptionStatus;
	unsigned long long _matchStatusObservationCount;
	unsigned long long _matchStatus;
	BOOL _observingNetworkReachability;
	BOOL _hasSubscriptionLease;
	BOOL _shouldPlaybackRequireSubscriptionLease;
	BOOL _subscriptionAvailable;
	ICUserIdentity* _userIdentity;
	ICMusicSubscriptionFairPlayKeyStatus* _lastKnownSubscriptionFairPlayKeyStatus;
	SSVSubscriptionStatus* _subscriptionStatus;
	NSObject*<OS_dispatch_queue> _serialQueue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> serialQueue;                                                   //@synthesize serialQueue=_serialQueue - In the implementation block
@property (nonatomic,readonly) ICUserIdentity * userIdentity;                                                              //@synthesize userIdentity=_userIdentity - In the implementation block
@property (nonatomic,readonly) SSVFairPlaySubscriptionStatus * lastKnownFairPlaySubscriptionStatus; 
@property (nonatomic,readonly) ICMusicSubscriptionFairPlayKeyStatus * lastKnownSubscriptionFairPlayKeyStatus;              //@synthesize lastKnownSubscriptionFairPlayKeyStatus=_lastKnownSubscriptionFairPlayKeyStatus - In the implementation block
@property (nonatomic,readonly) unsigned long long matchStatus; 
@property (getter=isSubscriptionAvailable,nonatomic,readonly) BOOL subscriptionAvailable; 
@property (nonatomic,copy,readonly) SSVSubscriptionStatus * subscriptionStatus;                                            //@synthesize subscriptionStatus=_subscriptionStatus - In the implementation block
@property (nonatomic,copy,readonly) ICMusicSubscriptionStatus * musicSubscriptionStatus; 
@property (nonatomic,readonly) BOOL shouldPlaybackRequireSubscriptionLease; 
@property (getter=isCloudLibraryEnabled,nonatomic,readonly) BOOL cloudLibraryEnabled; 
@property (getter=isPurchaseHistoryEnabled,nonatomic,readonly) BOOL purchaseHistoryEnabled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)controllers;
+(id)sharedController;
+(id)globalSerialQueue;
+(void)_postNotificationName:(id)arg1 controller:(id)arg2 ;
+(void)_postNotificationName:(id)arg1 controller:(id)arg2 userInfo:(id)arg3 ;
+(id)_cloudServiceStatusControllerWithUserIdentity:(id)arg1 createIfRequired:(BOOL)arg2 ;
+(id)cloudServiceStatusControllerWithUserIdentity:(id)arg1 ;
-(NSString *)description;
-(id)init;
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(SSVSubscriptionStatus *)subscriptionStatus;
-(id)_initWithUserIdentity:(id)arg1 ;
-(ICUserIdentity *)userIdentity;
-(unsigned long long)matchStatus;
-(void)_userIdentityStoreDidChange:(id)arg1 ;
-(void)environmentMonitorDidChangeNetworkReachability:(id)arg1 ;
-(BOOL)_handlesSameAccountAs:(id)arg1 ;
-(void)_allowsMusicSubscriptionDidChange:(id)arg1 ;
-(void)_cloudClientAuthenticationDidChange;
-(void)_subscriptionStatusDidChange:(id)arg1 ;
-(void)_enableICMLErrorReasonChange:(id)arg1 ;
-(BOOL)isCloudLibraryEnabled;
-(BOOL)isPurchaseHistoryEnabled;
-(BOOL)isSubscriptionAvailable;
-(SSVFairPlaySubscriptionStatus *)lastKnownFairPlaySubscriptionStatus;
-(BOOL)shouldPlaybackRequireSubscriptionLease;
-(ICMusicSubscriptionStatus *)musicSubscriptionStatus;
-(void)beginObservingCloudLibraryEnabled;
-(void)beginObservingMatchStatus;
-(void)refreshMusicSubscriptionStatus;
-(void)beginObservingFairPlaySubscriptionStatus;
-(void)beginObservingPurchaseHistoryEnabled;
-(void)beginObservingSubscriptionAvailability;
-(void)endObservingCloudLibraryEnabled;
-(void)endObservingMatchStatus;
-(void)endObservingFairPlaySubscriptionStatus;
-(void)endObservingPurchaseHistoryEnabled;
-(void)endObservingSubscriptionAvailability;
-(BOOL)_calculateShouldPlaybackRequireSubscriptionLeaseReturningLikelyToReachRemoteServer:(BOOL*)arg1 ;
-(BOOL)_currentCloudLibraryEnabled;
-(BOOL)_currentPurchaseHistoryEnabled;
-(void)_updateMatchStatus;
-(void)_updateSubscriptionAvailability;
-(void)_updateSubscriptionAvailabilityWithValue:(BOOL)arg1 ;
-(void)_updateSubscriptionStatusWithIgnoreCachePolicy:(BOOL)arg1 ;
-(void)_beginObservingCloudLibraryEnabled;
-(void)_endObservingCloudLibraryEnabled;
-(void)_beginObservingMatchStatus;
-(void)_endObservingMatchStatus;
-(void)_copyObservationStateFrom:(id)arg1 ;
-(void)_performBlockOnControllerHandlingTheSameAccount:(/*^block*/id)arg1 ;
-(ICMusicSubscriptionFairPlayKeyStatus *)lastKnownSubscriptionFairPlayKeyStatus;
@end
