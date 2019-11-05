/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:16 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoAnalysis/PhotoAnalysis-Structs.h>
#import <KnowledgeGraphKit/MANode.h>
#import <PhotoAnalysis/PVMomentProtocol.h>
#import <PhotoAnalysis/PVFaceProtocol.h>
#import <PhotoAnalysis/PVPersonProtocol.h>
#import <PhotoAnalysis/PVAssetProtocol.h>

@class NSString, NSDate, NSData;

@interface PVLibraryGraphNode : MANode <PVMomentProtocol, PVFaceProtocol, PVPersonProtocol, PVAssetProtocol>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * localIdentifier; 
@property (nonatomic,readonly) NSDate * startDate; 
@property (nonatomic,readonly) NSDate * endDate; 
@property (nonatomic,readonly) unsigned long long estimatedAssetCount; 
@property (nonatomic,readonly) CLLocationCoordinate2D approximateCoordinate; 
@property (nonatomic,readonly) NSString * personLocalIdentifier; 
@property (nonatomic,readonly) double size; 
@property (nonatomic,readonly) double centerX; 
@property (nonatomic,readonly) double centerY; 
@property (nonatomic,readonly) long long clusterSequenceNumber; 
@property (nonatomic,readonly) NSData * faceprintData; 
@property (assign,nonatomic) long long qualityMeasure; 
@property (nonatomic,readonly) unsigned short ageType; 
@property (nonatomic,readonly) unsigned long long faceCount; 
@property (nonatomic,readonly) BOOL favorite; 
@property (nonatomic,readonly) BOOL hidden; 
@property (nonatomic,readonly) NSString * anonymizedName; 
@property (nonatomic,readonly) long long verifiedType; 
@property (assign,nonatomic) BOOL isVerified; 
@property (assign,nonatomic) long long manualOrder; 
@property (nonatomic,retain) id<PVFaceProtocol> keyFace; 
@property (nonatomic,readonly) NSString * cloudIdentifier; 
@property (nonatomic,readonly) NSString * filename; 
@property (nonatomic,readonly) NSString * originalFilename; 
@property (nonatomic,readonly) unsigned long long pixelWidth; 
@property (nonatomic,readonly) unsigned long long pixelHeight; 
@property (nonatomic,readonly) NSDate * creationDate; 
@property (nonatomic,readonly) CLLocationCoordinate2D locationCoordinate; 
@property (nonatomic,readonly) NSData * distanceIdentity; 
@property (nonatomic,readonly) NSDate * clsDistanceIdentity; 
@property (readonly) NSString * localIdentifier; 
+(double)timeIntervalForDate:(id)arg1 ;
+(id)dateForTimeInterval:(double)arg1 ;
-(unsigned long long)type;
-(double)size;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(NSString *)filename;
-(NSDate *)creationDate;
-(BOOL)isDirty;
-(unsigned long long)faceCount;
-(BOOL)hidden;
-(double)centerX;
-(double)centerY;
-(BOOL)isVerified;
-(void)setIsVerified:(BOOL)arg1 ;
-(CLLocationCoordinate2D)locationCoordinate;
-(unsigned long long)pixelHeight;
-(unsigned long long)pixelWidth;
-(id)dateCreated;
-(NSString *)cloudIdentifier;
-(NSString *)localIdentifier;
-(void)setKeyFace:(id<PVFaceProtocol>)arg1 ;
-(long long)verifiedType;
-(NSString *)originalFilename;
-(BOOL)favorite;
-(NSString *)personLocalIdentifier;
-(id<PVFaceProtocol>)keyFace;
-(long long)manualOrder;
-(void)setManualOrder:(long long)arg1 ;
-(long long)qualityMeasure;
-(long long)clusterSequenceNumber;
-(unsigned short)ageType;
-(NSData *)faceprintData;
-(unsigned long long)estimatedAssetCount;
-(NSData *)distanceIdentity;
-(void)setQualityMeasure:(long long)arg1 ;
-(unsigned long long)faceCountInFaceGroup;
-(CLLocationCoordinate2D)approximateCoordinate;
-(id)personLocalIdentifiers;
-(void)pv_addMergeCandidatePersons:(id)arg1 ;
-(NSString *)anonymizedName;
-(NSDate *)clsDistanceIdentity;
@end
