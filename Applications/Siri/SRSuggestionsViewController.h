/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:55:31 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/Siri.app/Siri
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Siri/Siri-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <Siri/SiriUISuggestionsViewDelegate.h>
#import <Siri/SRTranscriptStackViewControllerDelegate.h>
#import <Siri/SRTranscriptStackViewControllerDataSource.h>
#import <Siri/AFConversationDelegate.h>

@protocol SRSuggestionsViewControllerDelegate;
@class AFConversation, SRTranscriptStackViewController, SiriUISuggestionsView, NSString;

@interface SRSuggestionsViewController : UIViewController <SiriUISuggestionsViewDelegate, SRTranscriptStackViewControllerDelegate, SRTranscriptStackViewControllerDataSource, AFConversationDelegate> {

	AFConversation* _conversation;
	SRTranscriptStackViewController* _guideController;
	id<SRSuggestionsViewControllerDelegate> _delegate;

}

@property (nonatomic,retain) SiriUISuggestionsView * view; 
@property (assign,nonatomic,__weak) id<SRSuggestionsViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SRSuggestionsViewControllerDelegate>)delegate;
-(void)setDelegate:(id<SRSuggestionsViewControllerDelegate>)arg1 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)conversation:(id)arg1 didRemoveItemsWithIdentifiers:(id)arg2 atIndexPaths:(id)arg3 parentItemIdentifiers:(id)arg4 ;
-(void)conversation:(id)arg1 didUpdateItemsAtIndexPaths:(id)arg2 ;
-(void)conversation:(id)arg1 didInsertItemsAtIndexPaths:(id)arg2 ;
-(void)conversation:(id)arg1 presentationStateDidChangeForItemsAtIndexPaths:(id)arg2 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(BOOL)_canShowWhileLocked;
-(void)animateOut;
-(double)contentWidthForSuggestionsView:(id)arg1 ;
-(double)statusBarHeightForSuggestionsView:(id)arg1 ;
-(BOOL)suggestionsViewIsInTextInputMode:(id)arg1 ;
-(double)statusViewHeightForSuggestionsView:(id)arg1 ;
-(void)didShowSuggestionsForSuggestionsView:(id)arg1 ;
-(void)suggestionsView:(id)arg1 didHideVibrantView:(id)arg2 ;
-(void)showAcousticIDSpinner;
-(void)hideAcousticIDSpinner;
-(void)keyboardHeightDidChange;
-(id)conversationForTranscriptStackViewController:(id)arg1 ;
-(long long)siriStateForTranscriptStackViewController:(id)arg1 ;
-(id)domainObjectStoreForTranscriptStackViewController:(id)arg1 ;
-(id)siriEnabledAppListForTranscriptStackViewController:(id)arg1 ;
-(double)contentWidthForTranscriptStackViewController:(id)arg1 ;
-(CGRect)statusBarFrameForTranscriptStackViewController:(id)arg1 ;
-(double)statusViewHeightForTranscriptStackViewController:(id)arg1 ;
-(long long)initialDisplayTypeForTranscriptStackViewController:(id)arg1 ;
-(BOOL)transcriptStackViewControllerShouldDelaySuggestions:(id)arg1 ;
-(BOOL)transcriptStackViewControllerWillShowSuggestions:(id)arg1 ;
-(void)transcriptStackViewControllerDidShowSuggestions:(id)arg1 ;
-(void)transcriptStackViewController:(id)arg1 didHideVibrantView:(id)arg2 ;
-(void)transcriptStackViewController:(id)arg1 didPresentConversationItemsWithIdentifiers:(id)arg2 ;
-(void)transcriptStackViewController:(id)arg1 willDiscardConversationItemsWithIdentifiers:(id)arg2 ;
-(void)transcriptStackViewController:(id)arg1 didDelayPresentationOfItemsWithIdentifiers:(id)arg2 ;
-(id)effectiveCoreLocationBundleForTranscriptStackViewController:(id)arg1 ;
-(void)transcriptStackViewController:(id)arg1 openURL:(id)arg2 conversationItemIdentifier:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)transcriptStackViewController:(id)arg1 didCorrectRecognition:(id)arg2 correctionIdentifier:(id)arg3 forItemAtIndexPath:(id)arg4 userSelectionResults:(id)arg5 ;
-(void)transcriptStackViewController:(id)arg1 performAceCommand:(id)arg2 conversationItemIdentifier:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)willSendStartRequestForTranscriptStackViewController:(id)arg1 ;
-(BOOL)transcriptStackViewControllerShouldPreventUserInteraction:(id)arg1 ;
-(void)transcriptStackViewControllerRequestKeyboardForTapToEditWithCompletion:(/*^block*/id)arg1 ;
-(void)transcriptStackViewControllerWillBeginEditing:(id)arg1 ;
-(void)transcriptStackViewControllerDidEndEditing:(id)arg1 ;
-(void)cancelRequestForTranscriptStackViewController:(id)arg1 ;
-(void)transcriptStackViewController:(id)arg1 speakText:(id)arg2 isPhonetic:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)stopSpeakingForTranscriptStackViewController:(id)arg1 ;
-(void)transcriptStackViewController:(id)arg1 setStatusViewHidden:(BOOL)arg2 ;
-(void)transcriptStackViewController:(id)arg1 setTypeToSiriViewHidden:(BOOL)arg2 ;
-(void)transcriptStackViewController:(id)arg1 willPresentViewController:(id)arg2 ;
-(void)transcriptStackViewController:(id)arg1 didPresentViewController:(id)arg2 ;
-(void)transcriptStackViewController:(id)arg1 willDismissViewController:(id)arg2 ;
-(void)transcriptStackViewController:(id)arg1 didDismissViewController:(id)arg2 ;
-(void)transcriptStackViewController:(id)arg1 didRequestKeyboardWithVisibility:(BOOL)arg2 ;
-(void)transcriptStackViewController:(id)arg1 setStatusBarHidden:(BOOL)arg2 animated:(BOOL)arg3 ;
-(void)transcriptStackViewController:(id)arg1 setStatusBarHidden:(BOOL)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)transcriptStackViewController:(id)arg1 shouldPresentPicker:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)transcriptStackViewController:(id)arg1 didEditSpeechRecognized:(id)arg2 forInterval:(double)arg3 ;
-(void)transcriptStackViewController:(id)arg1 didScrollForInterval:(double)arg2 metricsContext:(id)arg3 ;
-(void)transcriptStackViewController:(id)arg1 didShowAceViewWithIdentifier:(id)arg2 aceViewClass:(Class)arg3 metricsContext:(id)arg4 forInterval:(double)arg5 ;
-(void)transcriptStackViewController:(id)arg1 didShowTipWithIdentifier:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 flowID:(id)arg5 ;
-(void)transcriptStackViewController:(id)arg1 didShowGuideStartDate:(id)arg2 endDate:(id)arg3 ;
-(id)transcriptStackViewController:(id)arg1 additionalSpeechInterpretationsForRefId:(id)arg2 ;
-(id)transcriptStackViewController:(id)arg1 updatedUserUtteranceForRefId:(id)arg2 ;
-(unsigned long long)deviceLockStateForTranscriptStackViewController:(id)arg1 ;
-(void)transcriptStackViewController:(id)arg1 requestPasscodeUnlockWithCompletion:(/*^block*/id)arg2 ;
-(void)transcriptStackViewController:(id)arg1 viewDidSetContentSizeForTranscriptAtIndex:(long long)arg2 ;
-(void)transcriptStackViewController:(id)arg1 willStartTest:(id)arg2 ;
-(void)transcriptStackViewController:(id)arg1 didFinishTest:(id)arg2 ;
-(void)transcriptStackViewControllerDidResignFirstResponder:(id)arg1 ;
-(SCD_Struct_SR0)keyboardInfoForTranscriptStackViewController:(id)arg1 ;
-(BOOL)inTextInputModeForTranscriptStackViewController:(id)arg1 ;
-(void)transcriptStackViewControllerWillEnterSiriland:(id)arg1 ;
-(void)transcriptStackViewControllerDidExitSiriland:(id)arg1 ;
-(void)showEmptyView;
-(void)showGreeting;
-(void)showGuideAnimated:(BOOL)arg1 ;
-(BOOL)isShowingGuide;
-(void)showUserNudge;
-(BOOL)isShowingUserNudge;
-(void)showRootGuide;
-(void)showGuideStart;
-(void)_showHeaderText:(id)arg1 subheaderText:(id)arg2 largeSubheaderText:(id)arg3 ;
-(id)_initialHeaderText;
-(id)_nudgeHeaderText;
-(void)_createGuideController;
-(void)transcriptStackViewController:(id)arg1 synthesizeSpeechWithPhoneticText:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)transcriptStackViewController:(id)arg1 failTest:(id)arg2 withReason:(id)arg3 ;
-(void)showUnavailable;
-(void)transcriptStackViewController:(id)arg1 setStatusBarHidden:(BOOL)arg2 ;
-(void)siriDidFinishActionsForConversationItemWithIdentifier:(id)arg1 inConversation:(id)arg2 ;
@end
