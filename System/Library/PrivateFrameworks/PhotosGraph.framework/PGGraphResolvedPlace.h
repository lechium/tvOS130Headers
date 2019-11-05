/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:31 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGGraphIngestPlace.h>

@class NSString;

@interface PGGraphResolvedPlace : NSObject <PGGraphIngestPlace> {

	NSString* _placeInterestType;
	double _confidence;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * placeInterestType;              //@synthesize placeInterestType=_placeInterestType - In the implementation block
@property (nonatomic,readonly) double confidence;                         //@synthesize confidence=_confidence - In the implementation block
-(double)confidence;
-(NSString *)placeInterestType;
-(id)initWithPlaceOfInterestType:(id)arg1 confidence:(double)arg2 ;
@end
