/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:50:10 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/HeadBoard.app/HeadBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HeadBoard/HeadBoard-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class UIMotionEffectGroup, _UIStackedImageContainerView, _TVImageStackView, NSString, UIView, UILabel, UIColor, UIFont, _UIStackedImageConfiguration;

@interface HBImageStackCollectionViewCell : UICollectionViewCell {

	BOOL _layoutIsDrawingFocused;
	UIMotionEffectGroup* _motionEffectGroup;
	BOOL _pressIsAnimating;
	BOOL _preventUnpress;
	double _titleHeight;
	double _titleWidthForAccessory;
	BOOL _unpressIsAnimating;
	BOOL _unpressOnEndAnimating;
	BOOL _alwaysDisplaysTitle;
	BOOL _showsPersistentFocus;
	BOOL _centeredImageStackWithoutResize;
	BOOL _holdsPress;
	BOOL _titleHidden;
	_UIStackedImageContainerView* _layeredImageView;
	_TVImageStackView* _imageStackView;
	NSString* _title;
	double _titleSpacing;
	long long _selectionStyle;
	UIView* _titleAccessoryView;
	UIView* _overlayView;
	UILabel* _titleLabel;
	UIColor* _textColor;
	UIFont* _titleFont;
	UIColor* _highlightedTextColor;
	UIColor* _unhighlightedTextColor;
	CGPoint _focusDirection;

}

