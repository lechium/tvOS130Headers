/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:43 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PXCMMShowPhotosPickerActionPerformer.h>
#import <PhotosUICore/PXCMMPhotoKitActionPerformer.h>

@class UIViewController, PXCMMPhotoKitSession;

@interface PXCMMPhotoKitPhotosPickerActionPerformer : PXCMMShowPhotosPickerActionPerformer <PXCMMPhotoKitActionPerformer> {

	UIViewController* _photosPickerViewController;

}

@property (nonatomic,readonly) PXCMMPhotoKitSession * session; 
-(void)performUserInteractionTask;
-(void)_pickerDidCompleteWithPickedAssets:(id)arg1 ;
-(id)_currentAssets;
-(id)_currentSelectedAssets;
@end

