/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:12 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITextGestureCluster.h>

@interface UITextGestureClusterLinkInteract : UITextGestureCluster {

	BOOL _isTryingToHighlightLink;

}
-(id)initWithView:(id)arg1 ;
-(void)_resetForLink;
-(BOOL)tapOnLinkWithGesture:(id)arg1 ;
-(void)cancelInteractionWithLink;
-(BOOL)cluster_gestureRecognizerShouldBegin:(id)arg1 ;
-(void)smallDelayRecognizer:(id)arg1 ;
-(void)longDelayRecognizer:(id)arg1 ;
-(void)linkTapRecognizer:(id)arg1 ;
@end
