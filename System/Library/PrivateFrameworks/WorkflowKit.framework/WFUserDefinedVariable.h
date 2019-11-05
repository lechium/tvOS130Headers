/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:12 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFVariable.h>

@protocol WFVariableProvider;
@class NSString;

@interface WFUserDefinedVariable : WFVariable {

	id<WFVariableProvider> _variableProvider;

}

@property (nonatomic,readonly) NSString * name; 
-(NSString *)name;
-(id)UUID;
-(BOOL)isAvailable;
-(id)initWithName:(id)arg1 variableProvider:(id)arg2 aggrandizements:(id)arg3 ;
-(id)initWithDictionary:(id)arg1 variableProvider:(id)arg2 ;
-(void)retrieveContentCollectionWithVariableSource:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)possibleContentClassesWithContext:(id)arg1 ;
-(id)variableProvider;
-(BOOL)requiresModernVariableSupport;
-(void)variableProvider:(id)arg1 variableNameDidChangeTo:(id)arg2 ;
@end
