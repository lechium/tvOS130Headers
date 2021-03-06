/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:54:56 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/Setup.app/Setup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Setup/SATVStepViewController.h>
#import <Setup/SATVChooseOptionViewDataSource.h>
#import <Setup/SATVChooseOptionViewDelegate.h>
#import <Setup/SATVBluetoothKeyboardManagerDelegate.h>
#import <Setup/TVSUIDigitEntryViewControllerDelegate.h>
#import <Setup/SATVBranchStep.h>

@class NSString, SATVChooseOptionView, UILabel, SATVBluetoothKeyboardManager, TVSUIDigitEntryViewController, OBPrivacyLinkController, SATVNavigationController;

@interface SATVChooseSetupStepViewController : SATVStepViewController <SATVChooseOptionViewDataSource, SATVChooseOptionViewDelegate, SATVBluetoothKeyboardManagerDelegate, TVSUIDigitEntryViewControllerDelegate, SATVBranchStep> {

	BOOL _bluetoothPairing;
	/*^block*/id selectionHandler;
	Class superclass;
	unsigned long long hash;
	NSString* description;
	SATVChooseOptionView* _chooseOptionView;
	UILabel* _keyboardPairingPromptLabel;
	SATVBluetoothKeyboardManager* _bluetoothKeyboardManager;
	TVSUIDigitEntryViewController* _digitEntryViewController;
	OBPrivacyLinkController* _privacyLink;

}

@property (nonatomic,readonly) SATVNavigationController * navigationController; 
@property (nonatomic,retain) SATVChooseOptionView * chooseOptionView;                               //@synthesize chooseOptionView=_chooseOptionView - In the implementation block
@property (nonatomic,retain) UILabel * keyboardPairingPromptLabel;                                  //@synthesize keyboardPairingPromptLabel=_keyboardPairingPromptLabel - In the implementation block
@property (nonatomic,retain) SATVBluetoothKeyboardManager * bluetoothKeyboardManager;               //@synthesize bluetoothKeyboardManager=_bluetoothKeyboardManager - In the implementation block
@property (nonatomic,retain) TVSUIDigitEntryViewController * digitEntryViewController;              //@synthesize digitEntryViewController=_digitEntryViewController - In the implementation block
@property (assign,getter=isBluetoothPairing,nonatomic) BOOL bluetoothPairing;                       //@synthesize bluetoothPairing=_bluetoothPairing - In the implementation block
@property (nonatomic,retain) OBPrivacyLinkController * privacyLink;                                 //@synthesize privacyLink=_privacyLink - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) id menuHandler; 
@property (nonatomic,readonly) BOOL isConfigured; 
@property (nonatomic,copy) id selectionHandler; 
+(void)initialize;
+(id)stableKey;
-(unsigned long long)hash;
-(Class)superclass;
-(NSString *)description;
-(id)init;
-(void)dealloc;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(SATVNavigationController *)navigationController;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(id)preferredFocusEnvironments;
-(void)digitEntryViewControllerDidCancel:(id)arg1 ;
-(void)setSelectionHandler:(id)arg1 ;
-(id)selectionHandler;
-(void)setPrivacyLink:(OBPrivacyLinkController *)arg1 ;
-(OBPrivacyLinkController *)privacyLink;
-(void)autoAdvance;
-(SATVChooseOptionView *)chooseOptionView;
-(id)titleTextForView:(id)arg1 ;
-(id)subtitleTextForView:(id)arg1 ;
-(id)firstOptionButtonTextForView:(id)arg1 ;
-(id)secondOptionButtonTextForView:(id)arg1 ;
-(id)firstOptionButtonFooterViewForView:(id)arg1 ;
-(id)secondOptionButtonFooterViewForView:(id)arg1 ;
-(void)didSelectFirstOptionForView:(id)arg1 ;
-(void)didSelectSecondOptionForView:(id)arg1 ;
-(void)setChooseOptionView:(SATVChooseOptionView *)arg1 ;
-(void)_stopBluetoothKeyboardPairing;
-(void)_configureKeyboardPairingPromptLabel;
-(void)_beginBluetoothKeyboardPairing;
-(UILabel *)keyboardPairingPromptLabel;
-(TVSUIDigitEntryViewController *)digitEntryViewController;
-(void)setDigitEntryViewController:(TVSUIDigitEntryViewController *)arg1 ;
-(void)_popDigitEntryController;
-(SATVBluetoothKeyboardManager *)bluetoothKeyboardManager;
-(BOOL)isBluetoothPairing;
-(void)setBluetoothPairing:(BOOL)arg1 ;
-(void)presentPIN:(long long)arg1 forKeyboardWithName:(id)arg2 ;
-(void)willAttemptToPairBluetoothKeyboardWithName:(id)arg1 ;
-(void)didPairBluetoothKeyboardWithName:(id)arg1 ;
-(void)didFailToPairBluetoothKeyboardWithName:(id)arg1 ;
-(void)setKeyboardPairingPromptLabel:(UILabel *)arg1 ;
-(void)setBluetoothKeyboardManager:(SATVBluetoothKeyboardManager *)arg1 ;
@end

