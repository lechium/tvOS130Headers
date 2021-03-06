/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:55 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/PlugIns/GameCenterMatchmakerExtension.appex/GameCenterMatchmakerExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameCenterUI/GKExtensionViewController.h>
#import <GameCenterMatchmakerExtension/GKDashboardMultiplayerP2PViewControllerDelegate.h>
#import <GameCenterMatchmakerExtension/GKDashboardNearbyBrowserDelegate.h>
#import <GameCenterMatchmakerExtension/GKMatchmakerServiceProtocol.h>

@class GKMatchRequest, GKInvite, NSArray, NSString, GKGame;

@interface GKMatchmakerExtensionViewController : GKExtensionViewController <GKDashboardMultiplayerP2PViewControllerDelegate, GKDashboardNearbyBrowserDelegate, GKMatchmakerServiceProtocol> {

	BOOL _hosted;
	GKMatchRequest* _matchRequest;
	GKInvite* _acceptedInvite;
	NSArray* _existingPlayers;
	/*^block*/id _nearbyPlayerHandler;

}

@property (nonatomic,retain) GKMatchRequest * matchRequest;              //@synthesize matchRequest=_matchRequest - In the implementation block
@property (nonatomic,retain) GKInvite * acceptedInvite;                  //@synthesize acceptedInvite=_acceptedInvite - In the implementation block
@property (assign,nonatomic) BOOL hosted;                                //@synthesize hosted=_hosted - In the implementation block
@property (nonatomic,retain) NSArray * existingPlayers;                  //@synthesize existingPlayers=_existingPlayers - In the implementation block
@property (nonatomic,copy) id nearbyPlayerHandler;                       //@synthesize nearbyPlayerHandler=_nearbyPlayerHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) GKGame * game; 
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)applicationWillEnterForeground;
-(void)setAcceptedInvite:(GKInvite *)arg1 ;
-(GKInvite *)acceptedInvite;
-(void)setNearbyPlayerHandler:(id)arg1 ;
-(void)startBrowsingForNearbyPlayersWithReachableHandler:(/*^block*/id)arg1 ;
-(void)stopBrowsingForNearbyPlayers;
-(id)nearbyPlayerHandler;
-(GKMatchRequest *)matchRequest;
-(void)setMatchRequest:(GKMatchRequest *)arg1 ;
-(void)setInitialState:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)messageFromClient:(id)arg1 ;
-(void)setNearbyPlayer:(id)arg1 reachable:(BOOL)arg2 ;
-(void)setHosted:(BOOL)arg1 ;
-(void)setExistingPlayers:(NSArray *)arg1 ;
-(void)setDefaultInvitationMessage:(id)arg1 ;
-(void)constructContentViewController;
-(id)hostObjectProxy;
-(void)multiplayerP2PViewControllerWasCancelled:(id)arg1 ;
-(void)multiplayerP2PViewController:(id)arg1 didFinishWithError:(id)arg2 ;
-(void)multiplayerP2PViewController:(id)arg1 startMatchingWithRequest:(id)arg2 ;
-(void)multiplayerP2PViewController:(id)arg1 cancelInviteToPlayer:(id)arg2 ;
-(void)multiplayerP2PViewController:(id)arg1 sendData:(id)arg2 ;
-(id)multiplayerViewController;
-(BOOL)hosted;
-(NSArray *)existingPlayers;
-(void)multiplayerP2PViewController:(id)arg1 shareMatchWithRequest:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)multiplayerP2PViewController:(id)arg1 setShareInvitees:(id)arg2 ;
-(void)multiplayerP2PViewControllerCancelMatching:(id)arg1 ;
@end

