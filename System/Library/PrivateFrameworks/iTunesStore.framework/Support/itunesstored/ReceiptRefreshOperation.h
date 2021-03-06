/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:20 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@protocol SKPaymentQueueClient;
@class SSPurchaseReceipt, NSString;

@interface ReceiptRefreshOperation : ISOperation {

	id<SKPaymentQueueClient> _client;
	SSPurchaseReceipt* _existingReceipt;
	unsigned long long _flags;
	NSString* _requestingClientIdentifier;
	/*^block*/id _resultBlock;

}

@property (copy) id resultBlock; 
-(void)run;
-(void)setResultBlock:(id)arg1 ;
-(id)resultBlock;
-(BOOL)_isSandboxed;
-(id)_postBodyData;
-(id)initWithClient:(id)arg1 requestingClientIdentifier:(id)arg2 receiptFlags:(unsigned long long)arg3 ;
@end

