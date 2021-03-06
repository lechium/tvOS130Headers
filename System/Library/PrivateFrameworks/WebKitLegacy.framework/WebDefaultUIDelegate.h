/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:02 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKitLegacy/WebKitLegacy-Structs.h>
#import <WebKitLegacy/WebUIDelegate.h>

@class NSString;

@interface WebDefaultUIDelegate : NSObject <WebUIDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedUIDelegate;
-(void)webViewFocus:(id)arg1 ;
-(void)webViewUnfocus:(id)arg1 ;
-(id)webView:(id)arg1 createWebViewWithRequest:(id)arg2 windowFeatures:(id)arg3 ;
-(void)webViewShow:(id)arg1 ;
-(void)webView:(id)arg1 setToolbarsVisible:(BOOL)arg2 ;
-(BOOL)webViewAreToolbarsVisible:(id)arg1 ;
-(void)webView:(id)arg1 setStatusBarVisible:(BOOL)arg2 ;
-(BOOL)webViewIsStatusBarVisible:(id)arg1 ;
-(void)webView:(id)arg1 setResizable:(BOOL)arg2 ;
-(void)webView:(id)arg1 runJavaScriptAlertPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3 ;
-(BOOL)webView:(id)arg1 runJavaScriptConfirmPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3 ;
-(id)webView:(id)arg1 runJavaScriptTextInputPanelWithPrompt:(id)arg2 defaultText:(id)arg3 initiatedByFrame:(id)arg4 ;
-(void)webView:(id)arg1 setStatusText:(id)arg2 ;
-(void)webView:(id)arg1 printFrameView:(id)arg2 ;
-(void)webView:(id)arg1 exceededApplicationCacheOriginQuotaForSecurityOrigin:(id)arg2 totalSpaceNeeded:(unsigned long long)arg3 ;
-(void)webView:(id)arg1 runOpenPanelForFileButtonWithResultListener:(id)arg2 ;
-(id)webViewFirstResponder:(id)arg1 ;
-(void)webView:(id)arg1 makeFirstResponder:(id)arg2 ;
-(BOOL)webView:(id)arg1 shouldReplaceUploadFile:(id)arg2 usingGeneratedFilename:(id*)arg3 ;
-(id)webView:(id)arg1 generateReplacementFile:(id)arg2 ;
-(void)webView:(id)arg1 setFrame:(CGRect)arg2 ;
-(CGRect)webViewFrame:(id)arg1 ;
-(void)webViewSupportedOrientationsUpdated:(id)arg1 ;
-(void)webViewClose:(id)arg1 ;
-(id)webViewStatusText:(id)arg1 ;
-(BOOL)webViewIsResizable:(id)arg1 ;
-(void)webView:(id)arg1 mouseDidMoveOverElement:(id)arg2 modifierFlags:(unsigned long long)arg3 ;
-(id)webView:(id)arg1 createWebViewWithRequest:(id)arg2 userGesture:(BOOL)arg3 ;
-(void)webView:(id)arg1 didDrawRect:(CGRect)arg2 ;
-(void)webView:(id)arg1 didScrollDocumentInFrameView:(id)arg2 ;
@end

