/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:12 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFOutOfProcessWorkflowControllerHost.h>

@protocol WFOutOfProcessWorkflowControllerDelegate, OS_dispatch_queue, OS_dispatch_source;
@class WFContentCollection, NSString, NSData, WFWorkflowReference, NSExtension, NSUUID, NSObject;

@interface WFOutOfProcessWorkflowController : NSObject <WFOutOfProcessWorkflowControllerHost> {

	WFContentCollection* _input;
	WFContentCollection* _output;
	id<WFOutOfProcessWorkflowControllerDelegate> _delegate;
	NSString* _debugIdentifier;
	NSData* _workflowData;
	long long _environment;
	double _timeoutSeconds;
	WFWorkflowReference* _workflowReference;
	NSExtension* _extension;
	NSUUID* _extensionRequestIdentifier;
	NSObject*<OS_dispatch_queue> _internalSerialQueue;
	NSObject*<OS_dispatch_source> _extensionMaxRunTimeTimer;
	long long _state;

}

@property (nonatomic,readonly) NSData * workflowData;                                                   //@synthesize workflowData=_workflowData - In the implementation block
@property (nonatomic,readonly) long long environment;                                                   //@synthesize environment=_environment - In the implementation block
@property (nonatomic,readonly) double timeoutSeconds;                                                   //@synthesize timeoutSeconds=_timeoutSeconds - In the implementation block
@property (nonatomic,readonly) WFWorkflowReference * workflowReference;                                 //@synthesize workflowReference=_workflowReference - In the implementation block
@property (nonatomic,retain) NSExtension * extension;                                                   //@synthesize extension=_extension - In the implementation block
@property (nonatomic,retain) NSUUID * extensionRequestIdentifier;                                       //@synthesize extensionRequestIdentifier=_extensionRequestIdentifier - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> internalSerialQueue;                        //@synthesize internalSerialQueue=_internalSerialQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> extensionMaxRunTimeTimer;                    //@synthesize extensionMaxRunTimeTimer=_extensionMaxRunTimeTimer - In the implementation block
@property (assign,nonatomic) long long state;                                                           //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) WFContentCollection * input;                                               //@synthesize input=_input - In the implementation block
@property (nonatomic,readonly) WFContentCollection * output;                                            //@synthesize output=_output - In the implementation block
@property (assign,nonatomic,__weak) id<WFOutOfProcessWorkflowControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * debugIdentifier;                                              //@synthesize debugIdentifier=_debugIdentifier - In the implementation block
@property (getter=isRunning,nonatomic,readonly) BOOL running; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<WFOutOfProcessWorkflowControllerDelegate>)delegate;
-(void)setDelegate:(id<WFOutOfProcessWorkflowControllerDelegate>)arg1 ;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(void)stop;
-(long long)environment;
-(BOOL)isRunning;
-(WFContentCollection *)input;
-(double)timeoutSeconds;
-(void)setInput:(WFContentCollection *)arg1 ;
-(NSExtension *)extension;
-(WFContentCollection *)output;
-(id)extensionContext;
-(NSObject*<OS_dispatch_queue>)internalSerialQueue;
-(void)setExtension:(NSExtension *)arg1 ;
-(NSString *)debugIdentifier;
-(void)setExtensionRequestIdentifier:(NSUUID *)arg1 ;
-(NSUUID *)extensionRequestIdentifier;
-(id)extensionInterface;
-(BOOL)runWithInput:(id)arg1 error:(out id*)arg2 ;
-(void)handleXPCConnectionInterruption;
-(id)initWithWorkflow:(id)arg1 database:(id)arg2 environment:(long long)arg3 ;
-(void)workflowDidStart;
-(void)workflowDidFinishRunningWithError:(id)arg1 cancelled:(BOOL)arg2 ;
-(id)initWithWorkflowData:(id)arg1 debugIdentifier:(id)arg2 environment:(long long)arg3 ;
-(id)initWithWorkflowData:(id)arg1 debugIdentifier:(id)arg2 environment:(long long)arg3 workflowReference:(id)arg4 ;
-(void)handleExtensionMaxRunTimeExceeded;
-(void)stopExtension;
-(void)cancelTimeoutTimer;
-(void)restartTimeoutTimer;
-(void)reportFinishToDelegateWithError:(id)arg1 cancelled:(BOOL)arg2 ;
-(NSData *)workflowData;
-(WFWorkflowReference *)workflowReference;
-(NSObject*<OS_dispatch_source>)extensionMaxRunTimeTimer;
-(void)setExtensionMaxRunTimeTimer:(NSObject*<OS_dispatch_source>)arg1 ;
@end

