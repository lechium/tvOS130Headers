/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:34 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface VEiOSCommonDelegate : NSObject
+(id)mainBundle;
+(void)setDelegateSubclass:(Class)arg1 ;
+(BOOL)fullScreenPlaybackOnExternalDisplay;
+(BOOL)allowSaving;
+(BOOL)ignoreReadOnly;
+(id)currentProject;
+(void)nukeCaches;
+(id)activeCoreProjectViewController;
+(BOOL)shouldPlaySlowMoWhenPreviewing;
+(unsigned long long)playbackFrameRateMode;
+(unsigned long long)exportFrameRateMode;
+(float)duckingAmount;
+(BOOL)forceTeardownDisplayOnProjectChange;
+(BOOL)updateProjectAndCachesOnPhotosLibraryChange;
+(long long)playbackPixelCount;
+(void)setCurrentProject:(id)arg1 ;
+(void)notifyCPVCProjectChanged;
+(float)videoScale;
+(void)setVideoScale:(float)arg1 ;
+(BOOL)furtherConstrainVideoScale;
+(void)setFullScreenPlaybackOnExternalDisplay:(BOOL)arg1 ;
@end
