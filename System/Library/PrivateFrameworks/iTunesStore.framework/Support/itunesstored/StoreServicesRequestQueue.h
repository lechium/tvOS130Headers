/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:20 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <itunesstored/RequestQueue.h>
#import <itunesstored/ISSingleton.h>

@class NSString;

@interface StoreServicesRequestQueue : RequestQueue <ISSingleton>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(void)setSharedInstance:(id)arg1 ;
-(void)observeXPCServer:(id)arg1 ;
-(void)addOperation:(id)arg1 forMessage:(id)arg2 connection:(id)arg3 replyBlock:(/*^block*/id)arg4 ;
-(void)addOperation:(id)arg1 forClient:(id)arg2 withMessageBlock:(/*^block*/id)arg3 ;
-(void)addDownloadsUsingManifestWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)authorizeMachineWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)checkinRentalWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)checkoutRentalWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)demoteApplicationWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)getAccountPurchaseHistoryWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)getApplicationWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)getApplicationCapabilitiesMessage:(id)arg1 connection:(id)arg2 ;
-(void)getAvailableItemKindsWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)getFamilyCircleWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)getKBSyncWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)getPlayInfoWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)getSoftwareLibraryItemsWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)getUserApplicationsWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)haveApplicationsOfTypeWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)invalidateURLBagWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)keybagRequestWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)personalizeOffersWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)pushNotificationRequestWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)pushNotificationTokenRequestWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)redeemCodesWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)rentalSyncRequestWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)sendAskToBuyWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)showDialogRequestWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)showServerPromptWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)softwareLibraryItemSetValuesWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)addMediaSocialPostWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)getMediaSocialShareExtensionVisibilityWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)isRemovedSystemAppWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)playableApplicationsWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)hasDemotedApplicationsWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)getRemovableSytemApplicationsWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)isInstalledAppWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)sdk_getStorefrontCountryCodeWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)handlePurchaseIntentActionWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)saveInstallAttributionParamsWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)sendInstallAttributionPingbackWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)collectURLSessionDataWithMessage:(id)arg1 connection:(id)arg2 ;
-(id)_newClientWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)_sendUnentitledMessageToClient:(id)arg1 ;
-(void)_sendMessageWithError:(id)arg1 toClient:(id)arg2 ;
-(void)_sendUnentitledReplyForMessage:(id)arg1 connection:(id)arg2 ;
-(void)hasDemotedApplicationsWithMessage2:(id)arg1 connection:(id)arg2 ;
@end
