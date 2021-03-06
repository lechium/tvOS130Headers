/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:59:25 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/TVSettings.app/TVSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVSettings/TVSettings-Structs.h>
#import <UIKit/UIApplicationDelegate.h>

@class UIWindow, UINavigationController, NSDate, NSString;

@interface TVSettingsAppDelegate : NSObject <UIApplicationDelegate> {

	UINavigationController* _navigationController;
	NSDate* _backgroundedDate;
	UIWindow* _window;

}

@property (nonatomic,retain) UIWindow * window;                     //@synthesize window=_window - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIWindow *)window;
-(void)applicationWillEnterForeground:(id)arg1 ;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(void)setWindow:(UIWindow *)arg1 ;
-(void)applicationWillTerminate:(id)arg1 ;
-(BOOL)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2 ;
-(BOOL)application:(id)arg1 openURL:(id)arg2 options:(id)arg3 ;
-(BOOL)application:(id)arg1 runTest:(id)arg2 options:(id)arg3 ;
-(id)_findFirstViewOfClass:(Class)arg1 inViewHierarchy:(id)arg2 depth:(int)arg3 ;
-(void)startLogTest:(id)arg1 ;
-(void)_presentRegionsAlertController;
-(void)startScrollTestForScrollViewClass:(Class)arg1 fromViewHierarchy:(id)arg2 testName:(id)arg3 axis:(int)arg4 options:(id)arg5 ;
-(BOOL)_openURLConfiguration:(id)arg1 ;
-(void)_handleAuthKitURLIfNeededFromResourceDictionary:(id)arg1 overViewController:(id)arg2 ;
@end

