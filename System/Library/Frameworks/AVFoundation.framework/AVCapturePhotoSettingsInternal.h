/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:29 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSString, NSURL, NSArray;

@interface AVCapturePhotoSettingsInternal : NSObject {

	NSDictionary* format;
	NSString* processedFileType;
	unsigned rawPhotoPixelFormatType;
	NSString* rawFileType;
	long long uniqueID;
	long long flashMode;
	long long HDRMode;
	BOOL EV0PhotoDeliveryEnabled;
	BOOL highResolutionPhotoEnabled;
	BOOL depthDataDeliveryEnabled;
	BOOL embedsDepthDataInPhoto;
	BOOL depthDataFiltered;
	BOOL cameraCalibrationDataDeliveryEnabled;
	NSDictionary* metadata;
	NSURL* livePhotoMovieFileURL;
	NSURL* livePhotoMovieFileURLForOriginalPhoto;
	NSString* livePhotoVideoCodecType;
	NSArray* livePhotoMovieMetadata;
	NSArray* livePhotoMovieMetadataForOriginalPhoto;
	NSDictionary* previewPhotoFormat;
	NSDictionary* embeddedThumbnailPhotoFormat;
	BOOL squareCropEnabled;
	BOOL turboModeEnabled;
	BOOL burstQualityCaptureEnabled;
	NSArray* photoFilters;
	NSArray* adjustedPhotoFilters;
	unsigned shutterSound;
	unsigned long long userInitiatedPhotoRequestTime;
	NSURL* HEICSFileURL;
	NSURL* videoFileURL;
	NSDictionary* videoFormat;
	NSArray* videoFileMetadata;
	NSString* livePhotoContentIdentifier;
	NSString* livePhotoContentIdentifierForOriginalPhoto;

}
@end

