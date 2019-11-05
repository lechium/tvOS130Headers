/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:32 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/NSSecureCoding.h>
#import <Celestial/NSCopying.h>

@interface FigMomentCaptureSettings : NSObject <NSSecureCoding, NSCopying> {

	long long _settingsID;
	unsigned long long _userInitiatedCaptureTime;
	int _torchMode;
	int _flashMode;
	BOOL _autoRedEyeReductionEnabled;
	int _digitalFlashMode;
	int _qualityPrioritization;
	int _HDRMode;
	BOOL _autoOriginalPhotoDeliveryEnabled;
	BOOL _autoSpatialOverCaptureEnabled;

}

@property (nonatomic,readonly) long long settingsID;                                                                       //@synthesize settingsID=_settingsID - In the implementation block
@property (nonatomic,readonly) unsigned long long userInitiatedCaptureTime;                                                //@synthesize userInitiatedCaptureTime=_userInitiatedCaptureTime - In the implementation block
@property (assign,nonatomic) int torchMode;                                                                                //@synthesize torchMode=_torchMode - In the implementation block
@property (assign,nonatomic) int flashMode;                                                                                //@synthesize flashMode=_flashMode - In the implementation block
@property (assign,nonatomic) BOOL autoRedEyeReductionEnabled;                                                              //@synthesize autoRedEyeReductionEnabled=_autoRedEyeReductionEnabled - In the implementation block
@property (assign,nonatomic) int digitalFlashMode;                                                                         //@synthesize digitalFlashMode=_digitalFlashMode - In the implementation block
@property (assign,nonatomic) int qualityPrioritization;                                                                    //@synthesize qualityPrioritization=_qualityPrioritization - In the implementation block
@property (assign,nonatomic) int HDRMode;                                                                                  //@synthesize HDRMode=_HDRMode - In the implementation block
@property (assign,getter=isAutoOriginalPhotoDeliveryEnabled,nonatomic) BOOL autoOriginalPhotoDeliveryEnabled;              //@synthesize autoOriginalPhotoDeliveryEnabled=_autoOriginalPhotoDeliveryEnabled - In the implementation block
@property (assign,getter=isAutoSpatialOverCaptureEnabled,nonatomic) BOOL autoSpatialOverCaptureEnabled;                    //@synthesize autoSpatialOverCaptureEnabled=_autoSpatialOverCaptureEnabled - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)settingsID;
-(void)setFlashMode:(int)arg1 ;
-(void)setAutoRedEyeReductionEnabled:(BOOL)arg1 ;
-(void)setDigitalFlashMode:(int)arg1 ;
-(void)setHDRMode:(int)arg1 ;
-(void)setAutoSpatialOverCaptureEnabled:(BOOL)arg1 ;
-(void)setQualityPrioritization:(int)arg1 ;
-(int)flashMode;
-(BOOL)autoRedEyeReductionEnabled;
-(int)digitalFlashMode;
-(int)HDRMode;
-(int)qualityPrioritization;
-(unsigned long long)userInitiatedCaptureTime;
-(BOOL)isAutoOriginalPhotoDeliveryEnabled;
-(BOOL)isAutoSpatialOverCaptureEnabled;
-(int)torchMode;
-(id)initWithSettingsID:(long long)arg1 userInitiatedCaptureTime:(unsigned long long)arg2 ;
-(void)setTorchMode:(int)arg1 ;
-(void)setAutoOriginalPhotoDeliveryEnabled:(BOOL)arg1 ;
@end
