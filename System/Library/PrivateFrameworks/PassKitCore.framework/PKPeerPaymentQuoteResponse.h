/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:04 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPeerPaymentWebServiceResponse.h>

@class PKPeerPaymentQuote;

@interface PKPeerPaymentQuoteResponse : PKPeerPaymentWebServiceResponse {

	PKPeerPaymentQuote* _quote;

}

@property (nonatomic,readonly) PKPeerPaymentQuote * quote;              //@synthesize quote=_quote - In the implementation block
-(id)initWithData:(id)arg1 ;
-(PKPeerPaymentQuote *)quote;
@end

