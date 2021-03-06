/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:54:57 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/Setup.app/Setup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Setup/SATVStepViewController.h>
#import <Setup/SATVNetworkConfigurationDelegate.h>
#import <Setup/SATVActionStep.h>

@protocol OS_dispatch_source;
@class UIActivityIndicatorView, UIView, SATVNetworkReachability, TVSEthernetInterface, TVSWiFiInterface, NSObject, NSString;

@interface SATVNetworkValidationViewController : SATVStepViewController <SATVNetworkConfigurationDelegate, SATVActionStep> {

	BOOL standardNavigation;
	BOOL _observingNetworkInterface;
	BOOL _shouldWaitForPhysicalInterface;
	BOOL _observingEthernetNetworkInterface;
	BOOL _observingWiFiNetworkInterface;
	BOOL _presentingError;
	BOOL _interfaceAvailabilityTimerExpired;
	/*^block*/id completionHandler;
	UIActivityIndicatorView* _activityIndicatorView;
	UIView* _activityIndicatorContainerView;
	SATVNetworkReachability* _networkReachability;
	TVSEthernetInterface* _ethernetInterface;
	TVSWiFiInterface* _wiFiInterface;
	NSObject*<OS_dispatch_source> _interfaceAvailabilityTimer;

}

@property (nonatomic,retain) UIActivityIndicatorView * activityIndicatorView;                                                //@synthesize activityIndicatorView=_activityIndicatorView - In the implementation block
@property (nonatomic,retain) UIView * activityIndicatorContainerView;                                                        //@synthesize activityIndicatorContainerView=_activityIndicatorContainerView - In the implementation block
@property (nonatomic,retain) SATVNetworkReachability * networkReachability;                                                  //@synthesize networkReachability=_networkReachability - In the implementation block
@property (nonatomic,retain) TVSEthernetInterface * ethernetInterface;                                                       //@synthesize ethernetInterface=_ethernetInterface - In the implementation block
@property (nonatomic,retain) TVSWiFiInterface * wiFiInterface;                                                               //@synthesize wiFiInterface=_wiFiInterface - In the implementation block
@property (assign,getter=isObservingEthernetNetworkInterface,nonatomic) BOOL observingEthernetNetworkInterface;              //@synthesize observingEthernetNetworkInterface=_observingEthernetNetworkInterface - In the implementation block
@property (assign,getter=isObservingWiFiNetworkInterface,nonatomic) BOOL observingWiFiNetworkInterface;                      //@synthesize observingWiFiNetworkInterface=_observingWiFiNetworkInterface - In the implementation block
@property (assign,getter=isPresentingError,nonatomic) BOOL presentingError;                                                  //@synthesize presentingError=_presentingError - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> interfaceAvailabilityTimer;                                       //@synthesize interfaceAvailabilityTimer=_interfaceAvailabilityTimer - In the implementation block
@property (assign,nonatomic) BOOL interfaceAvailabilityTimerExpired;                                                         //@synthesize interfaceAvailabilityTimerExpired=_interfaceAvailabilityTimerExpired - In the implementation block
@property (assign,getter=isStandardNavigation,nonatomic) BOOL standardNavigation; 
@property (getter=isObservingNetworkInterface,nonatomic,readonly) BOOL observingNetworkInterface;                            //@synthesize observingNetworkInterface=_observingNetworkInterface - In the implementation block
@property (assign,nonatomic) BOOL shouldWaitForPhysicalInterface;                                                            //@synthesize shouldWaitForPhysicalInterface=_shouldWaitForPhysicalInterface - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) id menuHandler; 
@property (nonatomic,readonly) BOOL isConfigured; 
@property (nonatomic,copy) id completionHandler; 
+(id)stableKey;
-(id)init;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(BOOL)isConfigured;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(UIActivityIndicatorView *)activityIndicatorView;
-(void)setActivityIndicatorView:(UIActivityIndicatorView *)arg1 ;
-(void)_showActivityIndicator;
-(void)autoAdvance;
-(UIView *)activityIndicatorContainerView;
-(void)setActivityIndicatorContainerView:(UIView *)arg1 ;
-(void)_hideActivityIndicator;
-(void)didCompleteNetworkConfiguration;
-(SATVNetworkReachability *)networkReachability;
-(void)setNetworkReachability:(SATVNetworkReachability *)arg1 ;
-(void)_cancelInterfaceAvailabilityTimer;
-(void)_stopObservingEthernetlInterfaceChanges;
-(void)_stopObservingWiFiInterfaceChanges;
-(BOOL)_isFactoryActivated;
-(void)_observeEthernetInterfaceChanges;
-(void)_testReachabilityForActiveInterfaceIfPossible;
-(TVSEthernetInterface *)ethernetInterface;
-(BOOL)shouldWaitForPhysicalInterface;
-(void)_testReachabilityForEthernet;
-(TVSWiFiInterface *)wiFiInterface;
-(void)_testReachabilityForWifi;
-(void)_startInterfaceAvailabilityTimerIfNeeded;
-(void)_pushWiFiController;
-(void)_connectionSucceeded;
-(void)_ethernetConnectionFailed;
-(void)_wiFiConnectionFailed;
-(void)setInterfaceAvailabilityTimerExpired:(BOOL)arg1 ;
-(BOOL)isPresentingError;
-(void)setPresentingError:(BOOL)arg1 ;
-(void)_pushNetworkConfigurationController;
-(void)_presentReachabilityErrorIsWiFi:(BOOL)arg1 withOKAction:(/*^block*/id)arg2 ;
-(void)_forgetCurrentWiFiNetwork;
-(void)_observeWiFiInterfaceChanges;
-(BOOL)isObservingEthernetNetworkInterface;
-(void)setObservingEthernetNetworkInterface:(BOOL)arg1 ;
-(BOOL)isObservingWiFiNetworkInterface;
-(void)setObservingWiFiNetworkInterface:(BOOL)arg1 ;
-(BOOL)isStandardNavigation;
-(void)setStandardNavigation:(BOOL)arg1 ;
-(BOOL)isObservingNetworkInterface;
-(void)setShouldWaitForPhysicalInterface:(BOOL)arg1 ;
-(void)setEthernetInterface:(TVSEthernetInterface *)arg1 ;
-(void)setWiFiInterface:(TVSWiFiInterface *)arg1 ;
-(NSObject*<OS_dispatch_source>)interfaceAvailabilityTimer;
-(void)setInterfaceAvailabilityTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(BOOL)interfaceAvailabilityTimerExpired;
@end

