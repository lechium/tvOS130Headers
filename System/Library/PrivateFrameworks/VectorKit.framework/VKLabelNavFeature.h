/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:38 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol VKLabelNavFeature
@property (nonatomic,readonly) BOOL isOnRoute; 
@property (nonatomic,readonly) BOOL isAwayFromRoute; 
@property (nonatomic,readonly) PolylineCoordinate routeOffset; 
@property (nonatomic,readonly) BOOL isRamp; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * shieldDisplayGroup; 
@property (nonatomic,readonly) BOOL isStartOfRoadName; 
@property (nonatomic,readonly) BOOL isInGuidance; 
@property (nonatomic,readonly) long long intraRoadPriority; 
@property (nonatomic,readonly) BOOL isGuidanceStepStart; 
@property (nonatomic,readonly) BOOL isEtaFeature; 
@property (nonatomic,readonly) BOOL isTrafficCameraFeature; 
@property (assign,nonatomic) BOOL isPicked; 
@required
-(NSString *)name;
-(BOOL)isRamp;
-(BOOL)isPicked;
-(PolylineCoordinate)routeOffset;
-(void)layoutWithNavContext:(NavContext*)arg1;
-(void)setIsPicked:(BOOL)arg1;
-(BOOL)isTrafficCameraFeature;
-(BOOL)isEtaFeature;
-(BOOL)isOnRoute;
-(BOOL)isAwayFromRoute;
-(NSString *)shieldDisplayGroup;
-(BOOL)isStartOfRoadName;
-(BOOL)isInGuidance;
-(long long)intraRoadPriority;
-(BOOL)isGuidanceStepStart;

@end

