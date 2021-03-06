/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:54:28 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/PineBoard.app/PineBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PineBoard/PineBoard-Structs.h>
#import <UIKitCore/UIView.h>

@interface _PBPresentationElementView : UIView {

	BOOL _containedInVisibleWindow;

}

@property (getter=isContainedInVisibleWindow,nonatomic,readonly) BOOL containedInVisibleWindow;              //@synthesize containedInVisibleWindow=_containedInVisibleWindow - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)didMoveToWindow;
-(void)willMoveToWindow:(id)arg1 ;
-(BOOL)isContainedInVisibleWindow;
-(void)_updateObserversForWindow:(id)arg1 ;
-(void)_updateStateForWindow:(id)arg1 ;
-(void)_windowDidBecomeVisible:(id)arg1 ;
-(void)_windowDidBecomeHidden:(id)arg1 ;
@end

