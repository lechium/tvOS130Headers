/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:50 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Support/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSMutableDictionary;

@interface AccountEventCoordinator : NSObject {

	NSArray* _events;
	NSMutableDictionary* _accountsForWeekCache;

}
+(id)nextPayoutWeekStartDateForDate:(id)arg1 ;
+(id)nextPayoutWeekEndDateForDate:(id)arg1 ;
-(id)description;
-(id)init;
-(id)diagnosticDescription;
-(id)activeAccountsInWeekWithDate:(id)arg1 ;
-(void)_loadEvents;
@end
