/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:38 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDRemoteMessagePolicy.h>

@interface HMDMutableRemoteMessagePolicy : HMDRemoteMessagePolicy

@property (assign) BOOL requiresSecureMessage; 
@property (assign) BOOL allowsAnonymousMessage; 
@property (assign) BOOL requiresAccountMessage; 
@property (assign) unsigned long long transportRestriction; 
@property (assign) unsigned long long roles; 
-(void)setRoles:(unsigned long long)arg1 ;
-(void)setRequiresSecureMessage:(BOOL)arg1 ;
-(void)setRequiresAccountMessage:(BOOL)arg1 ;
-(void)setTransportRestriction:(unsigned long long)arg1 ;
-(void)setAllowsAnonymousMessage:(BOOL)arg1 ;
@end

