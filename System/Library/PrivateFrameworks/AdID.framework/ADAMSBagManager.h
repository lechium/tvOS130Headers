/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:42 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AdID.framework/AdID
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AdCore/ADSingleton.h>
#import <AdID/AMSBagConsumer.h>

@class NSString;

@interface ADAMSBagManager : ADSingleton <AMSBagConsumer>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)bagSubProfile;
+(id)bagSubProfileVersion;
+(id)bagKeySet;
-(id)retrieveJingleRequestURLFromAMSBagWithPartialityKey:(id)arg1 ;
-(BOOL)retrieveIsSponsoredAdsEnabledValueFromAMSBag;
-(BOOL)retrieveIsSponsoredAdsEnabledValueForAdTrackingdFromAMSBag;
-(BOOL)authenticateAccountThroughAMSOperation:(id)arg1 ;
@end

