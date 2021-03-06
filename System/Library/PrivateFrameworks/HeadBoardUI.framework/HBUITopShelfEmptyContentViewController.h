/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:25 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HeadBoardUI.framework/HeadBoardUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <HeadBoardUI/HBUITopShelfContentViewController.h>

@protocol HBUITopShelfContentViewControllerDelegate;
@class NSString;

@interface HBUITopShelfEmptyContentViewController : UIViewController <HBUITopShelfContentViewController> {

	BOOL _contentOccluded;
	id<HBUITopShelfContentViewControllerDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<HBUITopShelfContentViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isContentOccluded,nonatomic) BOOL contentOccluded;                              //@synthesize contentOccluded=_contentOccluded - In the implementation block
@property (nonatomic,readonly) unsigned long long contentStyle; 
-(id<HBUITopShelfContentViewControllerDelegate>)delegate;
-(void)setDelegate:(id<HBUITopShelfContentViewControllerDelegate>)arg1 ;
-(unsigned long long)contentStyle;
-(void)setContentOccluded:(BOOL)arg1 ;
-(BOOL)isContentOccluded;
@end

