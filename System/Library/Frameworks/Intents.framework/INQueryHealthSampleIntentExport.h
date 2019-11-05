/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:56 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, HKUnit;


@protocol INQueryHealthSampleIntentExport <NSObject,JSExport>
@property (assign,nonatomic) long long objectType; 
@property (nonatomic,copy) NSArray * recordDates; 
@property (nonatomic,copy) HKUnit * unit; 
@property (assign,nonatomic) long long questionType; 
@property (nonatomic,copy) NSArray * thresholdValues; 
@property (assign,nonatomic) long long expectedResultType; 
@required
-(id)init;
-(HKUnit *)unit;
-(long long)objectType;
-(void)setObjectType:(long long)arg1;
-(long long)expectedResultType;
-(void)setExpectedResultType:(long long)arg1;
-(long long)questionType;
-(void)setQuestionType:(long long)arg1;
-(NSArray *)recordDates;
-(void)setRecordDates:(id)arg1;
-(NSArray *)thresholdValues;
-(void)setThresholdValues:(id)arg1;
-(void)setUnit:(id)arg1;

@end
