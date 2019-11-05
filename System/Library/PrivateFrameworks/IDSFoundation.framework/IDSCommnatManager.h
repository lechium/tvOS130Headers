/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:58 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <IDSFoundation/IDSFoundation-Structs.h>
@class NSString, NSMutableDictionary;

@interface IDSCommnatManager : NSObject {

	NSString* _cbuuid;
	NSString* _deviceUniqueID;
	/*^block*/id _completionBlock;
	/*^block*/id _linkBlock;
	sockaddr_storage _commnatServer;
	NSMutableDictionary* _nonceToRequest;
	NSMutableDictionary* _nonceToCandidates;

}
-(void)dealloc;
-(void)invalidate;
-(void)_getCommNATServerAddress;
-(void)sendCommnatRequest:(id)arg1 candidate:(id)arg2 ;
-(BOOL)isCommnatDiscoveryDone;
-(id)initWithDeviceUniqueID:(id)arg1 cbuuid:(id)arg2 linkBlock:(/*^block*/id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)startCommnatDiscoveryForHostCandidates:(id)arg1 ;
-(void)processCommnatResponse:(SCD_Struct_ID19*)arg1 arrivalTime:(double)arg2 ;
@end
