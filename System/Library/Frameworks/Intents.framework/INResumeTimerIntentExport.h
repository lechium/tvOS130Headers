/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:01 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class INTimer, NSNumber;


@protocol INResumeTimerIntentExport <NSObject,JSExport>
@property (nonatomic,copy) INTimer * targetTimer; 
@property (nonatomic,copy) NSNumber * resumeMultiple; 
@required
-(id)init;
-(INTimer *)targetTimer;
-(void)setTargetTimer:(id)arg1;
-(NSNumber *)resumeMultiple;
-(void)setResumeMultiple:(id)arg1;

@end
