/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:54 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameCenterUI/GKExtensionHostContext.h>
#import <GameCenterUI/GKGameCenterDashboardHostProtocol.h>

@class NSString, GKGame;

@interface GKDashboardExtensionHostContext : GKExtensionHostContext <GKGameCenterDashboardHostProtocol>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) GKGame * game; 
+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(void)requestDashboardLogoImageWithHandler:(/*^block*/id)arg1 ;
-(void)requestImagesForLeaderboardSetsWithHandler:(/*^block*/id)arg1 ;
-(void)getMethodsImplementedByChallengeEventHandlerDelegate:(/*^block*/id)arg1 ;
-(void)requestImagesForLeaderboardsInSet:(id)arg1 handler:(/*^block*/id)arg2 ;
@end
