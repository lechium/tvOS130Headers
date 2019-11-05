/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:18 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/RenderBox.framework/RenderBox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <RenderBox/RenderBox-Structs.h>
@interface RBDisplayList : NSObject {

	DisplayList* _list;
	cf_ptr<CGContext *>* _context;
	ContextDelegate* _delegate;
	BOOL _linearColors;
	CGRect _contentRect;

}

@property (nonatomic,readonly) const DisplayList* rb_displayList; 
@property (assign,nonatomic) BOOL linearColors;                                //@synthesize linearColors=_linearColors - In the implementation block
@property (assign,nonatomic) CGRect contentRect;                               //@synthesize contentRect=_contentRect - In the implementation block
@property (nonatomic,readonly) CGRect boundingRect; 
@property (getter=isEmpty,nonatomic,readonly) BOOL empty; 
@property (nonatomic,readonly) CGRect clipBoundingBox; 
@property (assign,nonatomic) CGAffineTransform CTM; 
+(id)displayListForCGContext:(CGContextRef)arg1 alpha:(float*)arg2 blendMode:(int*)arg3 ;
-(id)init;
-(void)clear;
-(BOOL)isEmpty;
-(void)save;
-(CGAffineTransform)CTM;
-(void)setCTM:(CGAffineTransform)arg1 ;
-(CGRect)boundingRect;
-(CGRect)contentRect;
-(void)setContentRect:(CGRect)arg1 ;
-(void)rotateBy:(double)arg1 ;
-(void)restore;
-(CGContextRef)beginCGContextWithAlpha:(float)arg1 ;
-(void)endCGContext;
-(void)addGrayscaleFilterWithAmount:(float)arg1 ;
-(void)addColorInvertFilter;
-(void)addLuminanceToAlphaFilter;
-(void)addContrastFilterWithAmount:(float)arg1 ;
-(void)addBrightnessFilterWithAmount:(float)arg1 ;
-(void)addSaturationFilterWithAmount:(float)arg1 ;
-(void)addHueRotationFilterWithAngle:(double)arg1 ;
-(void)addColorMultiplyFilterWithColor:(SCD_Struct_RB22)arg1 ;
-(void)addColorMatrixFilterWithArray:(float)arg1 ;
-(void)addProjectionStyleWithArray:(float)arg1 ;
-(void)addShadowStyleWithRadius:(double)arg1 offset:(CGSize)arg2 color:(SCD_Struct_RB22)arg3 mode:(int)arg4 ;
-(void)addBlurFilterWithRadius:(double)arg1 opaque:(BOOL)arg2 ;
-(BOOL)linearColors;
-(void)setLinearColors:(BOOL)arg1 ;
-(void)beginLayer;
-(void)drawDisplayList:(id)arg1 ;
-(void)drawLayerWithAlpha:(float)arg1 blendMode:(int)arg2 ;
-(void)clipLayerWithAlpha:(float)arg1 mode:(int)arg2 ;
-(void)beginLayerWithFlags:(unsigned)arg1 ;
-(void)drawShape:(id)arg1 fill:(id)arg2 alpha:(float)arg3 blendMode:(int)arg4 ;
-(void)clipShape:(id)arg1 mode:(int)arg2 ;
-(void)concat:(CGAffineTransform)arg1 ;
-(void)translateByX:(double)arg1 Y:(double)arg2 ;
-(const DisplayList*)rb_displayList;
-(CGRect)clipBoundingBox;
-(void)scaleByX:(double)arg1 Y:(double)arg2 ;
-(void)addBlurFilterWithRadius:(double)arg1 ;
-(void)addColorMonochromeFilterWithAmount:(float)arg1 color:(SCD_Struct_RB22)arg2 bias:(float)arg3 ;
@end
