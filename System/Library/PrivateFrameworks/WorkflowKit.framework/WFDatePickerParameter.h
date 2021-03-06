/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:12 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFParameter.h>

@class NSDate;

@interface WFDatePickerParameter : WFParameter {

	long long _datePickerMode;
	NSDate* _minimumDate;
	NSDate* _maximumDate;

}

@property (assign,nonatomic) long long datePickerMode;              //@synthesize datePickerMode=_datePickerMode - In the implementation block
@property (nonatomic,retain) NSDate * minimumDate;                  //@synthesize minimumDate=_minimumDate - In the implementation block
@property (nonatomic,retain) NSDate * maximumDate;                  //@synthesize maximumDate=_maximumDate - In the implementation block
-(id)initWithDefinition:(id)arg1 ;
-(void)setMaximumDate:(NSDate *)arg1 ;
-(void)setMinimumDate:(NSDate *)arg1 ;
-(void)setDatePickerMode:(long long)arg1 ;
-(long long)datePickerMode;
-(Class)singleStateClass;
-(id)defaultSupportedVariableTypes;
-(NSDate *)minimumDate;
-(NSDate *)maximumDate;
@end

