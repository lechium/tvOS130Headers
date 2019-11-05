/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:06 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/IMTransferAgent.framework/IMTransferAgent
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FTMessageDelivery;

@interface IMTransferAgentDeliveryController : NSObject {

	FTMessageDelivery* _messageDelivery;

}

@property (nonatomic,retain) FTMessageDelivery * messageDelivery;              //@synthesize messageDelivery=_messageDelivery - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)sendFTMessage:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)setMessageDelivery:(FTMessageDelivery *)arg1 ;
-(FTMessageDelivery *)messageDelivery;
@end
