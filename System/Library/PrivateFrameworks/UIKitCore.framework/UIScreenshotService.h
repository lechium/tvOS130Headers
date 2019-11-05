/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:03 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UISceneComponentProviding.h>

@protocol UIScreenshotServiceDelegate;
@class UIScene, UIWindowScene, NSString;

@interface UIScreenshotService : NSObject <_UISceneComponentProviding> {

	UIScene* _scene;
	id<UIScreenshotServiceDelegate> _delegate;
	id<UIScreenshotServiceDelegate> _privateDelegate;

}

@property (assign,nonatomic,__weak) id<UIScreenshotServiceDelegate> privateDelegate;               //@synthesize privateDelegate=_privateDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<UIScreenshotServiceDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,__weak,readonly) UIWindowScene * windowScene; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,setter=_setScene:,getter=_scene,nonatomic,__weak) UIScene * _scene;              //@synthesize scene=_scene - In the implementation block
-(id<UIScreenshotServiceDelegate>)delegate;
-(void)setDelegate:(id<UIScreenshotServiceDelegate>)arg1 ;
-(UIScene *)_scene;
-(UIWindowScene *)windowScene;
-(id<UIScreenshotServiceDelegate>)privateDelegate;
-(void)setPrivateDelegate:(id<UIScreenshotServiceDelegate>)arg1 ;
-(id)initWithScene:(id)arg1 ;
-(void)_setScene:(id)arg1 ;
@end
