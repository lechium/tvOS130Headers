/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:04 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusMarimbaProducer.opplugin/OpusMarimbaProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusMarimbaProducer/OpusMarimbaProducer-Structs.h>
#import <UIKitCore/UIView.h>

@protocol MRMarimbaViewInteractionDelegate;
@class MRMarimbaLayerView, NSArray, UIButton, MRMarimbaLayer, MPDocument;

@interface MRMarimbaView : UIView {

	MRMarimbaLayerView* _marimbaLayerView;
	NSArray* _orderedVideoPaths;
	UIButton* _exitButton;
	unsigned long long _hudShowCount;
	BOOL _isEnteringExitingMarimba;
	BOOL _isInMarimba;
	BOOL _usesExitButton;
	MRMarimbaLayer* _marimbaLayer;
	double _aspectRatio;
	id<MRMarimbaViewInteractionDelegate> _interactionDelegate;

}

@property (readonly) MRMarimbaLayer * marimbaLayer;                                       //@synthesize marimbaLayer=_marimbaLayer - In the implementation block
@property (nonatomic,retain) MPDocument * document; 
@property (assign) id<MRMarimbaViewInteractionDelegate> interactionDelegate;              //@synthesize interactionDelegate=_interactionDelegate - In the implementation block
@property (assign,nonatomic) double marimbaContentsScale; 
@property (assign,nonatomic) double aspectRatio;                                          //@synthesize aspectRatio=_aspectRatio - In the implementation block
@property (readonly) CGRect cleanAperture; 
@property (readonly) BOOL isInMarimba;                                                    //@synthesize isInMarimba=_isInMarimba - In the implementation block
@property (assign,nonatomic) BOOL usesExitButton;                                         //@synthesize usesExitButton=_usesExitButton - In the implementation block
-(void)marimbaWasSingleTappedAtPoint:(CGPoint)arg1 ;
-(void)_marimbaViewCommonInit;
-(void)setMarimbaContentsScale:(double)arg1 ;
-(double)marimbaContentsScale;
-(void)setUsesExitButton:(BOOL)arg1 ;
-(BOOL)isInMarimba;
-(void)pinchOut:(id)arg1 ;
-(CGRect)cleanAperture;
-(BOOL)usesExitButton;
-(void)pinchIn:(id)arg1 ;
-(void)hideHUD;
-(BOOL)canInteract;
-(BOOL)wantsSingleTap;
-(void)showHUD;
-(void)warmupAndPlay:(BOOL)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)enterMarimbaWithDuration:(double)arg1 andCompletionBlock:(/*^block*/id)arg2 ;
-(void)exitMarimbaWithDuration:(double)arg1 location:(CGPoint)arg2 andScale:(double)arg3 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)stop;
-(void)cleanup;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)pause;
-(void)setFrame:(CGRect)arg1 ;
-(void)setInteractionDelegate:(id<MRMarimbaViewInteractionDelegate>)arg1 ;
-(double)aspectRatio;
-(void)setAspectRatio:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)close:(id)arg1 ;
-(BOOL)acceptsFirstResponder;
-(MPDocument *)document;
-(void)setDocument:(MPDocument *)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)didMoveToWindow;
-(MRMarimbaLayer *)marimbaLayer;
-(id<MRMarimbaViewInteractionDelegate>)interactionDelegate;
@end

