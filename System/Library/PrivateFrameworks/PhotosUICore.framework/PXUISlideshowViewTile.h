/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:49 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXUIImageTile.h>
#import <PhotosUICore/PXUIViewBasicTile.h>

@protocol PXUISlideshowViewTileDelegate;
@class UIView, PXUIFloatingContentView, UIViewController, NSString;

@interface PXUISlideshowViewTile : PXUIImageTile <PXUIViewBasicTile> {

	UIView* _containerView;
	PXUIFloatingContentView* _floatingView;
	BOOL _slideshowViewHidden;
	UIViewController* _slideshowViewController;
	id<PXUISlideshowViewTileDelegate> _delegate;
	UIView* __contentView;
	UIView* __slideshowSnapshotView;

}

@property (setter=_setContentView:,nonatomic,retain) UIView * _contentView;                                  //@synthesize _contentView=__contentView - In the implementation block
@property (setter=_setSlideshowSnapshotView:,nonatomic,retain) UIView * _slideshowSnapshotView;              //@synthesize _slideshowSnapshotView=__slideshowSnapshotView - In the implementation block
@property (nonatomic,retain) UIViewController * slideshowViewController;                                     //@synthesize slideshowViewController=_slideshowViewController - In the implementation block
@property (assign,getter=isSlideshowViewHidden,nonatomic) BOOL slideshowViewHidden;                          //@synthesize slideshowViewHidden=_slideshowViewHidden - In the implementation block
@property (assign,nonatomic,__weak) id<PXUISlideshowViewTileDelegate> delegate;                              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIView * view; 
-(id<PXUISlideshowViewTileDelegate>)delegate;
-(void)setDelegate:(id<PXUISlideshowViewTileDelegate>)arg1 ;
-(void)prepareForReuse;
-(UIView *)view;
-(UIView *)_contentView;
-(void)_updateSubviewOrdering;
-(void)_setContentView:(id)arg1 ;
-(void)willAnimateToGeometry:(PXTileGeometry*)arg1 toUserData:(id)arg2 withOptions:(id)arg3 ;
-(void)didAnimateToGeometry:(PXTileGeometry*)arg1 toUserData:(id)arg2 withOptions:(id)arg3 ;
-(void)didApplyGeometry:(PXTileGeometry*)arg1 withUserData:(id)arg2 ;
-(void)becomeReusable;
-(void)_updateContentViewFrame;
-(void)setSlideshowViewController:(UIViewController *)arg1 ;
-(void)setSlideshowViewHidden:(BOOL)arg1 ;
-(void)_updateContentViewVisibility;
-(UIViewController *)slideshowViewController;
-(BOOL)isSlideshowViewHidden;
-(UIView *)_slideshowSnapshotView;
-(void)_setSlideshowSnapshotView:(id)arg1 ;
@end
