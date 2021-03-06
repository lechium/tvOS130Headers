/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:36 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PXCloudQuotaControllerDelegate;
@class UIView;

@interface PXCloudQuotaController : NSObject {

	UIView* _informationBanner;
	id<PXCloudQuotaControllerDelegate> _delegate;

}

@property (nonatomic,readonly) UIView * informationBanner;                                    //@synthesize informationBanner=_informationBanner - In the implementation block
@property (assign,nonatomic,__weak) id<PXCloudQuotaControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<PXCloudQuotaControllerDelegate>)delegate;
-(void)setDelegate:(id<PXCloudQuotaControllerDelegate>)arg1 ;
-(UIView *)informationBanner;
@end

