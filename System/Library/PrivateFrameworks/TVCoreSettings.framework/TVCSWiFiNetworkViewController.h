/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:18 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/TVCoreSettings.framework/TVCoreSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <TVCoreSettings/WFNetworkListing.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@protocol WFNetworkListRecord, TVCSWiFiNetworkDelegate, WFNetworkListDelegate;
@class NSString, UITableView, UINavigationController, UIGestureRecognizer, TVCSReachability, WFNetworkListController, NSArray, NSOrderedSet, NSIndexPath;

@interface TVCSWiFiNetworkViewController : UIViewController <WFNetworkListing, UITableViewDelegate, UITableViewDataSource> {

	BOOL _showOtherNetwork;
	BOOL _disabled;
	BOOL _showsCurrentNetwork;
	BOOL _waitingForNetwork;
	float _currentNetworkScaledRSSI;
	id<WFNetworkListRecord> _currentNetwork;
	long long _currentNetworkState;
	long long _deviceCapability;
	NSString* _currentNetworkSubtitle;
	UITableView* _tableView;
	id<TVCSWiFiNetworkDelegate> _delegate;
	Class _networkDetailsViewControllerClass;
	UINavigationController* _navigationController;
	UIGestureRecognizer* _navigationMenuRecognizer;
	TVCSReachability* _reachability;
	WFNetworkListController* _wifiController;
	id<WFNetworkListDelegate> _listDelegate;
	NSArray* _infraNetworks;
	NSOrderedSet* _sections;
	id<WFNetworkListRecord> _lastSelectedNetwork;
	NSIndexPath* _lastSelectedNetworkIndexPath;

}

