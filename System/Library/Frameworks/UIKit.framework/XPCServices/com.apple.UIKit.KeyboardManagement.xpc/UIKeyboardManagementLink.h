/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:59 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/UIKit.framework/XPCServices/com.apple.UIKit.KeyboardManagement.xpc/com.apple.UIKit.KeyboardManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <com.apple.UIKit.KeyboardManagement/_UIKeyboardArbiterLink.h>
#import <com.apple.UIKit.KeyboardManagement/FBSWorkspaceDelegate.h>
#import <com.apple.UIKit.KeyboardManagement/FBSSceneDelegate.h>

@class NSString, _UIKeyboardArbiter, FBSWorkspace, FBSScene;

@interface UIKeyboardManagementLink : NSObject <_UIKeyboardArbiterLink, FBSWorkspaceDelegate, FBSSceneDelegate> {

	FBSWorkspace* _workspace;
	FBSScene* _scene;
	_UIKeyboardArbiter* owner;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * serviceName; 
@property (assign,nonatomic,__weak) _UIKeyboardArbiter * owner; 
@property (nonatomic,readonly) BOOL isAvailable; 
-(NSString *)description;
-(void)setOwner:(_UIKeyboardArbiter *)arg1 ;
-(NSString *)serviceName;
-(void)workspace:(id)arg1 didCreateScene:(id)arg2 withTransitionContext:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)workspace:(id)arg1 willDestroyScene:(id)arg2 withTransitionContext:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)workspace:(id)arg1 didReceiveActions:(id)arg2 ;
-(void)scene:(id)arg1 didReceiveActions:(id)arg2 ;
-(void)scene:(id)arg1 didUpdateWithDiff:(id)arg2 transitionContext:(id)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)isAvailable;
-(void)attach:(id)arg1 ;
-(void)detach:(id)arg1 ;
-(_UIKeyboardArbiter *)owner;
-(void)connectWithQueue:(id)arg1 ;
-(void)createSceneWithCompletion:(/*^block*/id)arg1 ;
-(void)updateSceneSettings;
-(void)workspaceDidEndTransaction:(id)arg1 ;
-(void)workspaceDidBeginTransaction:(id)arg1 ;
@end

