/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:19 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISDialogOperation.h>

@class UIAlertController, UIWindow;

@interface ISUIKitDialogOperation : ISDialogOperation {

	UIAlertController* _alert;
	UIWindow* _window;

}
-(void)run;
-(void)handleButtonSelected:(long long)arg1 withResponseDictionary:(id)arg2 ;
-(void)_showAlertWithCompletion:(/*^block*/id)arg1 ;
-(void)_cleanupAlert;
@end

