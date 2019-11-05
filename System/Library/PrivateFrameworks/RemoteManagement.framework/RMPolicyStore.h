/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:15 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <RemoteManagement/RemoteManagement-Structs.h>
@class NSLock;

@interface RMPolicyStore : NSObject {

	NSLock* _policyChangeLock;

}
-(id)init;
-(NSDictionary*)currentPolicyByKey;
-(void)_setCurrentPolicyByKey:(NSDictionary*)arg1 ;
-(void)addOrUpdatePolicy:(id)arg1 ;
-(void)removePolicyWithKey:(id)arg1 ;
-(id)policyWithKey:(id)arg1 ;
@end
