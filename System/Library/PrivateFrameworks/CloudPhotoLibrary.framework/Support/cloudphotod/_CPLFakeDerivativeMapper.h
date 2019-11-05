/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:43 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/Support/cloudphotod
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <cloudphotod/cloudphotod-Structs.h>
@class NSString;

@interface _CPLFakeDerivativeMapper : NSObject {

	unsigned long long _resourceType;
	NSString* _outputType;
	double _maxPixelCount;

}

@property (nonatomic,readonly) unsigned long long resourceType;              //@synthesize resourceType=_resourceType - In the implementation block
@property (nonatomic,readonly) NSString * outputType;                        //@synthesize outputType=_outputType - In the implementation block
@property (nonatomic,readonly) double maxPixelCount;                         //@synthesize maxPixelCount=_maxPixelCount - In the implementation block
+(void)initialize;
+(unsigned long long)destinationResourceTypeFromShortDecription:(id)arg1 ;
-(id)description;
-(id)initWithRule:(id)arg1 ;
-(NSString *)outputType;
-(unsigned long long)resourceType;
-(void)updateResources:(id)arg1 ;
-(id)_bestSourceResourceFromResources:(id)arg1 ;
-(CGSize)_dimensionsFromBaseResource:(id)arg1 ;
-(double)maxPixelCount;
@end
