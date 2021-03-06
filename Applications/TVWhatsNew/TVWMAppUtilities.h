/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:58:09 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/TVWhatsNew.app/TVWhatsNew
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKJSObject.h>
#import <TVWhatsNew/TVWNAppUtilities.h>

@class JSManagedValue;

@interface TVWMAppUtilities : IKJSObject <TVWNAppUtilities> {

	BOOL _shouldSkipVersionCheck;
	BOOL _imagePreloadingInProgress;
	JSManagedValue* _managedPreloaderReference;

}

@property (nonatomic,retain) JSManagedValue * managedPreloaderReference;              //@synthesize managedPreloaderReference=_managedPreloaderReference - In the implementation block
@property (assign,nonatomic) BOOL imagePreloadingInProgress;                          //@synthesize imagePreloadingInProgress=_imagePreloadingInProgress - In the implementation block
@property (assign,nonatomic) BOOL shouldSkipVersionCheck;                             //@synthesize shouldSkipVersionCheck=_shouldSkipVersionCheck - In the implementation block
-(void)suspend;
-(id)getItem:(id)arg1 ;
-(void)exit;
-(BOOL)setItem:(id)arg1 :(id)arg2 ;
-(id)lastUpdatedFromOSVersion;
-(void)_preloadImages:(id)arg1 :(id)arg2 ;
-(id)_imageProxyFromDictionary:(id)arg1 ;
-(JSManagedValue *)managedPreloaderReference;
-(void)setImagePreloadingInProgress:(BOOL)arg1 ;
-(void)setManagedPreloaderReference:(JSManagedValue *)arg1 ;
-(void)setNeedsBecomeActive;
-(BOOL)shouldSkipVersionCheck;
-(BOOL)isRunningAsViewService;
-(BOOL)preloadImages:(id)arg1 :(id)arg2 ;
-(void)setShouldSkipVersionCheck:(BOOL)arg1 ;
-(BOOL)imagePreloadingInProgress;
@end

