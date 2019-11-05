/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:28 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGGraphHighlightNode.h>

@class PGGraphNode, NSArray;

@interface PGGraphHighlightGroupNode : PGGraphHighlightNode

@property (readonly) PGGraphNode * typeNode; 
@property (readonly) NSArray * highlightNodes; 
@property (readonly) NSArray * sortedHighlightNodes; 
+(id)pathFromMoment;
+(id)pathToMoment;
+(id)pathFromTargetNodeDomain:(unsigned short)arg1 ;
+(id)pathToTargetNodeDomain:(unsigned short)arg1 ;
+(id)inclusivePathFromTargetNodeDomain:(unsigned short)arg1 withName:(id)arg2 ;
+(id)inclusivePathToTargetNodeDomain:(unsigned short)arg1 withName:(id)arg2 ;
-(BOOL)isAggregation;
-(PGGraphNode *)typeNode;
-(BOOL)isTrip;
-(BOOL)isLongTrip;
-(BOOL)isShortTrip;
-(BOOL)isPartOfTrip;
-(BOOL)isPartOfLongTrip;
-(BOOL)isPartOfShortTrip;
-(BOOL)isPartOfAggregation;
-(void)enumerateHighlightNodesUsingBlock:(/*^block*/id)arg1 ;
-(id)momentNodes;
-(NSArray *)highlightNodes;
-(NSArray *)sortedHighlightNodes;
-(void)enumerateMomentNodesUsingBlock:(/*^block*/id)arg1 ;
-(void)eventEnumerateMomentNodesUsingBlock:(/*^block*/id)arg1 ;
@end
