/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:54 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXProtoFeaturePlaceholderView.h>

@class UIActivityIndicatorView, UILabel;

@interface PXProtoFeatureLoadingPlaceholderView : PXProtoFeaturePlaceholderView {

	UIActivityIndicatorView* _spinner;
	UILabel* _label;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)layoutSubviews;
-(void)_updateLabelText;
-(BOOL)wantsContentView;
-(void)statusDescriptionDidChange;
@end

