/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:37 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PXSettings.h>

@interface PXPhotoPickerSettings : PXSettings {

	BOOL _useLibraryPresentation;

}

@property (assign,nonatomic) BOOL useLibraryPresentation;              //@synthesize useLibraryPresentation=_useLibraryPresentation - In the implementation block
+(id)sharedInstance;
+(id)settingsControllerModule;
-(void)setDefaultValues;
-(id)parentSettings;
-(BOOL)useLibraryPresentation;
-(void)setUseLibraryPresentation:(BOOL)arg1 ;
@end
