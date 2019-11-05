/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:10 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFVariableSubstitutableParameterState.h>

@interface WFMultipleValueParameterState : WFVariableSubstitutableParameterState
+(Class)processingValueClass;
+(id)serializedRepresentationFromValue:(id)arg1 ;
+(id)valueFromSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3 ;
-(void)processWithVariableSource:(id)arg1 parameter:(id)arg2 userInputRequiredHandler:(/*^block*/id)arg3 valueHandler:(/*^block*/id)arg4 ;
-(id)containedVariables;
-(void)finishProcessingWithContent:(id)arg1 error:(id)arg2 forParameterStateClass:(Class)arg3 valueHandler:(/*^block*/id)arg4 ;
-(id)stateByTogglingValue:(id)arg1 ;
-(id)stateByReplacingValueAtIndex:(unsigned long long)arg1 withValue:(id)arg2 ;
-(id)stateByAppendingValue:(id)arg1 ;
-(id)stateByRemovingValueAtIndex:(unsigned long long)arg1 ;
@end
