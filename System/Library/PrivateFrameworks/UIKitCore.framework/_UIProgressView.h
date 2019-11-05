/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:59 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class _UICircleProgressView, NSProgress;

@interface _UIProgressView : UIView {

	_UICircleProgressView* _progressView;
	NSProgress* _trackedProgress;

}

@property (nonatomic,retain) NSProgress * trackedProgress;              //@synthesize trackedProgress=_trackedProgress - In the implementation block
-(id)init;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)setTrackedProgress:(NSProgress *)arg1 ;
-(void)_updateProgressValue;
-(NSProgress *)trackedProgress;
@end
