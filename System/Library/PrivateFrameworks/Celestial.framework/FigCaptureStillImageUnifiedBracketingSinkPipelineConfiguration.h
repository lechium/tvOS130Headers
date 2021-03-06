/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:31 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/FigCaptureBaseStillImageSinkPipelineConfiguration.h>

@class NSDictionary;

@interface FigCaptureStillImageUnifiedBracketingSinkPipelineConfiguration : FigCaptureBaseStillImageSinkPipelineConfiguration {

	unsigned _pipelineStagePriority;
	unsigned _inferencePriority;
	int _deviceType;
	NSDictionary* _sensorIDStringsByPortType;
	NSDictionary* _baseZoomFactorsByPortType;
	int _redEyeReductionVersion;
	float _overCapturePercentage;
	SCD_Struct_BW19 _overCaptureImageDimensions;
	BOOL _captureTimePhotosCurationSupported;
	BOOL _supportsCameraCalibrationDataWithoutDepthForBravoConstituentPhoto;
	NSDictionary* _cameraInfoByPortType;

}

@property (assign,nonatomic) unsigned pipelineStagePriority;                                                      //@synthesize pipelineStagePriority=_pipelineStagePriority - In the implementation block
@property (assign,nonatomic) unsigned inferencePriority;                                                          //@synthesize inferencePriority=_inferencePriority - In the implementation block
@property (assign,nonatomic) int deviceType;                                                                      //@synthesize deviceType=_deviceType - In the implementation block
@property (nonatomic,retain) NSDictionary * sensorIDStringsByPortType;                                            //@synthesize sensorIDStringsByPortType=_sensorIDStringsByPortType - In the implementation block
@property (nonatomic,retain) NSDictionary * baseZoomFactorsByPortType;                                            //@synthesize baseZoomFactorsByPortType=_baseZoomFactorsByPortType - In the implementation block
@property (assign,nonatomic) int redEyeReductionVersion;                                                          //@synthesize redEyeReductionVersion=_redEyeReductionVersion - In the implementation block
@property (assign,nonatomic) float overCapturePercentage;                                                         //@synthesize overCapturePercentage=_overCapturePercentage - In the implementation block
@property (assign,nonatomic) SCD_Struct_BW19 overCaptureImageDimensions;                                          //@synthesize overCaptureImageDimensions=_overCaptureImageDimensions - In the implementation block
@property (assign,nonatomic) BOOL captureTimePhotosCurationSupported;                                             //@synthesize captureTimePhotosCurationSupported=_captureTimePhotosCurationSupported - In the implementation block
@property (assign,nonatomic) BOOL supportsCameraCalibrationDataWithoutDepthForBravoConstituentPhoto;              //@synthesize supportsCameraCalibrationDataWithoutDepthForBravoConstituentPhoto=_supportsCameraCalibrationDataWithoutDepthForBravoConstituentPhoto - In the implementation block
@property (nonatomic,retain) NSDictionary * cameraInfoByPortType;                                                 //@synthesize cameraInfoByPortType=_cameraInfoByPortType - In the implementation block
-(void)dealloc;
-(int)deviceType;
-(void)setDeviceType:(int)arg1 ;
-(NSDictionary *)baseZoomFactorsByPortType;
-(void)setOverCapturePercentage:(float)arg1 ;
-(void)setPipelineStagePriority:(unsigned)arg1 ;
-(void)setInferencePriority:(unsigned)arg1 ;
-(void)setSensorIDStringsByPortType:(NSDictionary *)arg1 ;
-(void)setBaseZoomFactorsByPortType:(NSDictionary *)arg1 ;
-(int)redEyeReductionVersion;
-(void)setRedEyeReductionVersion:(int)arg1 ;
-(void)setOverCaptureImageDimensions:(SCD_Struct_BW19)arg1 ;
-(void)setCaptureTimePhotosCurationSupported:(BOOL)arg1 ;
-(void)setSupportsCameraCalibrationDataWithoutDepthForBravoConstituentPhoto:(BOOL)arg1 ;
-(void)setCameraInfoByPortType:(NSDictionary *)arg1 ;
-(float)overCapturePercentage;
-(BOOL)supportsCameraCalibrationDataWithoutDepthForBravoConstituentPhoto;
-(NSDictionary *)cameraInfoByPortType;
-(unsigned)pipelineStagePriority;
-(unsigned)inferencePriority;
-(NSDictionary *)sensorIDStringsByPortType;
-(SCD_Struct_BW19)overCaptureImageDimensions;
-(BOOL)captureTimePhotosCurationSupported;
@end

