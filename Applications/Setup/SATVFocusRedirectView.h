/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:54:56 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/Setup.app/Setup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Setup/Setup-Structs.h>
#import <UIKitCore/UIView.h>

@class UIFocusContainerGuide;

@interface SATVFocusRedirectView : UIView {

	BOOL _containsInertia;
	UIFocusContainerGuide* _containerGuide;

}

@property (assign,nonatomic) BOOL containsInertia;                                  //@synthesize containsInertia=_containsInertia - In the implementation block
@property (nonatomic,readonly) UIFocusContainerGuide * containerGuide;              //@synthesize containerGuide=_containerGuide - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIFocusContainerGuide *)containerGuide;
-(BOOL)_containsInertiaSelectionChanges;
-(BOOL)containsInertia;
-(void)setContainsInertia:(BOOL)arg1 ;
@end

