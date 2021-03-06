/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:55 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IDSAPNSAckTrackerDelegate;
@class NSString;

@interface IDSAPNSAckTracker : NSObject {

	NSString* _guid;
	id<IDSAPNSAckTrackerDelegate> _delegate;

}

@property (nonatomic,retain) id<IDSAPNSAckTrackerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<IDSAPNSAckTrackerDelegate>)delegate;
-(void)setDelegate:(id<IDSAPNSAckTrackerDelegate>)arg1 ;
-(id)initWithGUID:(id)arg1 ;
-(void)trackMessages:(id)arg1 ;
-(void)addBlockToAggregateMessage:(id)arg1 ;
-(void)addBlockToAggregatableMessage:(id)arg1 trackingSet:(id)arg2 ;
@end

