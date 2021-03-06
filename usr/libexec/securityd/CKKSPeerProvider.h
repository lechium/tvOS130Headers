/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:50 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/securityd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol CKKSPeerProvider <NSObject>
@property (readonly) NSString * providerID; 
@property (assign) BOOL essential; 
@required
-(id)fetchSelfPeers:(id*)arg1;
-(id)fetchTrustedPeers:(id*)arg1;
-(void)registerForPeerChangeUpdates:(id)arg1;
-(void)sendSelfPeerChangedUpdate;
-(void)sendTrustedPeerSetChangedUpdate;
-(BOOL)essential;
-(void)setEssential:(BOOL)arg1;
-(NSString *)providerID;

@end

