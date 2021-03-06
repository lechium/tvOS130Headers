/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:03 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKitLegacy/WebKitLegacy-Structs.h>
#import <WebKitLegacy/WebOpenPanelResultListener.h>

@protocol WebOpenPanelResultListener <NSObject>
@required
-(void)cancel;
-(void)chooseFilenames:(id)arg1 displayString:(id)arg2 iconImage:(CGImageRef)arg3;
-(void)chooseFilename:(id)arg1;
-(void)chooseFilenames:(id)arg1;
-(void)chooseFilename:(id)arg1 displayString:(id)arg2 iconImage:(CGImageRef)arg3;

@end


@class NSString;

@interface WebOpenPanelResultListener : NSObject <WebOpenPanelResultListener> {

	RefPtr<WebCore::FileChooser, WTF::DumbPtrTraits<WebCore::FileChooser> >* _chooser;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cancel;
-(id)initWithChooser:(FileChooser*)arg1 ;
-(void)chooseFilenames:(id)arg1 displayString:(id)arg2 iconImage:(CGImageRef)arg3 ;
-(void)chooseFilename:(id)arg1 ;
-(void)chooseFilenames:(id)arg1 ;
-(void)chooseFilename:(id)arg1 displayString:(id)arg2 iconImage:(CGImageRef)arg3 ;
@end

