/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:54:30 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/PineBoard.app/PineBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDate;


@protocol UISApplicationStateServiceDataSource <NSObject>
@property (assign,nonatomic) BOOL usesBackgroundNetwork; 
@property (nonatomic,copy) id badgeValue; 
@property (nonatomic,retain) NSDate * nextWakeDate; 
@optional
-(id)badgeValue;
-(void)setBadgeValue:(id)arg1;
-(void)setUsesBackgroundNetwork:(BOOL)arg1;
-(BOOL)usesBackgroundNetwork;
-(NSDate *)nextWakeDate;
-(void)setNextWakeDate:(id)arg1;

@end

