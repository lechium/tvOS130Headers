/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:54:30 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/PineBoard.app/PineBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BSTransaction.h>

@class UIViewController;

@interface _PBSystemUIPresentationTransaction : BSTransaction {

	BOOL _animated;
	UIViewController* _viewController;
	UIViewController* _parentViewController;
	/*^block*/id _transitionBlock;

}

@property (nonatomic,readonly) UIViewController * viewController;                    //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,readonly) UIViewController * parentViewController;              //@synthesize parentViewController=_parentViewController - In the implementation block
@property (nonatomic,readonly) BOOL animated;                                        //@synthesize animated=_animated - In the implementation block
@property (nonatomic,copy,readonly) id transitionBlock;                              //@synthesize transitionBlock=_transitionBlock - In the implementation block
-(void)_begin;
-(BOOL)_canBeInterrupted;
-(UIViewController *)parentViewController;
-(UIViewController *)viewController;
-(BOOL)animated;
-(id)initWithViewController:(id)arg1 parentViewController:(id)arg2 animated:(BOOL)arg3 transitionBlock:(/*^block*/id)arg4 ;
-(id)transitionBlock;
@end

