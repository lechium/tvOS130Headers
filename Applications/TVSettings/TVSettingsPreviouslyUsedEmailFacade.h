/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:59:24 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/TVSettings.app/TVSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface TVSettingsPreviouslyUsedEmailFacade : NSObject {

	NSArray* _previouslyUsedEmails;

}

@property (nonatomic,copy) NSArray * previouslyUsedEmails;              //@synthesize previouslyUsedEmails=_previouslyUsedEmails - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)update;
-(NSArray *)previouslyUsedEmails;
-(void)deleteEntry:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)clearAllEntriesWithCompletion:(/*^block*/id)arg1 ;
-(void)setPreviouslyUsedEmails:(NSArray *)arg1 ;
@end
