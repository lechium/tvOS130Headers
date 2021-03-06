/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:51:07 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebKit/WebKit-Structs.h>
@class WKContentView;

@interface WKDataListSuggestionsControl : NSObject {

	WebDataListSuggestionsDropdownIOS* _dropdown;
	Vector<WTF::String, 0, WTF::CrashOnOverflow, 16>* _suggestions;
	WKContentView* _view;

}

@property (assign,nonatomic,__weak) WKContentView * view;              //@synthesize view=_view - In the implementation block
-(void)invalidate;
-(long long)suggestionsCount;
-(WKContentView *)view;
-(void)setView:(WKContentView *)arg1 ;
-(long long)textAlignment;
-(void)updateWithInformation:(DataListSuggestionInformation*)arg1 ;
-(id)initWithInformation:(DataListSuggestionInformation*)arg1 inView:(id)arg2 ;
-(void)showSuggestionsDropdown:(WebDataListSuggestionsDropdownIOS*)arg1 activationType:(int)arg2 ;
-(void)didSelectOptionAtIndex:(long long)arg1 ;
-(id)textSuggestions;
-(String*)suggestionAtIndex:(long long)arg1 ;
@end

