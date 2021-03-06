/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:33 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <AVFoundation/AVFoundation-Structs.h>
@class AVWeakReference, NSObject;

@interface AVFlashlightInternal : NSObject {

	AVWeakReference* weakReference;
	OpaqueFigFlashlightRef flashlight;
	BOOL available;
	BOOL overheated;
	float flashlightLevel;
	OpaqueFigSimpleMutexRef lock;
	NSObject*<OS_dispatch_queue> serverReconnectQueue;

}
@end

