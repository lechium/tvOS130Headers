/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:54:27 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/PineBoard.app/PineBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PineBoard/PBSystemOverlayUIProvider.h>
#import <PineBoard/PBSystemOverlayControllerDelegate.h>
#import <PineBoard/PBSystemUIManaging.h>

@class PBSystemOverlayController, NSString;

@interface PBRestrictionPINManager : NSObject <PBSystemOverlayUIProvider, PBSystemOverlayControllerDelegate, PBSystemUIManaging> {

	BOOL _shouldRestoreConferenceRoomDisplay;
	PBSystemOverlayController* _overlayController;
	/*^block*/id _pinRestrictionResultBlock;

}

@property (nonatomic,readonly) PBSystemOverlayController * overlayController;              //@synthesize overlayController=_overlayController - In the implementation block
@property (nonatomic,readonly) id pinRestrictionResultBlock;                               //@synthesize pinRestrictionResultBlock=_pinRestrictionResultBlock - In the implementation block
@property (nonatomic,readonly) BOOL shouldRestoreConferenceRoomDisplay;                    //@synthesize shouldRestoreConferenceRoomDisplay=_shouldRestoreConferenceRoomDisplay - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isPresenting,nonatomic,readonly) BOOL presenting; 
+(id)sharedInstance;
-(id)init;
-(BOOL)dismiss;
-(BOOL)isPresenting;
-(void)prepareUIForSystemOverlayPresentationWithCompletion:(/*^block*/id)arg1 ;
-(void)overlayController:(id)arg1 willDismissSession:(id)arg2 withContext:(id)arg3 ;
-(void)overlayController:(id)arg1 didDismissSession:(id)arg2 ;
-(void)overlayController:(id)arg1 didCancelSession:(id)arg2 withContext:(id)arg3 ;
-(void)presentWithResultBlock:(/*^block*/id)arg1 ;
-(PBSystemOverlayController *)overlayController;
-(id)pinRestrictionResultBlock;
-(BOOL)shouldRestoreConferenceRoomDisplay;
@end
