/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:44 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/Support/cloudphotod
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <cloudphotod/cloudphotod-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <cloudphotod/NSCopying.h>

@class NSMutableArray;

@interface CPLCloudKitFeatureVersionHistory : PBCodable <NSCopying> {

	NSMutableArray* _featureVersions;

}

@property (nonatomic,retain) NSMutableArray * featureVersions;              //@synthesize featureVersions=_featureVersions - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)addFeatureVersion:(id)arg1 ;
-(unsigned long long)featureVersionsCount;
-(void)clearFeatureVersions;
-(id)featureVersionAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)featureVersions;
-(void)setFeatureVersions:(NSMutableArray *)arg1 ;
@end
