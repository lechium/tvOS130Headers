/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:40 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFAction.h>
#import <ActionKit/CLAPIEngineDelegate.h>

@class CLAPIEngine, NSString;

@interface WFCloudAppUploadAction : WFAction <CLAPIEngineDelegate> {

	CLAPIEngine* _engine;

}

@property (nonatomic,retain) CLAPIEngine * engine;                  //@synthesize engine=_engine - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cancel;
-(CLAPIEngine *)engine;
-(void)setEngine:(CLAPIEngine *)arg1 ;
-(void)runAsynchronouslyWithInput:(id)arg1 ;
-(BOOL)shouldBeSuggestedAfterAction:(id)arg1 inWorkflow:(id)arg2 ;
-(void)finishRunningWithError:(id)arg1 ;
-(void)requestDidFailWithError:(id)arg1 connectionIdentifier:(id)arg2 userInfo:(id)arg3 ;
-(void)fileUploadDidProgress:(double)arg1 connectionIdentifier:(id)arg2 userInfo:(id)arg3 ;
-(void)fileUploadDidSucceedWithResultingItem:(id)arg1 connectionIdentifier:(id)arg2 userInfo:(id)arg3 ;
-(void)linkBookmarkDidSucceedWithResultingItem:(id)arg1 connectionIdentifier:(id)arg2 userInfo:(id)arg3 ;
@end
