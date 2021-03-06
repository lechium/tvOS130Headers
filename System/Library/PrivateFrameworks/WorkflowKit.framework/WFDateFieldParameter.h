/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:10 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFTextInputParameter.h>

@class NSDateFormatter, NSString;

@interface WFDateFieldParameter : WFTextInputParameter {

	NSDateFormatter* _hintDateFormatter;
	NSString* _reactiveParameterKey;
	NSString* _hintDateMode;

}

@property (nonatomic,readonly) NSDateFormatter * hintDateFormatter;              //@synthesize hintDateFormatter=_hintDateFormatter - In the implementation block
@property (nonatomic,readonly) NSString * hintDateMode;                          //@synthesize hintDateMode=_hintDateMode - In the implementation block
@property (nonatomic,readonly) NSString * reactiveParameterKey;                  //@synthesize reactiveParameterKey=_reactiveParameterKey - In the implementation block
@property (nonatomic,readonly) BOOL timeOnlyMode; 
@property (nonatomic,readonly) BOOL dateOnlyMode; 
-(id)initWithDefinition:(id)arg1 ;
-(BOOL)timeOnlyMode;
-(BOOL)dateOnlyMode;
-(NSDateFormatter *)hintDateFormatter;
-(id)hintForState:(id)arg1 ;
-(id)localizedIncompleteHintString;
-(NSString *)reactiveParameterKey;
-(NSString *)hintDateMode;
@end

