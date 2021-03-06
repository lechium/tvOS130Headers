/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:28 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSDateInterval, NSMutableSet, PGGraphLocationNode;

@interface PGPastSupersetGroup : NSObject {

	NSMutableArray* _moments;
	NSDateInterval* _dateInterval;
	NSMutableSet* _supersetCityNodes;
	NSMutableSet* _densestCloseLocationNodes;
	PGGraphLocationNode* _stateNode;

}

@property (retain) NSMutableArray * moments;                              //@synthesize moments=_moments - In the implementation block
@property (retain) NSDateInterval * dateInterval;                         //@synthesize dateInterval=_dateInterval - In the implementation block
@property (retain) NSMutableSet * supersetCityNodes;                      //@synthesize supersetCityNodes=_supersetCityNodes - In the implementation block
@property (retain) NSMutableSet * densestCloseLocationNodes;              //@synthesize densestCloseLocationNodes=_densestCloseLocationNodes - In the implementation block
@property (retain) PGGraphLocationNode * stateNode;                       //@synthesize stateNode=_stateNode - In the implementation block
+(id)pastSupersetGroupWithMoments:(id)arg1 dateInterval:(id)arg2 supersetCityNode:(id)arg3 densestCloseLocationNode:(id)arg4 ;
-(NSDateInterval *)dateInterval;
-(void)setDateInterval:(NSDateInterval *)arg1 ;
-(NSMutableArray *)moments;
-(void)setMoments:(NSMutableArray *)arg1 ;
-(NSMutableSet *)supersetCityNodes;
-(void)setSupersetCityNodes:(NSMutableSet *)arg1 ;
-(NSMutableSet *)densestCloseLocationNodes;
-(void)setDensestCloseLocationNodes:(NSMutableSet *)arg1 ;
-(PGGraphLocationNode *)stateNode;
-(void)setStateNode:(PGGraphLocationNode *)arg1 ;
@end

