/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:07 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/ITMLKit-Structs.h>
#import <ITMLKit/IKJSObject.h>
#import <ITMLKit/__TVMLKitExtensionAPI.h>
#import <ITMLKit/NSObject.h>
#import <ITMLKit/IKJSApplication.h>
@class NSDictionary;


@protocol IKJSApplication <JSExport>
@property (nonatomic,readonly) NSDictionary * traitCollection; 
@required
-(NSDictionary *)traitCollection;
-(void)reload:(id)arg1 :(id)arg2;

@end

#import <ITMLKit/_IKJSApplicationProxy.h>

@class NSString, NSDictionary;

@interface IKJSApplication : IKJSObject <__TVMLKitExtensionAPI, NSObject, IKJSApplication, _IKJSApplicationProxy>

@property (readonly) int TopShelfContentStyleInset; 
@property (readonly) int TopShelfContentStyleSectioned; 
@property (readonly) int ContentItemImageShapeNone; 
@property (readonly) int ContentItemImageShapePoster; 
@property (readonly) int ContentItemImageShapeSquare; 
@property (readonly) int ContentItemImageShapeSDTV; 
@property (readonly) int ContentItemImageShapeHDTV; 
@property (readonly) int ContentItemImageShapeWide; 
@property (readonly) int ContentItemImageShapeExtraWide; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSDictionary * traitCollection; 
-(void)noteTopShelfDataChanged;
-(CGSize)topShelfImageSizeForShape:(int)arg1 :(int)arg2 ;
-(int)TopShelfContentStyleInset;
-(int)TopShelfContentStyleSectioned;
-(int)ContentItemImageShapeNone;
-(int)ContentItemImageShapePoster;
-(int)ContentItemImageShapeSquare;
-(int)ContentItemImageShapeSDTV;
-(int)ContentItemImageShapeHDTV;
-(int)ContentItemImageShapeWide;
-(int)ContentItemImageShapeExtraWide;
-(void)update;
-(NSDictionary *)traitCollection;
-(void)reload:(id)arg1 :(id)arg2 ;
-(id)asPrivateIKJSApplication;
-(void)launchAppWithOptions:(id)arg1 ;
-(void)suspendAppWithOptions:(id)arg1 ;
-(void)resumeAppWithOptions:(id)arg1 ;
-(void)openURLWithOptions:(id)arg1 ;
-(void)exitAppWithOptions:(id)arg1 ;
-(void)updatedAppWithOptions:(id)arg1 ;
-(void)traitCollectionChanged:(id)arg1 ;
-(BOOL)requestDocumentWithContext:(id)arg1 response:(id)arg2 ;
-(void)dispatchErrorWithMessage:(id)arg1 sourceURL:(id)arg2 line:(id)arg3 ;
@end