@property (nonatomic,retain) UITableView * tableView;                                        //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) UINavigationController * navigationController;                  //@synthesize navigationController=_navigationController - In the implementation block
@property (nonatomic,retain) UIGestureRecognizer * navigationMenuRecognizer;                 //@synthesize navigationMenuRecognizer=_navigationMenuRecognizer - In the implementation block
@property (nonatomic,retain) TVCSReachability * reachability;                                //@synthesize reachability=_reachability - In the implementation block
@property (assign,getter=isWaitingForNetwork,nonatomic) BOOL waitingForNetwork;              //@synthesize waitingForNetwork=_waitingForNetwork - In the implementation block
@property (nonatomic,retain) WFNetworkListController * wifiController;                       //@synthesize wifiController=_wifiController - In the implementation block
@property (assign,nonatomic,__weak) id<WFNetworkListDelegate> listDelegate;                  //@synthesize listDelegate=_listDelegate - In the implementation block
@property (nonatomic,retain) NSArray * infraNetworks;                                        //@synthesize infraNetworks=_infraNetworks - In the implementation block
@property (retain) NSOrderedSet * sections;                                                  //@synthesize sections=_sections - In the implementation block
@property (nonatomic,retain) id<WFNetworkListRecord> lastSelectedNetwork;                    //@synthesize lastSelectedNetwork=_lastSelectedNetwork - In the implementation block
@property (nonatomic,retain) NSIndexPath * lastSelectedNetworkIndexPath;                     //@synthesize lastSelectedNetworkIndexPath=_lastSelectedNetworkIndexPath - In the implementation block
@property (assign,nonatomic,__weak) id<TVCSWiFiNetworkDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL showsCurrentNetwork;                                       //@synthesize showsCurrentNetwork=_showsCurrentNetwork - In the implementation block
@property (nonatomic,retain) Class networkDetailsViewControllerClass;                        //@synthesize networkDetailsViewControllerClass=_networkDetailsViewControllerClass - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL showOtherNetwork;                                          //@synthesize showOtherNetwork=_showOtherNetwork - In the implementation block
@property (assign) float currentNetworkScaledRSSI;                                           //@synthesize currentNetworkScaledRSSI=_currentNetworkScaledRSSI - In the implementation block
@property (retain) id<WFNetworkListRecord> currentNetwork;                                   //@synthesize currentNetwork=_currentNetwork - In the implementation block
@property (assign) long long currentNetworkState;                                            //@synthesize currentNetworkState=_currentNetworkState - In the implementation block
@property (assign) unsigned long long currentNetworkSignalBars; 
@property (assign,nonatomic) long long deviceCapability;                                     //@synthesize deviceCapability=_deviceCapability - In the implementation block
@property (nonatomic,copy) NSString * currentNetworkSubtitle;                                //@synthesize currentNetworkSubtitle=_currentNetworkSubtitle - In the implementation block
@property (assign,nonatomic) BOOL disabled;                                                  //@synthesize disabled=_disabled - In the implementation block
@property (assign,nonatomic) BOOL userAutoJoinEnabled; 
-(void)dealloc;
-(id<TVCSWiFiNetworkDelegate>)delegate;
-(void)setDelegate:(id<TVCSWiFiNetworkDelegate>)arg1 ;
-(id)title;
-(void)refresh;
-(void)setCurrentNetwork:(id<WFNetworkListRecord>)arg1 ;
-(id<WFNetworkListRecord>)currentNetwork;
-(NSOrderedSet *)sections;
-(void)setNetworks:(id)arg1 ;
-(void)setDisabled:(BOOL)arg1 ;
-(BOOL)disabled;
-(void)setTableView:(UITableView *)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3 ;
-(id)indexPathForPreferredFocusedViewInTableView:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)setSections:(NSOrderedSet *)arg1 ;
-(TVCSReachability *)reachability;
-(void)setReachability:(TVCSReachability *)arg1 ;
-(void)setScanning:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(UITableView *)tableView;
-(UINavigationController *)navigationController;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setNavigationController:(UINavigationController *)arg1 ;
-(id<WFNetworkListDelegate>)listDelegate;
-(id)_currentNetworkCell;
-(NSArray *)infraNetworks;
-(id)_nameOfSection:(long long)arg1 ;
-(void)_dumpSections;
-(id)_sectionNameAtIndex:(long long)arg1 ;
-(void)updateViewsForNetworks:(id)arg1 ;
-(void)setInfraNetworks:(NSArray *)arg1 ;
-(long long)_sectionTypeAtSection:(long long)arg1 ;
-(NSString *)currentNetworkSubtitle;
-(id)_tableCellForNetwork:(id)arg1 tableView:(id)arg2 indexPath:(id)arg3 ;
-(long long)deviceCapability;
-(id)_currentNetworkCellIndexPath;
-(void)setListDelegate:(id<WFNetworkListDelegate>)arg1 ;
-(void)powerStateDidChange:(BOOL)arg1 ;
-(BOOL)showOtherNetwork;
-(void)setShowOtherNetwork:(BOOL)arg1 ;
-(float)currentNetworkScaledRSSI;
-(void)setCurrentNetworkScaledRSSI:(float)arg1 ;
-(long long)currentNetworkState;
-(void)setCurrentNetworkState:(long long)arg1 ;
-(void)setDeviceCapability:(long long)arg1 ;
-(void)setCurrentNetworkSubtitle:(NSString *)arg1 ;
-(id)initWithTableView:(id)arg1 ;
-(void)_didPressMenu:(id)arg1 ;
-(void)_didStartAssociation:(id)arg1 ;
-(void)_didFinishAssociation:(id)arg1 ;
-(void)_reachabilityDidChange:(id)arg1 ;
-(Class)networkDetailsViewControllerClass;
-(void)setNetworkDetailsViewControllerClass:(Class)arg1 ;
-(WFNetworkListController *)wifiController;
-(void)setWifiController:(WFNetworkListController *)arg1 ;
-(id)_hostingViewController;
-(BOOL)showsCurrentNetwork;
-(void)setLastSelectedNetwork:(id<WFNetworkListRecord>)arg1 ;
-(id)_networkAtIndexPath:(id)arg1 ;
-(BOOL)isWaitingForNetwork;
-(void)setWaitingForNetwork:(BOOL)arg1 ;
-(UIGestureRecognizer *)navigationMenuRecognizer;
-(void)setNavigationMenuRecognizer:(UIGestureRecognizer *)arg1 ;
-(void)_insertSpinnerAboveHostingViewController;
-(void)_waitForNetwork;
-(void)_handleNetworkIsAvailable;
-(void)setShowsCurrentNetwork:(BOOL)arg1 ;
-(id<WFNetworkListRecord>)lastSelectedNetwork;
-(NSIndexPath *)lastSelectedNetworkIndexPath;
-(void)setLastSelectedNetworkIndexPath:(NSIndexPath *)arg1 ;
@end

