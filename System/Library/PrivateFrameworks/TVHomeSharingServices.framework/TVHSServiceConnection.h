/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:21 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/TVHomeSharingServices.framework/TVHomeSharingServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVHomeSharingServices/TVHSServiceClientProtocol.h>

@protocol TVHSServiceConnectionDelegate;
@class NSXPCConnection, NSString;

@interface TVHSServiceConnection : NSObject <TVHSServiceClientProtocol> {

	id<TVHSServiceConnectionDelegate> _delegate;
	NSXPCConnection* _connection;

}

@property (nonatomic,readonly) NSXPCConnection * connection;                                 //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic,__weak) id<TVHSServiceConnectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<TVHSServiceConnectionDelegate>)delegate;
-(void)setDelegate:(id<TVHSServiceConnectionDelegate>)arg1 ;
-(NSXPCConnection *)connection;
-(void)cancelRequestWithIdentifier:(id)arg1 ;
-(void)_handleConnectionInvalidation;
-(void)_handleConnectionInterruption;
-(void)restartMediaServerDiscoveryWithOptions:(id)arg1 ;
-(void)mediaServerDiscoveryConfigurationWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setMediaServerDiscoveryConfigurationWithMode:(unsigned long long)arg1 homeSharingAccountName:(id)arg2 homeSharingPassword:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)startConnectingToMediaServerWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)disconnectFromMediaServerWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)submitRequest:(id)arg1 toMediaServerWithIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)URLsForRequests:(id)arg1 toMediaServerWithIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)playbackURLForMediaServerWithIdentifier:(id)arg1 itemIdentifier:(id)arg2 protocol:(unsigned long long)arg3 itemFormat:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)playbackDidTimeoutFromMediaServerWithIdentifier:(id)arg1 ;
-(void)synchronizeKeybagForMediaServerWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)checkoutRentalItem:(id)arg1 mediaServerIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)checkinRentalItem:(id)arg1 mediaServerIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)mediaServersWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)mediaServerWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_serviceProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(void)mediaServerDiscoveryConfigurationDidChange;
-(void)mediaServersDidChange;
-(void)mediaServerWithIdentifierDidChange:(id)arg1 ;
@end
