/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:57 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _UIScrollViewScrollObserver_Internal <_UIScrollViewScrollObserver>
@optional
-(void)_didScroll;
-(void)_observeScrollView:(id)arg1 willEndDraggingWithVelocity:(CGPoint)arg2 targetContentOffset:(CGPoint*)arg3 unclampedOriginalTarget:(CGPoint)arg4;
-(UIEdgeInsets*)_revealableContentPaddingForObservedScrollView:(id)arg1 includeContentWithCollapsedAffinity:(BOOL)arg2;
-(UIEdgeInsets*)_collapsableContentPaddingForObservedScrollView:(id)arg1;
-(void)_observeScrollViewWillBeginDragging:(id)arg1;
-(void)_observeScrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
-(void)_observeScrollViewDidEndDecelerating:(id)arg1;
-(void)_observeScrollView:(id)arg1 didBeginTransitionToDeferredContentOffset:(CGPoint)arg2;

@end

