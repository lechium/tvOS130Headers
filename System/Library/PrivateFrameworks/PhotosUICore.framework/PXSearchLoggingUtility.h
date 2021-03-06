/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:40 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PXSearchLoggingUtility : NSObject {

	BOOL _nextTokenSuggestionTappedInCurrentSearchSession;
	BOOL _wordCompletionTappedInCurrentSearchSession;

}

@property (assign,nonatomic) BOOL nextTokenSuggestionTappedInCurrentSearchSession;              //@synthesize nextTokenSuggestionTappedInCurrentSearchSession=_nextTokenSuggestionTappedInCurrentSearchSession - In the implementation block
@property (assign,nonatomic) BOOL wordCompletionTappedInCurrentSearchSession;                   //@synthesize wordCompletionTappedInCurrentSearchSession=_wordCompletionTappedInCurrentSearchSession - In the implementation block
-(void)setNextTokenSuggestionTappedInCurrentSearchSession;
-(void)setWordCompletionTappedInCurrentSearchSession;
-(void)logCurrentState;
-(BOOL)nextTokenSuggestionTappedInCurrentSearchSession;
-(void)setNextTokenSuggestionTappedInCurrentSearchSession:(BOOL)arg1 ;
-(BOOL)wordCompletionTappedInCurrentSearchSession;
-(void)setWordCompletionTappedInCurrentSearchSession:(BOOL)arg1 ;
@end

