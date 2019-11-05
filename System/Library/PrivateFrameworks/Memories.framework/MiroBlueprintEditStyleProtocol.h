/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:32 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, NSDictionary, NSString;


@protocol MiroBlueprintEditStyleProtocol <NSObject>
@property (nonatomic,readonly) NSArray * burstStyleNames; 
@property (nonatomic,readonly) NSDictionary * healingEditTransitionDictionary; 
@property (nonatomic,readonly) NSArray * transitionsAsDictionaries; 
@property (nonatomic,readonly) NSArray * multiUpTransitionsAsDictionaries; 
@property (nonatomic,readonly) NSArray * multiUpTransitionDictionaries; 
@property (nonatomic,readonly) NSArray * expandedMultiUpTransitionDictionaries; 
@property (nonatomic,readonly) double maxZoomLevel; 
@property (nonatomic,readonly) BOOL extremeZoomAllowed; 
@property (nonatomic,readonly) NSArray * allowedCropTreatments; 
@property (nonatomic,readonly) BOOL defaultCameraMotionIsPan; 
@property (nonatomic,readonly) BOOL sweepingPansAllowed; 
@property (nonatomic,readonly) BOOL centerOnFrame; 
@property (nonatomic,readonly) BOOL healingTransitionsAllowed; 
@property (nonatomic,readonly) NSString * sequentialNUpEffect; 
@property (nonatomic,readonly) double hardCutPercentage; 
@property (nonatomic,readonly) double kenBurnsAnyStillPercentage; 
@required
-(double)maxZoomLevel;
-(NSArray *)transitionsAsDictionaries;
-(NSArray *)expandedMultiUpTransitionDictionaries;
-(NSDictionary *)healingEditTransitionDictionary;
-(NSArray *)multiUpTransitionsAsDictionaries;
-(BOOL)centerOnFrame;
-(double)kenBurnsAnyStillPercentage;
-(NSArray *)allowedCropTreatments;
-(NSString *)sequentialNUpEffect;
-(BOOL)defaultCameraMotionIsPan;
-(BOOL)sweepingPansAllowed;
-(BOOL)healingTransitionsAllowed;
-(double)hardCutPercentage;
-(NSArray *)multiUpTransitionDictionaries;
-(NSArray *)burstStyleNames;
-(BOOL)extremeZoomAllowed;

@end
