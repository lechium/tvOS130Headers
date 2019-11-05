/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:51 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKitCore/_UINavigationBarTransitionContextParticipant.h>

@class _UINavigationBarTransitionContext, NSArray, NSString, NSDictionary, UIView, _UINavigationBarLargeTitleViewLayout;

@interface _UINavigationBarLargeTitleView : UIView <_UINavigationBarTransitionContextParticipant> {

	_UINavigationBarTransitionContext* _transitionContext;
	NSArray* _titleCandidates;
	NSString* __effectiveTitle;
	BOOL _providesExtraSpaceForExcessiveLineHeights;
	BOOL _alignAccessoryViewToTitleBaseline;
	NSDictionary* _effectiveTitleAttributes;
	long long _titleType;
	NSString* _title;
	NSArray* _alternateTitles;
	NSDictionary* _titleAttributes;
	unsigned long long _twoLineMode;
	UIView* _accessoryView;
	unsigned long long _accessoryViewHorizontalAlignment;
	_UINavigationBarLargeTitleViewLayout* _layout;

}

@property (assign,nonatomic) long long titleType;                                              //@synthesize titleType=_titleType - In the implementation block
@property (nonatomic,copy) NSString * title;                                                   //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSArray * alternateTitles;                                        //@synthesize alternateTitles=_alternateTitles - In the implementation block
@property (nonatomic,copy) NSDictionary * titleAttributes;                                     //@synthesize titleAttributes=_titleAttributes - In the implementation block
@property (nonatomic,readonly) NSDictionary * effectiveTitleAttributes;                        //@synthesize effectiveTitleAttributes=_effectiveTitleAttributes - In the implementation block
@property (assign,nonatomic) unsigned long long twoLineMode;                                   //@synthesize twoLineMode=_twoLineMode - In the implementation block
@property (assign,nonatomic) BOOL providesExtraSpaceForExcessiveLineHeights;                   //@synthesize providesExtraSpaceForExcessiveLineHeights=_providesExtraSpaceForExcessiveLineHeights - In the implementation block
@property (nonatomic,readonly) double restingHeightOfTitleView; 
@property (nonatomic,retain) UIView * accessoryView;                                           //@synthesize accessoryView=_accessoryView - In the implementation block
@property (assign,nonatomic) BOOL alignAccessoryViewToTitleBaseline;                           //@synthesize alignAccessoryViewToTitleBaseline=_alignAccessoryViewToTitleBaseline - In the implementation block
@property (assign,nonatomic) unsigned long long accessoryViewHorizontalAlignment;              //@synthesize accessoryViewHorizontalAlignment=_accessoryViewHorizontalAlignment - In the implementation block
@property (nonatomic,readonly) UIView * accessibilityTitleView; 
@property (nonatomic,readonly) _UINavigationBarLargeTitleViewLayout * layout;                  //@synthesize layout=_layout - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(_UINavigationBarLargeTitleViewLayout *)layout;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setAccessoryView:(UIView *)arg1 ;
-(long long)titleType;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)setTitleType:(long long)arg1 ;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UIView *)accessoryView;
-(void)updateContent;
-(void)setTitleAttributes:(NSDictionary *)arg1 ;
-(NSDictionary *)titleAttributes;
-(id)_newLayout;
-(void)recordFromStateForTransition:(id)arg1 ;
-(void)prepareToRecordToState:(id)arg1 ;
-(void)recordToStateForTransition:(id)arg1 ;
-(void)ensureBackButtonTruncationOccursWithContext:(id)arg1 ;
-(void)finalizeStateFromTransition:(id)arg1 ;
-(UIView *)accessibilityTitleView;
-(void)clearTransitionContext;
-(void)adoptLayout:(id)arg1 ;
-(id)_layoutForMeasurement;
-(CGSize)sizeThatFits:(CGSize)arg1 titleType:(long long)arg2 ;
-(id)_titleForCurrentWidth;
-(void)_updateContentAndInvalidate:(BOOL)arg1 ;
-(NSDictionary *)effectiveTitleAttributes;
-(id)_effectiveTitle;
-(void)setAlignAccessoryViewToTitleBaseline:(BOOL)arg1 ;
-(void)setAccessoryViewHorizontalAlignment:(unsigned long long)arg1 ;
-(void)setTwoLineMode:(unsigned long long)arg1 ;
-(void)setProvidesExtraSpaceForExcessiveLineHeights:(BOOL)arg1 ;
-(void)setAlternateTitles:(NSArray *)arg1 ;
-(double)restingHeightOfTitleView;
-(NSArray *)alternateTitles;
-(unsigned long long)twoLineMode;
-(BOOL)providesExtraSpaceForExcessiveLineHeights;
-(BOOL)alignAccessoryViewToTitleBaseline;
-(unsigned long long)accessoryViewHorizontalAlignment;
@end
