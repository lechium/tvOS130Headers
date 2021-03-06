/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:08 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PKPassbookPeerPaymentSettingsDataSource.h>
#import <PassKitUI/PKPassbookPeerPaymentSettingsDelegate.h>

@class PKPaymentWebService, PKPeerPaymentWebService, NSString;

@interface PKPassbookPeerPaymentSettingsDefaultBehavior : NSObject <PKPassbookPeerPaymentSettingsDataSource, PKPassbookPeerPaymentSettingsDelegate> {

	PKPaymentWebService* _paymentWebService;
	PKPeerPaymentWebService* _peerPaymentWebService;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)peerPaymentWebService;
-(void)peerPaymentRegistrationStatusHasChanged:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)_registerForPeerPaymentWithCompletion:(/*^block*/id)arg1 ;
-(void)_unregisterForPeerPaymentWithCompletion:(/*^block*/id)arg1 ;
@end

