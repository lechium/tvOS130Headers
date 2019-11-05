/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:09 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ROCKit.framework/ROCKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ROCKit/ROCKit-Structs.h>
#import <CoreFoundation/NSBlock.h>
#import <ROCKit/ROCKRemoteInvocationInterface.h>
#import <ROCKit/ROCKImpersonatable.h>

@class ROCKRemoteBlockProxy, NSString;

@interface ROCKBlockProxy : NSBlock <ROCKRemoteInvocationInterface, ROCKImpersonatable> {

	SCD_Struct_RO3* _blockLayout;
	ROCKRemoteBlockProxy* _remoteBlockProxy;

}

@property (nonatomic,retain) ROCKRemoteBlockProxy * remoteBlockProxy;              //@synthesize remoteBlockProxy=_remoteBlockProxy - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)blockProxyWithRemoteBlockProxy:(id)arg1 ;
-(NSString *)debugDescription;
-(NSString *)description;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(void)_forwardStackInvocation:(id)arg1 ;
-(void)remoteInvocation:(id)arg1 sessionManager:(id)arg2 invocationHandler:(/*^block*/id)arg3 ;
-(ROCKRemoteBlockProxy *)remoteBlockProxy;
-(void)setRemoteBlockProxy:(ROCKRemoteBlockProxy *)arg1 ;
@end
