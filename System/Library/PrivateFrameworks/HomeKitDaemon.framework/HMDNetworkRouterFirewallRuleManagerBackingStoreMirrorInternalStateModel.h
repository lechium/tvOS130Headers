/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:45 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitBackingStore/HMBModel.h>
#import <HomeKitDaemon/HMFLogging.h>

@class NSSet, NSData, NSString;

@interface HMDNetworkRouterFirewallRuleManagerBackingStoreMirrorInternalStateModel : HMBModel <HMFLogging> {

	NSSet* _lastSynchronizedRecordIDs;

}

@property (nonatomic,retain) NSData * archivedLastSynchronizedRecordIDs; 
@property (nonatomic,retain) NSSet * lastSynchronizedRecordIDs;                       //@synthesize lastSynchronizedRecordIDs=_lastSynchronizedRecordIDs - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)modelID;
+(id)logCategory;
+(id)hmbProperties;
+(id)parentModelID;
-(id)init;
-(NSSet *)lastSynchronizedRecordIDs;
-(void)setLastSynchronizedRecordIDs:(NSSet *)arg1 ;
@end

