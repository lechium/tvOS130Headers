/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:54:28 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/PineBoard.app/PineBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BSTransaction.h>
#import <PineBoard/FBSceneObserver.h>
#import <PineBoard/FBSceneManagerObserver.h>

@class NSString, BSWatchdog, FBScene;

@interface PBWaitForDefaultKioskSceneTransaction : BSTransaction <FBSceneObserver, FBSceneManagerObserver> {

	NSString* _targetSceneIdentifier;
	BSWatchdog* _watchdog;
	FBScene* _defaultKioskScene;

}

@property (nonatomic,retain) NSString * targetSceneIdentifier;                //@synthesize targetSceneIdentifier=_targetSceneIdentifier - In the implementation block
@property (nonatomic,readonly) BSWatchdog * watchdog;                         //@synthesize watchdog=_watchdog - In the implementation block
@property (nonatomic,retain) FBScene * defaultKioskScene;                     //@synthesize defaultKioskScene=_defaultKioskScene - In the implementation block
@property (nonatomic,readonly) FBScene * readyDefaultKioskScene; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)_begin;
-(BOOL)_canBeInterrupted;
-(void)_didComplete;
-(NSString *)targetSceneIdentifier;
-(BSWatchdog *)watchdog;
-(void)sceneManager:(id)arg1 didCreateScene:(id)arg2 ;
-(void)sceneManager:(id)arg1 willDestroyScene:(id)arg2 ;
-(void)sceneContentStateDidChange:(id)arg1 ;
-(FBScene *)defaultKioskScene;
-(FBScene *)readyDefaultKioskScene;
-(void)setDefaultKioskScene:(FBScene *)arg1 ;
-(void)setTargetSceneIdentifier:(NSString *)arg1 ;
@end

