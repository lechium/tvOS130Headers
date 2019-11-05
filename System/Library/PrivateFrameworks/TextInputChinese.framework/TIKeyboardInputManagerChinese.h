/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:34 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/TextInputChinese.framework/TextInputChinese
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInputChinese/TextInputChinese-Structs.h>
#import <TextInputCore/TIKeyboardInputManager_zh_ja.h>

@class TIWordSearch, NSString, CIMCandidateData, NSOperationQueue, TIMathSymbolPunctuationController;

@interface TIKeyboardInputManagerChinese : TIKeyboardInputManager_zh_ja {

	TIWordSearch* _wordSearch;
	BOOL _isInCompletionMode;
	BOOL _shouldLearnAcceptedCandidate;
	BOOL _isAlphabeticPlane;
	BOOL _duringDeleteFromInputWithContext;
	NSString* _language;
	NSString* _modeName;
	CIMCandidateData* _candidateData;
	NSOperationQueue* _operationQueue;
	NSString* _pairedPunctuationOpenQuote;
	NSString* _pairedPunctuationSelectedText;
	NSString* _currentKeyHint;
	TIMathSymbolPunctuationController* _mathSymbolPunctuationController;

}

@property (readonly) CIMCandidateData * candidateData;                                                 //@synthesize candidateData=_candidateData - In the implementation block
@property (readonly) NSOperationQueue * operationQueue;                                                //@synthesize operationQueue=_operationQueue - In the implementation block
@property (readonly) TIMathSymbolPunctuationController * mathSymbolPunctuationController;              //@synthesize mathSymbolPunctuationController=_mathSymbolPunctuationController - In the implementation block
@property (assign) BOOL duringDeleteFromInputWithContext;                                              //@synthesize duringDeleteFromInputWithContext=_duringDeleteFromInputWithContext - In the implementation block
@property (assign,nonatomic) BOOL isAlphabeticPlane;                                                   //@synthesize isAlphabeticPlane=_isAlphabeticPlane - In the implementation block
@property (nonatomic,copy) NSString * pairedPunctuationOpenQuote;                                      //@synthesize pairedPunctuationOpenQuote=_pairedPunctuationOpenQuote - In the implementation block
@property (nonatomic,copy) NSString * pairedPunctuationSelectedText;                                   //@synthesize pairedPunctuationSelectedText=_pairedPunctuationSelectedText - In the implementation block
@property (nonatomic,readonly) unsigned long long predictionOptions; 
@property (nonatomic,copy) NSString * language;                                                        //@synthesize language=_language - In the implementation block
@property (nonatomic,copy) NSString * modeName;                                                        //@synthesize modeName=_modeName - In the implementation block
@property (assign,nonatomic) BOOL isInCompletionMode;                                                  //@synthesize isInCompletionMode=_isInCompletionMode - In the implementation block
@property (assign,nonatomic) BOOL shouldLearnAcceptedCandidate;                                        //@synthesize shouldLearnAcceptedCandidate=_shouldLearnAcceptedCandidate - In the implementation block
@property (nonatomic,copy) NSString * currentKeyHint;                                                  //@synthesize currentKeyHint=_currentKeyHint - In the implementation block
+(Class)wordSearchClass;
+(id)pairedPunctuationDictionary;
+(id)punctuationPredictionsForString:(id)arg1 ;
+(BOOL)shouldEnableHalfWidthPunctuationForDocumentContext:(id)arg1 composedText:(id)arg2 ;
+(id)GB18030CandidateFromString:(id)arg1 ;
+(id)unicodeCandidateFromString:(id)arg1 ;
-(NSOperationQueue *)operationQueue;
-(void)setInput:(id)arg1 ;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
-(id)firstCandidate;
-(unsigned long long)initialSelectedIndex;
-(id)replacementForDoubleSpace;
-(id)wordCharacters;
-(id)searchStringForMarkedText;
-(BOOL)isAlphabeticPlane;
-(void)setIsAlphabeticPlane:(BOOL)arg1 ;
-(unsigned long long)predictionOptions;
-(id)initWithConfig:(id)arg1 keyboardState:(id)arg2 ;
-(void)clearInput;
-(void)syncToKeyboardState:(id)arg1 from:(id)arg2 afterContextChange:(BOOL)arg3 ;
-(void)deleteFromInputWithContext:(id)arg1 ;
-(id)wordSearch;
-(BOOL)shouldLearnAcceptedCandidate;
-(void)setShouldLearnAcceptedCandidate:(BOOL)arg1 ;
-(void)syncToLayoutState:(id)arg1 ;
-(id)sortMethodsGroupsForCandidates:(id)arg1 ;
-(void)inputLocationChanged;
-(id)didAcceptCandidate:(id)arg1 ;
-(void)loadFavoniusTypingModel;
-(id)deleteFromInput:(unsigned long long*)arg1 ;
-(BOOL)alwaysShowExtensionCandidatesForSortingMethod:(id)arg1 ;
-(id)titleForSortingMethod:(id)arg1 ;
-(id)sortingMethods;
-(id)groupedCandidatesFromCandidates:(id)arg1 usingSortingMethod:(id)arg2 ;
-(void)setLearnsCorrection:(BOOL)arg1 ;
-(void)groupedCandidatesFromCandidates:(id)arg1 usingSortingMethod:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)supportsPairedPunctutationInput;
-(TIInputManager*)initImplementationWithMode:(id)arg1 andLanguage:(id)arg2 ;
-(BOOL)shouldSearchCompletionForSubstrings;
-(BOOL)showingFacemarkCandidates;
-(BOOL)hasIdeographicCandidates;
-(void)resetCommitHistory;
-(BOOL)shouldEnableHalfWidthPunctuationForCurrentInputContext;
-(void)willExitCompletionMode;
-(id)candidateResultSetUsedForCompletionQuery;
-(BOOL)isFacemarkInput:(id)arg1 ;
-(void*)mecabraCandidateRefFromPointerValue:(id)arg1 ;
-(id)generateCompletions;
-(BOOL)updateCompletionCandidatesIfAppropriate;
-(void)wordSearchEngineDidFindPredictionCandidates:(id)arg1 ;
-(id)completionCandidateResultSetForKeyHint:(id)arg1 ;
-(CIMCandidateData *)candidateData;
-(id)outputByConvertingDecimalPointForInput:(id)arg1 ;
-(void)acceptFirstCandidateWithContext:(id)arg1 ;
-(BOOL)handlePairedPunctuationInput:(id)arg1 context:(id)arg2 ;
-(NSString *)modeName;
-(void)setModeName:(NSString *)arg1 ;
-(BOOL)isInCompletionMode;
-(void)setIsInCompletionMode:(BOOL)arg1 ;
-(NSString *)pairedPunctuationOpenQuote;
-(void)setPairedPunctuationOpenQuote:(NSString *)arg1 ;
-(NSString *)pairedPunctuationSelectedText;
-(void)setPairedPunctuationSelectedText:(NSString *)arg1 ;
-(NSString *)currentKeyHint;
-(void)setCurrentKeyHint:(NSString *)arg1 ;
-(TIMathSymbolPunctuationController *)mathSymbolPunctuationController;
-(BOOL)duringDeleteFromInputWithContext;
-(void)setDuringDeleteFromInputWithContext:(BOOL)arg1 ;
@end
