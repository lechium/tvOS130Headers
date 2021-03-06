/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:57 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BSBlockTransaction.h>

@interface TVSBlockTransaction : BSBlockTransaction {

	/*^block*/id _failsForChildTransactionBlock;

}

@property (nonatomic,copy) id failsForChildTransactionBlock;              //@synthesize failsForChildTransactionBlock=_failsForChildTransactionBlock - In the implementation block
-(BOOL)_shouldFailForChildTransaction:(id)arg1 ;
-(id)initWithBlock:(/*^block*/id)arg1 failsForChildTransaction:(/*^block*/id)arg2 ;
-(id)failsForChildTransactionBlock;
-(void)setFailsForChildTransactionBlock:(id)arg1 ;
@end

