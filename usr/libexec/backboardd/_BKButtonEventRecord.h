/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:32 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/backboardd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BKHIDEventSenderInfo, BKHIDEventDispatcher;
@class NSSet;

@interface _BKButtonEventRecord : NSObject {

	BOOL _didReceiveBeganPhase;
	BOOL _didReceiveEndedPhase;
	BOOL _didReceiveUpEvent;
	id<BKHIDEventSenderInfo> _senderInfo;
	id<BKHIDEventDispatcher> _eventDispatcher;
	NSSet* _destinations;
	double _firstDownTime;

}

@property (nonatomic,retain) id<BKHIDEventSenderInfo> senderInfo;                   //@synthesize senderInfo=_senderInfo - In the implementation block
@property (nonatomic,retain) id<BKHIDEventDispatcher> eventDispatcher;              //@synthesize eventDispatcher=_eventDispatcher - In the implementation block
@property (nonatomic,retain) NSSet * destinations;                                  //@synthesize destinations=_destinations - In the implementation block
@property (assign,nonatomic) double firstDownTime;                                  //@synthesize firstDownTime=_firstDownTime - In the implementation block
@property (assign,nonatomic) BOOL didReceiveBeganPhase;                             //@synthesize didReceiveBeganPhase=_didReceiveBeganPhase - In the implementation block
@property (assign,nonatomic) BOOL didReceiveEndedPhase;                             //@synthesize didReceiveEndedPhase=_didReceiveEndedPhase - In the implementation block
@property (assign,nonatomic) BOOL didReceiveUpEvent;                                //@synthesize didReceiveUpEvent=_didReceiveUpEvent - In the implementation block
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)conciseDescription;
-(NSSet *)destinations;
-(void)setDestinations:(NSSet *)arg1 ;
-(id<BKHIDEventSenderInfo>)senderInfo;
-(void)setSenderInfo:(id<BKHIDEventSenderInfo>)arg1 ;
-(id<BKHIDEventDispatcher>)eventDispatcher;
-(void)setEventDispatcher:(id<BKHIDEventDispatcher>)arg1 ;
-(void)applyEventPhase:(unsigned short)arg1 down:(BOOL)arg2 ;
-(double)firstDownTime;
-(void)setFirstDownTime:(double)arg1 ;
-(BOOL)didReceiveBeganPhase;
-(void)setDidReceiveBeganPhase:(BOOL)arg1 ;
-(BOOL)didReceiveEndedPhase;
-(void)setDidReceiveEndedPhase:(BOOL)arg1 ;
-(BOOL)didReceiveUpEvent;
-(void)setDidReceiveUpEvent:(BOOL)arg1 ;
@end

