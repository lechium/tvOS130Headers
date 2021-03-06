/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:11 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFAction.h>

@interface WFControlFlowAction : WFAction {

	long long _mode;

}

@property (nonatomic,readonly) long long mode;              //@synthesize mode=_mode - In the implementation block
-(long long)mode;
-(id)icon;
-(id)shortName;
-(BOOL)hasChildren;
-(id)iconName;
-(BOOL)isDeletable;
-(id)serializedParameters;
-(id)inheritedOutputContentClassesInWorkflow:(id)arg1 context:(id)arg2 ;
-(id)outputContentClasses;
-(BOOL)inputPassthrough;
-(void)resetEvaluationCriteriaWithVariableSource:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 definition:(id)arg2 serializedParameters:(id)arg3 ;
-(void)generateGroupingIdentifierIfNecessary;
-(id)createAccompanyingActionWithMode:(long long)arg1 ;
-(BOOL)snappingPassthrough;
-(BOOL)inputTypePassthrough;
-(id)outputIcon;
-(id)groupedOpenAction;
-(id)groupedCloseAction;
-(id)groupedIntermediaryActions;
@end

