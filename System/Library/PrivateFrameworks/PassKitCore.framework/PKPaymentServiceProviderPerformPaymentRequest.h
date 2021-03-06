/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:02 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class PKSecureElementCertificateSet, PKPaymentPass, PKServiceProviderOrder, NSData;

@interface PKPaymentServiceProviderPerformPaymentRequest : PKPaymentWebServiceRequest {

	PKSecureElementCertificateSet* _certificates;
	PKPaymentPass* _pass;
	PKServiceProviderOrder* _serviceProviderOrder;
	NSData* _nonce;

}

@property (nonatomic,retain) PKPaymentPass * pass;                                       //@synthesize pass=_pass - In the implementation block
@property (nonatomic,retain) PKServiceProviderOrder * serviceProviderOrder;              //@synthesize serviceProviderOrder=_serviceProviderOrder - In the implementation block
@property (nonatomic,copy) NSData * nonce;                                               //@synthesize nonce=_nonce - In the implementation block
-(NSData *)nonce;
-(void)setNonce:(NSData *)arg1 ;
-(PKPaymentPass *)pass;
-(void)setPass:(PKPaymentPass *)arg1 ;
-(PKServiceProviderOrder *)serviceProviderOrder;
-(void)setServiceProviderOrder:(PKServiceProviderOrder *)arg1 ;
-(void)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3 webService:(id)arg4 completion:(/*^block*/id)arg5 ;
@end

