/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:50:09 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/HeadBoard.app/HeadBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HeadBoard/HeadBoard-Structs.h>
#import <UIKitCore/UICollectionViewFlowLayout.h>

@class NSArray;

@interface HBTopShelfLabeledContentLayout : UICollectionViewFlowLayout {

	struct {
		unsigned delegateSizeOfSectionHeader : 1;
	}  _flags;
	BOOL _animatingFocusUpdate;
	NSArray* _headerFrames;
	unsigned long long _focusAnimationOptions;
	double _focusingAnimationDuration;
	double _unfocusingAnimationDuration;

}

@property (nonatomic,copy) NSArray * headerFrames;                                                 //@synthesize headerFrames=_headerFrames - In the implementation block
@property (assign,getter=isAnimatingFocusUpdate,nonatomic) BOOL animatingFocusUpdate;              //@synthesize animatingFocusUpdate=_animatingFocusUpdate - In the implementation block
@property (assign,nonatomic) unsigned long long focusAnimationOptions;                             //@synthesize focusAnimationOptions=_focusAnimationOptions - In the implementation block
@property (assign,nonatomic) double focusingAnimationDuration;                                     //@synthesize focusingAnimationDuration=_focusingAnimationDuration - In the implementation block
@property (assign,nonatomic) double unfocusingAnimationDuration;                                   //@synthesize unfocusingAnimationDuration=_unfocusingAnimationDuration - In the implementation block
+(Class)invalidationContextClass;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(void)prepareLayout;
-(BOOL)flipsHorizontallyInOppositeLayoutDirection;
-(void)invalidateLayoutWithContext:(id)arg1 ;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(long long)developmentLayoutDirection;
-(unsigned long long)focusAnimationOptions;
-(void)setFocusAnimationOptions:(unsigned long long)arg1 ;
-(double)focusingAnimationDuration;
-(void)setFocusingAnimationDuration:(double)arg1 ;
-(double)unfocusingAnimationDuration;
-(void)setUnfocusingAnimationDuration:(double)arg1 ;
-(void)_updateLabeledContentDelegateFlags;
-(CGRect)_rectOfSection:(long long)arg1 ;
-(void)setHeaderFrames:(NSArray *)arg1 ;
-(id)_layoutAttributesForSectionHeaderAtIndexPath:(id)arg1 ;
-(BOOL)isAnimatingFocusUpdate;
-(void)setAnimatingFocusUpdate:(BOOL)arg1 ;
-(NSArray *)headerFrames;
-(void)_updateIsAboveFocusedItemStateForLayoutAttribute:(id)arg1 ;
-(double)_widthOfSection:(long long)arg1 ;
@end

