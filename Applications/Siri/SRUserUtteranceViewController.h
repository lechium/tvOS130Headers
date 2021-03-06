/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:55:31 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/Siri.app/Siri
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Siri/Siri-Structs.h>
#import <SiriUI/SiriUIAceObjectViewController.h>
#import <Siri/SREditableTextViewDelegate.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>

@class SRUserUtteranceView, UITapGestureRecognizer, NSArray, NSMutableArray, SREditableTextView, UICollectionView, SiriUICollectionViewFlowLayout, SRUserUtteranceContainerView, NSString, NSMutableDictionary, SAUIChangePrimaryUtterance, AFUserUtterance;

@interface SRUserUtteranceViewController : SiriUIAceObjectViewController <SREditableTextViewDelegate, UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {

	SRUserUtteranceView* _utteranceView;
	BOOL _changeUtteranceShouldDisplay;
	UITapGestureRecognizer* _tapRecognizer;
	NSArray* _speechAlternativeDisplayList;
	NSMutableArray* _speechAlternativeList;
	NSMutableArray* _viewArray;
	SREditableTextView* _editableUtteranceView;
	UICollectionView* _speechAlternativeCollectionView;
	SiriUICollectionViewFlowLayout* _speechAlternativeCollectionViewLayout;
	BOOL _showSpeechAlternativeList;
	SRUserUtteranceContainerView* _containerView;
	BOOL _startEditWhenShown;
	NSString* _speechAlternativeListTitle;
	NSMutableDictionary* _alternativeInfoMap;
	BOOL _showOnDeviceResults;
	NSString* _sessionId;
	NSString* _originalUtteranceText;
	NSString* _preCorrectionText;
	CGSize _currentTextSize;
	BOOL _textChanged;
	SAUIChangePrimaryUtterance* _changeUtteranceCommand;
	BOOL _newRequestSent;
	CGSize _oldUtteranceViewSize;
	CGRect _previousBounds;
	BOOL _needsToInvalidateCollectionViewLayoutOnViewWillLayoutSubviews;
	double _latestGivenWidth;
	BOOL _receivedFinalRecognitionResult;
	long long _speechAlternativesStartIndex;
	BOOL _forceBestTextInterpretation;
	AFUserUtterance* _userUtterance;

}

@property (setter=_setUserUtterance:,getter=_userUtterance,nonatomic,retain) AFUserUtterance * userUtterance;              //@synthesize userUtterance=_userUtterance - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(double)baselineOffsetFromBottom;
-(void)loadView;
-(id)_userUtterance;
-(void)setAceObject:(id)arg1 ;
-(id)_correctionIdentifier;
-(void)viewDidLayoutSubviews;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(double)desiredHeightForWidth:(double)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)setUtteranceUserInteractionEnabled:(BOOL)arg1 ;
-(void)endEditingAndCorrect:(BOOL)arg1 ;
-(void)endEditingAndCorrectByTouchPoint:(CGPoint)arg1 ;
-(void)handleAceCommand:(id)arg1 ;
-(double)desiredTopPaddingBelowController:(id)arg1 ;
-(double)desiredPinnedTopPadding;
-(long long)_pinAnimationType;
-(long long)_insertionAnimation;
-(long long)_replacementAnimation;
-(double)_insertionAnimatedZPosition;
-(void)editableTextViewRequestKeyboardForTapToEditWithCompletion:(/*^block*/id)arg1 ;
-(void)editableTextViewTextDidFinishCorrecting:(id)arg1 ;
-(BOOL)editableTextViewTextShouldPreventCorrection:(id)arg1 ;
-(void)editableTextViewTextWillBeginCorrecting:(id)arg1 ;
-(void)editableTextViewTextDidChange:(id)arg1 ;
-(void)editableTextViewTextDidResignFirstResponder:(id)arg1 ;
-(void)editableTextViewTextDidReceiveReturnKey:(id)arg1 ;
-(void)_updateViewWithUserUtterance:(id)arg1 ;
-(void)_utteranceViewDidSelect:(id)arg1 ;
-(void)_updateViewWithChangeUtteranceIfNeeded:(id)arg1 ;
-(void)restoreOriginalEditTextContents:(id)arg1 ;
-(void)createEditableUtteranceView;
-(void)createViewArray;
-(void)removeSpeechAlternatives;
-(void)handleChangeUtteranceCommand:(id)arg1 ;
-(void)handleShowSpeechAlternativesCommand:(id)arg1 ;
-(id)speechAlternativeHighlightListWithScore:(BOOL)arg1 ;
-(void)_setUserUtterance:(id)arg1 ;
-(double)_scaledPaddingForPadding:(double)arg1 ;
-(void)_hideEditableUtteranceView;
-(void)removeSpeechAlternativeViewAndUpdateUtteranceTextIfNecessary;
-(void)handleSelectRow:(long long)arg1 ;
-(void)_createSpeechAlternativeViewsIfNecessary;
-(void)_checkUpdatedSizingForEditableTextView:(id)arg1 ;
-(id)userSelectionResults:(id)arg1 ;
-(id)_processUserUtterance:(id)arg1 isCombined:(BOOL)arg2 displayedText:(id)arg3 withScore:(BOOL)arg4 ;
@end

