/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:00:52 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/TVPhotos.app/TVPhotos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVPhotos/TVPhotos-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class TVImageProxy, UIImage, UIImageView, UIView;

@interface TVPPhotoCell : UICollectionViewCell {

	BOOL _imageLoaded;
	TVImageProxy* _imageProxy;
	UIImage* _photoImage;
	UIImage* _placeholderImage;
	long long _placeholderAssetType;
	UIImageView* _imageView;
	UIView* _overlayView;

}

@property (nonatomic,retain) UIImageView * imageView;                            //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UIView * overlayView;                               //@synthesize overlayView=_overlayView - In the implementation block
@property (assign,getter=isImageLoaded,nonatomic) BOOL imageLoaded;              //@synthesize imageLoaded=_imageLoaded - In the implementation block
@property (nonatomic,retain) TVImageProxy * imageProxy;                          //@synthesize imageProxy=_imageProxy - In the implementation block
@property (nonatomic,retain) UIImage * photoImage;                               //@synthesize photoImage=_photoImage - In the implementation block
@property (nonatomic,retain) UIImage * placeholderImage;                         //@synthesize placeholderImage=_placeholderImage - In the implementation block
@property (assign,nonatomic) long long placeholderAssetType;                     //@synthesize placeholderAssetType=_placeholderAssetType - In the implementation block
-(void)prepareForReuse;
-(void)setImage:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIImage *)placeholderImage;
-(void)setPlaceholderImage:(UIImage *)arg1 ;
-(UIImageView *)imageView;
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)isImageLoaded;
-(void)setImageView:(UIImageView *)arg1 ;
-(void)willMoveToWindow:(id)arg1 ;
-(UIView *)overlayView;
-(void)setOverlayView:(UIView *)arg1 ;
-(BOOL)canBecomeFocused;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)_updateImageView;
-(TVImageProxy *)imageProxy;
-(void)setImageProxy:(TVImageProxy *)arg1 ;
-(void)setImageLoaded:(BOOL)arg1 ;
-(void)setOverlay:(id)arg1 ;
-(long long)placeholderAssetType;
-(void)setPlaceholderAssetType:(long long)arg1 ;
-(double)cellCornerRadius;
-(void)setPhotoImage:(UIImage *)arg1 ;
-(void)_setPlaceholderImageFromPlaceholderAssetTypeImage;
-(UIImage *)photoImage;
@end
