/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:31 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class BWInferenceSchedulerGraph, BWInferenceSchedulerJobList, NSMapTable;

@interface BWInferenceSchedulerFramebufferBuilder : NSObject {

	BWInferenceSchedulerGraph* _graph;
	BWInferenceSchedulerJobList* _prototypeJobList;
	unsigned long long _jobCount;
	NSMapTable* _directedEdgesByNode;
	BOOL _didVendFramebuffer;

}
+(void)initialize;
-(void)dealloc;
-(id)initWithInferenceRequirements:(id)arg1 dependencyProvider:(id)arg2 formatProvider:(id)arg3 ;
-(id)newFramebuffer;
-(void)_prepareToConnectNode:(id)arg1 ;
-(id)_connectNodesExpectingInputs:(id)arg1 toNodesProvidingOutput:(id)arg2 dependencyProvider:(id)arg3 nodeForExternalRequirement:(id)arg4 ;
-(id)_addScalingNodesForNodesExpectingInputs:(id)arg1 nodesProvidingOutput:(id)arg2 dependencyProvider:(id)arg3 nodesForExternalRequirements:(id)arg4 fencedMediaKeys:(id)arg5 ;
-(void)_populateJobList:(id)arg1 fromGraphEdges:(id)arg2 withHeadNode:(id)arg3 jobTypes:(id)arg4 ;
-(BOOL)_validToDeriveFormat:(id)arg1 fromFormat:(id)arg2 vendingProvider:(id)arg3 ;
-(id)_newScalingNodesForScalingRequirement:(id)arg1 fencedMedia:(BOOL)arg2 ;
@end
