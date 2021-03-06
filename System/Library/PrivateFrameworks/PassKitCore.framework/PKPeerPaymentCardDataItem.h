/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:59 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentDataItem.h>

@class PKPaymentPass, PKPeerPaymentQuote;

@interface PKPeerPaymentCardDataItem : PKPaymentDataItem {

	PKPaymentPass* _pass;

}

@property (nonatomic,readonly) PKPaymentPass * pass; 
@property (nonatomic,readonly) PKPeerPaymentQuote * quote; 
+(long long)dataType;
-(PKPaymentPass *)pass;
-(PKPeerPaymentQuote *)quote;
-(BOOL)isValidWithError:(id*)arg1 ;
@end

