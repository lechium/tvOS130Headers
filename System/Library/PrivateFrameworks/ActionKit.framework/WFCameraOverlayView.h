/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:41 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActionKit/ActionKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImagePickerController, WFCameraShutterButton, WFCameraFlashButton, UIView, UIButton, UILabel, WFVolumeButtonManager;

@interface WFCameraOverlayView : UIView {

	UIImagePickerController* _pickerController;
	WFCameraShutterButton* _shutterButton;
	long long _takenPhotos;
	long long _totalPhotos;
	WFCameraFlashButton* _flashButton;
	UIView* _flashView;
	UIButton* _flipButton;
	UILabel* _photosLabel;
	WFVolumeButtonManager* _volumeButtonManager;

}

@property (assign,nonatomic,__weak) WFCameraFlashButton * flashButton;                       //@synthesize flashButton=_flashButton - In the implementation block
@property (assign,nonatomic,__weak) UIView * flashView;                                      //@synthesize flashView=_flashView - In the implementation block
@property (assign,nonatomic,__weak) UIButton * flipButton;                                   //@synthesize flipButton=_flipButton - In the implementation block
@property (assign,nonatomic,__weak) UILabel * photosLabel;                                   //@synthesize photosLabel=_photosLabel - In the implementation block
@property (nonatomic,retain) WFVolumeButtonManager * volumeButtonManager;                    //@synthesize volumeButtonManager=_volumeButtonManager - In the implementation block
@property (assign,nonatomic,__weak) UIImagePickerController * pickerController;              //@synthesize pickerController=_pickerController - In the implementation block
@property (assign,nonatomic,__weak) WFCameraShutterButton * shutterButton;                   //@synthesize shutterButton=_shutterButton - In the implementation block
@property (assign,nonatomic) long long takenPhotos;                                          //@synthesize takenPhotos=_takenPhotos - In the implementation block
@property (assign,nonatomic) long long totalPhotos;                                          //@synthesize totalPhotos=_totalPhotos - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(WFCameraShutterButton *)shutterButton;
-(void)cancelPressed;
-(UILabel *)photosLabel;
-(void)shutterPressed;
-(void)updatePhotosLabel;
-(void)setTakenPhotos:(long long)arg1 ;
-(void)setTotalPhotos:(long long)arg1 ;
-(void)flipPressed;
-(void)flashValueChanged;
-(void)setPickerController:(UIImagePickerController *)arg1 ;
-(void)updateFlipButton;
-(void)updateButtons;
-(UIImagePickerController *)pickerController;
-(void)setShutterButton:(WFCameraShutterButton *)arg1 ;
-(long long)takenPhotos;
-(long long)totalPhotos;
-(WFCameraFlashButton *)flashButton;
-(void)setFlashButton:(WFCameraFlashButton *)arg1 ;
-(UIView *)flashView;
-(void)setFlashView:(UIView *)arg1 ;
-(UIButton *)flipButton;
-(void)setFlipButton:(UIButton *)arg1 ;
-(void)setPhotosLabel:(UILabel *)arg1 ;
-(WFVolumeButtonManager *)volumeButtonManager;
-(void)setVolumeButtonManager:(WFVolumeButtonManager *)arg1 ;
@end
