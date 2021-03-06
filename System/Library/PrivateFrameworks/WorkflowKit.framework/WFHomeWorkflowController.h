/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:12 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFOutOfProcessWorkflowControllerDelegate.h>

@class WFOutOfProcessWorkflowController, WFHomeWorkflow, NSString;

@interface WFHomeWorkflowController : NSObject <WFOutOfProcessWorkflowControllerDelegate> {

	WFOutOfProcessWorkflowController* _workflowController;
	WFHomeWorkflow* _workflow;
	/*^block*/id _completionHandler;

}

@property (nonatomic,readonly) WFOutOfProcessWorkflowController * workflowController;              //@synthesize workflowController=_workflowController - In the implementation block
@property (nonatomic,copy) id completionHandler;                                                   //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,readonly) WFHomeWorkflow * workflow;                                          //@synthesize workflow=_workflow - In the implementation block
@property (getter=isRunning,nonatomic,readonly) BOOL running; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)cancel;
-(BOOL)isRunning;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(WFHomeWorkflow *)workflow;
-(id)initWithWorkflow:(id)arg1 ;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 ;
-(WFOutOfProcessWorkflowController *)workflowController;
-(void)outOfProcessWorkflowController:(id)arg1 didFinishWithError:(id)arg2 cancelled:(BOOL)arg3 ;
@end

