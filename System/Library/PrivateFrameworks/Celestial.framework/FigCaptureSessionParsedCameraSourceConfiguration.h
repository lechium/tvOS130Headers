/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:28 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FigCaptureSourceConfiguration, FigVideoCaptureConnectionConfiguration, NSArray, FigDepthDataCaptureConnectionConfiguration;

@interface FigCaptureSessionParsedCameraSourceConfiguration : NSObject {

	FigCaptureSourceConfiguration* _cameraConfiguration;
	FigVideoCaptureConnectionConfiguration* _videoPreviewSinkConnectionConfiguration;
	NSArray* _previewDerivedVideoConnectionConfigurations;
	NSArray* _videoCaptureConnectionConfigurations;
	NSArray* _videoDataConnectionConfigurations;
	FigVideoCaptureConnectionConfiguration* _stillImageConnectionConfiguration;
	FigDepthDataCaptureConnectionConfiguration* _depthDataConnectionConfiguration;
	NSArray* _visionDataConnectionConfigurations;
	NSArray* _metadataObjectConnectionConfigurations;
	NSArray* _movieFileDetectedObjectMetadataConnectionConfigurations;

}

@property (nonatomic,readonly) FigCaptureSourceConfiguration * cameraConfiguration;                                           //@synthesize cameraConfiguration=_cameraConfiguration - In the implementation block
@property (nonatomic,readonly) FigVideoCaptureConnectionConfiguration * videoPreviewSinkConnectionConfiguration;              //@synthesize videoPreviewSinkConnectionConfiguration=_videoPreviewSinkConnectionConfiguration - In the implementation block
@property (nonatomic,readonly) NSArray * previewDerivedVideoConnectionConfigurations;                                         //@synthesize previewDerivedVideoConnectionConfigurations=_previewDerivedVideoConnectionConfigurations - In the implementation block
@property (nonatomic,readonly) NSArray * videoCaptureConnectionConfigurations;                                                //@synthesize videoCaptureConnectionConfigurations=_videoCaptureConnectionConfigurations - In the implementation block
@property (nonatomic,readonly) NSArray * videoDataConnectionConfigurations;                                                   //@synthesize videoDataConnectionConfigurations=_videoDataConnectionConfigurations - In the implementation block
@property (nonatomic,readonly) FigVideoCaptureConnectionConfiguration * stillImageConnectionConfiguration;                    //@synthesize stillImageConnectionConfiguration=_stillImageConnectionConfiguration - In the implementation block
@property (nonatomic,readonly) FigDepthDataCaptureConnectionConfiguration * depthDataConnectionConfiguration;                 //@synthesize depthDataConnectionConfiguration=_depthDataConnectionConfiguration - In the implementation block
@property (nonatomic,readonly) NSArray * visionDataConnectionConfigurations;                                                  //@synthesize visionDataConnectionConfigurations=_visionDataConnectionConfigurations - In the implementation block
@property (nonatomic,readonly) NSArray * metadataObjectConnectionConfigurations;                                              //@synthesize metadataObjectConnectionConfigurations=_metadataObjectConnectionConfigurations - In the implementation block
@property (nonatomic,readonly) NSArray * movieFileDetectedObjectMetadataConnectionConfigurations;                             //@synthesize movieFileDetectedObjectMetadataConnectionConfigurations=_movieFileDetectedObjectMetadataConnectionConfigurations - In the implementation block
-(void)dealloc;
-(id)initWithConnectionConfigurations:(id)arg1 clientSetsUserInitiatedCaptureRequestTime:(BOOL)arg2 sceneClassifierConnectionConfigurationOut:(id*)arg3 ;
-(id)initWithCameraConfiguration:(id)arg1 videoPreviewSinkConnectionConfiguration:(id)arg2 previewDerivedVideoConnectionConfigurations:(id)arg3 videoCaptureConnectionConfigurations:(id)arg4 videoDataConnectionConfiguration:(id)arg5 stillImageConnectionConfiguration:(id)arg6 depthDataConnectionConfiguration:(id)arg7 visionDataConnectionConfiguration:(id)arg8 metadataObjectConnectionConfiguration:(id)arg9 movieFileDetectedObjectMetadataConnectionConfigurations:(id)arg10 ;
-(FigCaptureSourceConfiguration *)cameraConfiguration;
-(FigVideoCaptureConnectionConfiguration *)videoPreviewSinkConnectionConfiguration;
-(NSArray *)previewDerivedVideoConnectionConfigurations;
-(NSArray *)videoCaptureConnectionConfigurations;
-(NSArray *)videoDataConnectionConfigurations;
-(FigVideoCaptureConnectionConfiguration *)stillImageConnectionConfiguration;
-(FigDepthDataCaptureConnectionConfiguration *)depthDataConnectionConfiguration;
-(NSArray *)visionDataConnectionConfigurations;
-(NSArray *)metadataObjectConnectionConfigurations;
-(NSArray *)movieFileDetectedObjectMetadataConnectionConfigurations;
@end

