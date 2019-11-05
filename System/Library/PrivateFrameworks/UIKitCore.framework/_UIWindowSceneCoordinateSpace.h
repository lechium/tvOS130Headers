/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:21 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UICoordinateSpace.h>

@class FBSSceneSettings, UIWindowScene, NSString;

@interface _UIWindowSceneCoordinateSpace : NSObject <UICoordinateSpace> {

	FBSSceneSettings* _effectiveSettings;
	UIWindowScene* _windowScene;

}

@property (nonatomic,readonly) CGRect bounds; 
@property (nonatomic,__weak,readonly) UIWindowScene * windowScene;              //@synthesize windowScene=_windowScene - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGRect)bounds;
-(UIWindowScene *)windowScene;
-(CGRect)convertRect:(CGRect)arg1 toCoordinateSpace:(id)arg2 ;
-(CGRect)convertRect:(CGRect)arg1 fromCoordinateSpace:(id)arg2 ;
-(CGPoint)convertPoint:(CGPoint)arg1 toCoordinateSpace:(id)arg2 ;
-(CGPoint)convertPoint:(CGPoint)arg1 fromCoordinateSpace:(id)arg2 ;
-(id)initWithWindowScene:(id)arg1 effectiveSettings:(id)arg2 ;
@end
