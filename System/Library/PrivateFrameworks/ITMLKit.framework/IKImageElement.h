/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:08 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/ITMLKit-Structs.h>
#import <ITMLKit/IKViewElement.h>

@class NSDictionary, NSURL, NSArray, IKSrcSetRule, UIImage, TVImageProxy, UIColor;

@interface IKImageElement : IKViewElement {

	double _srcWidth;
	double _srcHeight;
	IKImageElement* _fallbackImageElement;
	NSDictionary* _srcset;
	unsigned long long _imageType;
	double _aspectRatio;
	NSURL* _resolvedURL;
	NSArray* _srcsetRules;
	IKSrcSetRule* _bestRule;

}

@property (nonatomic,readonly) BOOL tv_isResource; 
@property (nonatomic,readonly) UIImage * tv_resourceImage; 
@property (nonatomic,readonly) TVImageProxy * tv_imageProxy; 
@property (nonatomic,readonly) CGSize tv_imageScaleToSize; 
@property (nonatomic,readonly) long long tv_imageType; 
@property (nonatomic,retain) NSURL * resolvedURL;                                  //@synthesize resolvedURL=_resolvedURL - In the implementation block
@property (nonatomic,retain) NSArray * srcsetRules;                                //@synthesize srcsetRules=_srcsetRules - In the implementation block
@property (nonatomic,retain) IKSrcSetRule * bestRule;                              //@synthesize bestRule=_bestRule - In the implementation block
@property (nonatomic,readonly) IKImageElement * fallbackImageElement;              //@synthesize fallbackImageElement=_fallbackImageElement - In the implementation block
@property (nonatomic,readonly) NSURL * url; 
@property (nonatomic,retain,readonly) NSDictionary * srcset;                       //@synthesize srcset=_srcset - In the implementation block
@property (nonatomic,retain,readonly) NSURL * placeholderURL; 
@property (nonatomic,readonly) unsigned long long imageType;                       //@synthesize imageType=_imageType - In the implementation block
@property (nonatomic,readonly) double width; 
@property (nonatomic,readonly) double height; 
@property (nonatomic,readonly) double aspectRatio;                                 //@synthesize aspectRatio=_aspectRatio - In the implementation block
@property (nonatomic,readonly) unsigned long long position; 
@property (nonatomic,readonly) UIColor * borderColor; 
@property (nonatomic,readonly) long long fill; 
@property (nonatomic,readonly) long long reflect; 
+(BOOL)shouldParseChildDOMElements;
+(unsigned long long)_imageTypeForTagName:(id)arg1 ;
-(CGSize)tv_imageScaleToSize;
-(long long)tv_imageType;
-(TVImageProxy *)tv_imageProxy;
-(id)tv_imageProxyWithLayout:(id)arg1 ;
-(id)tv_associatedViewElement;
-(id)tv_urlWithLayout:(id)arg1 ;
-(id)tv_urlWithSize:(CGSize)arg1 focusSizeIncrease:(double)arg2 centerGrowth:(BOOL)arg3 cropCode:(id)arg4 ;
-(BOOL)tv_isResource;
-(UIImage *)tv_resourceImage;
-(id)tv_urlWithSize:(CGSize)arg1 focusSizeIncrease:(double)arg2 ;
-(NSURL *)resolvedURL;
-(NSURL *)url;
-(unsigned long long)position;
-(double)width;
-(double)height;
-(UIColor *)borderColor;
-(double)aspectRatio;
-(unsigned long long)imageType;
-(NSDictionary *)srcset;
-(void)_initCommon;
-(long long)fill;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(void)appDocumentDidMarkStylesDirty;
-(id)initWithPrototypeElement:(id)arg1 parent:(id)arg2 appDataItem:(id)arg3 ;
-(id)initWithOriginalElement:(id)arg1 ;
-(void)_resolveURL;
-(void)_parseSrcset:(id)arg1 ;
-(NSArray *)srcsetRules;
-(IKImageElement *)fallbackImageElement;
-(NSURL *)placeholderURL;
-(long long)reflect;
-(void)setResolvedURL:(NSURL *)arg1 ;
-(void)setSrcsetRules:(NSArray *)arg1 ;
-(IKSrcSetRule *)bestRule;
-(void)setBestRule:(IKSrcSetRule *)arg1 ;
@end

