/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:34 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosImagingFoundation/PhotosImagingFoundation-Structs.h>
#import <PhotosImagingFoundation/IPAVideoOperation.h>

@interface IPASloMoOperation : IPAVideoOperation {

	SCD_Struct_IP2 _timeRange;
	float _rate;

}

@property (nonatomic,readonly) float rate; 
@property (nonatomic,readonly) SCD_Struct_IP2 timeRange; 
+(id)operationFromFileURL:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)debugDescription;
-(id)identifier;
-(id)internalRepresentation;
-(SCD_Struct_IP2)timeRange;
-(float)rate;
-(id)initWithOperation:(id)arg1 ;
-(id)settingsDictionary;
-(id)initWithSettingsDictionary:(id)arg1 ;
-(BOOL)isEqualToOperation:(id)arg1 ;
-(BOOL)isMigratable;
-(id)initWithTimeRange:(SCD_Struct_IP2)arg1 rate:(float)arg2 ;
@end

