/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:00:52 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/TVPhotos.app/TVPhotos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TVPiCloudPhotoSettings : NSObject {

	BOOL _userAuthenticated;
	BOOL _iCloudPhotoLibraryEnabled;
	BOOL _sharedPhotoStreamsEnabled;
	BOOL _myPhotoStreamEnabled;
	BOOL _displayingError;

}

@property (assign,getter=isUserAuthenticated,nonatomic) BOOL userAuthenticated;                              //@synthesize userAuthenticated=_userAuthenticated - In the implementation block
@property (assign,getter=isiCloudPhotoLibraryEnabled,nonatomic) BOOL iCloudPhotoLibraryEnabled;              //@synthesize iCloudPhotoLibraryEnabled=_iCloudPhotoLibraryEnabled - In the implementation block
@property (assign,getter=isSharedPhotoStreamsEnabled,nonatomic) BOOL sharedPhotoStreamsEnabled;              //@synthesize sharedPhotoStreamsEnabled=_sharedPhotoStreamsEnabled - In the implementation block
@property (assign,getter=isMyPhotoStreamEnabled,nonatomic) BOOL myPhotoStreamEnabled;                        //@synthesize myPhotoStreamEnabled=_myPhotoStreamEnabled - In the implementation block
@property (assign,getter=isDisplayingError,nonatomic) BOOL displayingError;                                  //@synthesize displayingError=_displayingError - In the implementation block
-(BOOL)isiCloudPhotoLibraryEnabled;
-(void)setUserAuthenticated:(BOOL)arg1 ;
-(void)setICloudPhotoLibraryEnabled:(BOOL)arg1 ;
-(void)setMyPhotoStreamEnabled:(BOOL)arg1 ;
-(void)setSharedPhotoStreamsEnabled:(BOOL)arg1 ;
-(void)setDisplayingError:(BOOL)arg1 ;
-(BOOL)isUserAuthenticated;
-(BOOL)isSharedPhotoStreamsEnabled;
-(BOOL)isMyPhotoStreamEnabled;
-(void)resetAccountSettings;
-(BOOL)isDisplayingError;
@end
