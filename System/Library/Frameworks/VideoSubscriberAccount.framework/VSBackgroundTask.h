/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:51:00 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VSBackgroundTaskDelegate;
@class NSString, BKSProcessAssertion;

@interface VSBackgroundTask : NSObject {

	NSString* _name;
	id<VSBackgroundTaskDelegate> _delegate;
	BKSProcessAssertion* _assertion;

}

@property (nonatomic,retain) BKSProcessAssertion * assertion;                           //@synthesize assertion=_assertion - In the implementation block
@property (nonatomic,copy) NSString * name;                                             //@synthesize name=_name - In the implementation block
@property (assign,nonatomic,__weak) id<VSBackgroundTaskDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(NSString *)name;
-(id)init;
-(id<VSBackgroundTaskDelegate>)delegate;
-(void)setDelegate:(id<VSBackgroundTaskDelegate>)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)end;
-(BOOL)begin;
-(BKSProcessAssertion *)assertion;
-(void)setAssertion:(BKSProcessAssertion *)arg1 ;
@end