@property (assign,nonatomic) BOOL showsPersistentFocus;                                                                                                             //@synthesize showsPersistentFocus=_showsPersistentFocus - In the implementation block
@property (assign,setter=_setCenteredImageStackWithoutResize:,getter=_centeredImageStackWithoutResize,nonatomic) BOOL centeredImageStackWithoutResize;              //@synthesize centeredImageStackWithoutResize=_centeredImageStackWithoutResize - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                                                                                                                //@synthesize titleLabel=_titleLabel - In the implementation block
@property (getter=_textColor,nonatomic,readonly) UIColor * textColor;                                                                                               //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,retain) UIFont * titleFont;                                                                                                                    //@synthesize titleFont=_titleFont - In the implementation block
@property (nonatomic,retain) UIColor * highlightedTextColor;                                                                                                        //@synthesize highlightedTextColor=_highlightedTextColor - In the implementation block
@property (nonatomic,retain) UIColor * unhighlightedTextColor;                                                                                                      //@synthesize unhighlightedTextColor=_unhighlightedTextColor - In the implementation block
@property (getter=_isPressed,nonatomic,readonly) BOOL pressed; 
@property (getter=_isPressStateAnimating,nonatomic,readonly) BOOL pressStateAnimating; 
@property (getter=_imageConfiguration,nonatomic,readonly) _UIStackedImageConfiguration * imageConfiguration; 
@property (assign,setter=_setFocusDirection:,getter=_focusDirection,nonatomic) CGPoint focusDirection;                                                              //@synthesize focusDirection=_focusDirection - In the implementation block
@property (getter=_imageViewCenter,nonatomic,readonly) CGPoint imageViewCenter; 
@property (assign,setter=_setHoldsPress:,getter=_holdsPress,nonatomic) BOOL holdsPress;                                                                             //@synthesize holdsPress=_holdsPress - In the implementation block
@property (assign,setter=_setTitleHidden:,getter=_isTitleHidden,nonatomic) BOOL titleHidden;                                                                        //@synthesize titleHidden=_titleHidden - In the implementation block
@property (nonatomic,retain) _UIStackedImageContainerView * layeredImageView;                                                                                       //@synthesize layeredImageView=_layeredImageView - In the implementation block
@property (nonatomic,retain) _TVImageStackView * imageStackView;                                                                                                    //@synthesize imageStackView=_imageStackView - In the implementation block
@property (nonatomic,copy) NSString * title;                                                                                                                        //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) double titleSpacing;                                                                                                                   //@synthesize titleSpacing=_titleSpacing - In the implementation block
@property (assign,nonatomic) long long selectionStyle;                                                                                                              //@synthesize selectionStyle=_selectionStyle - In the implementation block
@property (nonatomic,retain) UIView * titleAccessoryView;                                                                                                           //@synthesize titleAccessoryView=_titleAccessoryView - In the implementation block
@property (assign,nonatomic) BOOL alwaysDisplaysTitle;                                                                                                              //@synthesize alwaysDisplaysTitle=_alwaysDisplaysTitle - In the implementation block
@property (nonatomic,readonly) BOOL allowsMotionEffects; 
@property (nonatomic,readonly) UIView * overlayView;                                                                                                                //@synthesize overlayView=_overlayView - In the implementation block
+(CGSize)_scaledSizeForSize:(CGSize)arg1 sizeIncreaseOffset:(double)arg2 ;
+(id)_titleHeightCache;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)prepareForReuse;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)_textColor;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)layoutSubviews;
-(UILabel *)titleLabel;
-(void)traitCollectionDidChange:(id)arg1 ;
-(long long)selectionStyle;
-(void)setSelectionStyle:(long long)arg1 ;
-(void)setHighlightedTextColor:(UIColor *)arg1 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(UIColor *)highlightedTextColor;
-(UIView *)overlayView;
-(BOOL)_applyKeyPathsAndRelativeValues:(id)arg1 forMotionEffect:(id)arg2 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)willMoveToSuperview:(id)arg1 ;
-(void)setTitleFont:(UIFont *)arg1 ;
-(UIFont *)titleFont;
-(id)_imageConfiguration;
-(id)_preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(id)arg2 ;
-(id)layeredImageContainerLayer;
-(void)_showPressState;
-(CGPoint)_focusDirection;
-(void)_attachMotionEffects;
-(void)_detachMotionEffects;
-(void)_setCenteredImageStackWithoutResize:(BOOL)arg1 ;
-(void)setImageStackView:(_TVImageStackView *)arg1 ;
-(void)setOverlay:(id)arg1 ;
-(_TVImageStackView *)imageStackView;
-(BOOL)_unapplyMotionEffect:(id)arg1 ;
-(_UIStackedImageContainerView *)layeredImageView;
-(void)setLayeredImageView:(_UIStackedImageContainerView *)arg1 ;
-(void)_setFocusDirection:(CGPoint)arg1 ;
-(void)setShowsPersistentFocus:(BOOL)arg1 ;
-(void)setTitleSpacing:(double)arg1 ;
-(BOOL)alwaysDisplaysTitle;
-(double)_maxTitleWidthWithFocus:(BOOL)arg1 ;
-(Class)_labelClass;
-(void)_updateTitleTextColorForFocus:(BOOL)arg1 ;
-(void)_updateTitleShadowForFocus:(BOOL)arg1 ;
-(void)_layoutSubviewsAnimated:(BOOL)arg1 focused:(BOOL)arg2 focusUpdateContext:(id)arg3 focusAnimationCoordinator:(id)arg4 ;
-(void)clearPressState;
-(void)setAlwaysDisplaysTitle:(BOOL)arg1 ;
-(void)setTitleAccessoryView:(UIView *)arg1 ;
-(void)clearPressStateWithDuration:(double)arg1 ;
-(BOOL)_holdsPress;
-(BOOL)_isPressed;
-(BOOL)_centeredImageStackWithoutResize;
-(void)_updateTitleLayers;
-(void)_updateTitleHeightCache;
-(void)_updateTitleWidthForAccessory;
-(void)_updateTitleLayerAlphas;
-(void)_ensureTitle;
-(BOOL)allowsMotionEffects;
-(void)_updateTitleWidthAndHeight;
-(id)_textColorForFocus:(BOOL)arg1 ;
-(BOOL)_isPressStateAnimating;
-(void)setUnhighlightedTextColor:(UIColor *)arg1 ;
-(double)_scaleForImageViewState;
-(void)_setHoldsPress:(BOOL)arg1 ;
-(id)_highlightFilterChain:(BOOL)arg1 ;
-(CGPoint)_imageViewCenter;
-(double)titleSpacing;
-(UIView *)titleAccessoryView;
-(BOOL)showsPersistentFocus;
-(UIColor *)unhighlightedTextColor;
-(void)_setTitleHidden:(BOOL)arg1 ;
-(void)_updateTitleLabelContentScaleFactor;
-(void)_updateTitleLabelFont;
-(BOOL)_isTitleHidden;
@end

