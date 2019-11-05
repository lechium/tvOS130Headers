/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:54:30 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/PineBoard.app/PineBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PineBoard/PBSExternalControlSystemDelegate.h>
#import <PineBoard/PBVolumeControllerDelegate.h>

@class PBSExternalControlSystem, PBVolumeController, TVSStateMachine, NSString;

@interface PBExternalControlSystem : NSObject <PBSExternalControlSystemDelegate, PBVolumeControllerDelegate> {

	PBSExternalControlSystem* _externalControlSystem;
	PBVolumeController* _volumeController;
	TVSStateMachine* _volumeBehaviorStateMachine;

}

@property (nonatomic,retain) PBSExternalControlSystem * externalControlSystem;              //@synthesize externalControlSystem=_externalControlSystem - In the implementation block
@property (nonatomic,retain) PBVolumeController * volumeController;                         //@synthesize volumeController=_volumeController - In the implementation block
@property (nonatomic,retain) TVSStateMachine * volumeBehaviorStateMachine;                  //@synthesize volumeBehaviorStateMachine=_volumeBehaviorStateMachine - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_sharedInstance;
+(id)sharedSystem;
+(BOOL)isAppleIRRemotePaired;
+(void)pairAppleIRRemote;
+(void)unpairAppleIRRemote;
+(BOOL)volumeControlNeedsConfiguring;
-(id)init;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setVolumeController:(PBVolumeController *)arg1 ;
-(PBVolumeController *)volumeController;
-(PBSExternalControlSystem *)externalControlSystem;
-(void)externalControlSystemDidUpdatePolicy:(id)arg1 ;
-(void)externalControlSystem:(id)arg1 didHandleRemoteControlButtonPressed:(long long)arg2 ;
-(void)externalControlSystem:(id)arg1 didHandleRemoteControlButtonReleased:(long long)arg2 ;
-(void)externalControlSystem:(id)arg1 didReceiveRequest:(long long)arg2 ;
-(void)setExternalControlSystem:(PBSExternalControlSystem *)arg1 ;
-(void)externalControlSystemDidRequestAlternateRouteVolumeUp:(id)arg1 behavior:(long long)arg2 ;
-(void)externalControlSystemDidRequestAlternateRouteVolumeDown:(id)arg1 behavior:(long long)arg2 ;
-(void)volumeSupportedChanged:(id)arg1 forOutputContext:(unsigned long long)arg2 ;
-(id)DisplayModeBinding;
-(void)_handleDisplayModeDidChange;
-(void)tvs_bindDisplayModeBindingToObject:(id)arg1 withKeyPath:(id)arg2 options:(id)arg3 ;
-(void)_initializeVolumeBehaviorStateMachine;
-(void)_listenForVolumeButtonOverrideUpdates;
-(void)_listenForNowPlayingAppNotifications;
-(TVSStateMachine *)volumeBehaviorStateMachine;
-(BOOL)_shouldSuppressWakeForRemoteControlButton:(long long)arg1 ;
-(void)setVolumeBehaviorStateMachine:(TVSStateMachine *)arg1 ;
@end
