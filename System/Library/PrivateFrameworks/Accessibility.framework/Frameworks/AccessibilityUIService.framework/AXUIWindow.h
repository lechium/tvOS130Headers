/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:25 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AccessibilityUIService.framework/AccessibilityUIService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilityUIService/AccessibilityUIService-Structs.h>
#import <UIKitCore/_UIRootWindow.h>

@interface AXUIWindow : _UIRootWindow {

	BOOL _isHandlingFullScreenPresentation;

}

@property (assign,nonatomic) BOOL isHandlingFullScreenPresentation;              //@synthesize isHandlingFullScreenPresentation=_isHandlingFullScreenPresentation - In the implementation block
+(BOOL)_isSecure;
-(id)description;
-(id)accessibilityLabel;
-(UIEdgeInsets)_normalizedSafeAreaInsets;
-(BOOL)_accessibilityIsIsolatedWindow;
-(id)_accessibilityElementCommunityIdentifier;
-(BOOL)_shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(id)_layerForCoordinateSpaceConversion;
-(long long)_interfaceOrientationForSceneSafeAreaInsetsIncludingStatusBar:(BOOL)arg1 ;
-(BOOL)isHandlingFullScreenPresentation;
-(void)setIsHandlingFullScreenPresentation:(BOOL)arg1 ;
@end

