/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:01 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UIWebViewDelegate.h>

@class NSString;

@interface PSAboutHTMLSheetViewController : UIViewController <UIWebViewDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)presentAboutSheetTitled:(id)arg1 HTMLContent:(id)arg2 fromViewController:(id)arg3 ;
-(void)dealloc;
-(void)loadView;
-(BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 ;
-(void)viewDidBecomeVisible;
-(void)donePressed;
-(void)setHTMLContent:(id)arg1 isFragment:(BOOL)arg2 ;
@end

