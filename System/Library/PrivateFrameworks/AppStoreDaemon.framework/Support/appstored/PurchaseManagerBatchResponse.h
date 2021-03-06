/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:52 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Support/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet, NSArray, NSMutableArray;

@interface PurchaseManagerBatchResponse : NSObject {

	NSMutableSet* _incompletePurchaseIDs;
	/*^block*/id _purchaseCompletionBlock;
	NSArray* _purchases;
	NSMutableArray* _responses;

}
-(BOOL)isComplete;
-(id)initWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)addCompletedPurchaseResponse:(id)arg1 ;
-(void)addPendingPurchase:(id)arg1 ;
-(void)notifyCompletedWithError:(id)arg1 ;
-(BOOL)isPendingPurchase:(id)arg1 ;
-(id)purchaseForPurchaseID:(id)arg1 ;
@end

