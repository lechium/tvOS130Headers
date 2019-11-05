/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:39 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/MDRenderTarget.h>

@protocol GGLRenderQueueSource;
@class NSString;

@interface GGLImageCanvas : NSObject <MDRenderTarget> {

	RenderTargetFormat _resolvedRenderTargetFormat;
	CGSize _size;
	double _contentScale;
	CGRect _bounds;
	BOOL _canMakeImage;
	BOOL _recreateRenderTarget;
	BOOL _allowAlpha;
	id<GGLRenderQueueSource> _renderSource;
	unique_ptr<ggl::IOSurfaceTexture, std::__1::default_delete<ggl::IOSurfaceTexture> >* _flippedSurfaceTexture;
	unique_ptr<ggl::RenderTarget, std::__1::default_delete<ggl::RenderTarget> >* _flippedRenderTarget;
	unique_ptr<(anonymous namespace)::YFlipPass, std::__1::default_delete<(anonymous namespace)::YFlipPass> >* _yFlipPass;
	RenderTargetFormat _format;
	shared_ptr<ggl::Device>* _device;
	Renderer* _renderer;
	unique_ptr<ggl::RenderTarget, std::__1::default_delete<ggl::RenderTarget> >* _renderTarget;
	unique_ptr<ggl::Texture, std::__1::default_delete<ggl::Texture> >* _colorBuffer;
	unique_ptr<ggl::RenderBuffer, std::__1::default_delete<ggl::RenderBuffer> >* _depthStencilBuffer;
	BOOL _useMultisampling;
	unique_ptr<ggl::Texture, std::__1::default_delete<ggl::Texture> >* _msaaResolveBuffer;
	unsigned long long _signpostId;

}

@property (assign,nonatomic) BOOL allowAlpha;                                              //@synthesize allowAlpha=_allowAlpha - In the implementation block
@property (nonatomic,readonly) RenderTarget* renderTarget; 
@property (nonatomic,readonly) RenderTarget* finalRenderTarget; 
@property (nonatomic,readonly) Texture2D* imageTexture; 
@property (nonatomic,readonly) RenderTargetFormat resolvedRenderTargetFormat;              //@synthesize resolvedRenderTargetFormat=_resolvedRenderTargetFormat - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) CGSize size;                                                  //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) double contentScale;                                          //@synthesize contentScale=_contentScale - In the implementation block
@property (assign,nonatomic) CGRect bounds;                                                //@synthesize bounds=_bounds - In the implementation block
@property (assign,nonatomic) id<GGLRenderQueueSource> renderSource;                        //@synthesize renderSource=_renderSource - In the implementation block
@property (nonatomic,readonly) BOOL multiSample;                                           //@synthesize useMultisampling=_useMultisampling - In the implementation block
@property (nonatomic,readonly) const RenderTargetFormat* format; 
@property (nonatomic,readonly) Renderer* renderer; 
@property (nonatomic,readonly) BOOL shouldRasterize; 
@property (nonatomic,readonly) CGSize sizeInPixels; 
@property (nonatomic,readonly) float averageFPS; 
-(void)dealloc;
-(CGSize)size;
-(const RenderTargetFormat*)format;
-(void)setSize:(CGSize)arg1 ;
-(CGRect)bounds;
-(void)setBounds:(CGRect)arg1 ;
-(BOOL)shouldRasterize;
-(Renderer*)renderer;
-(double)contentScale;
-(CGSize)sizeInPixels;
-(RenderTarget*)finalRenderTarget;
-(void)setContentScale:(double)arg1 ;
-(RenderTarget*)renderTarget;
-(Texture*)finalSurface;
-(void)willDrawView;
-(BOOL)multiSample;
-(RenderTarget*)_internalRenderTarget;
-(void)didDrawView;
-(void)destroyRenderTarget;
-(void)createRenderTarget;
-(BOOL)hasRenderTarget;
-(void)renderWithTimestamp:(double)arg1 completion:(function<void ()>*)arg2 ;
-(shared_ptr<ggl::BitmapDataBase>*)bitmapData;
-(id<GGLRenderQueueSource>)renderSource;
-(void)setRenderSource:(id<GGLRenderQueueSource>)arg1 ;
-(id)initWithSize:(CGSize)arg1 scale:(double)arg2 useMultisampling:(BOOL)arg3 taskContext:(const shared_ptr<md::TaskContext>*)arg4 device:(Device*)arg5 signpostId:(unsigned long long)arg6 ;
-(Texture2D*)imageTexture;
-(BOOL)allowAlpha;
-(void)setAllowAlpha:(BOOL)arg1 ;
-(RenderTargetFormat)resolvedRenderTargetFormat;
@end
