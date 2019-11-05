/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:32 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitBackingStore/HomeKitBackingStore-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <HomeKitBackingStore/HMBModelObjectCoder.h>
#import <HomeKitBackingStore/NSCopying.h>

@class NSString;

@interface HMBCloudZoneRebuilderStatus : HMFObject <HMBModelObjectCoder, NSCopying> {

	long long _keyStatus;
	NSString* _message;
	unsigned long long _rebuildState;

}

@property (nonatomic,readonly) NSString * message;                           //@synthesize message=_message - In the implementation block
@property (nonatomic,readonly) unsigned long long rebuildState;              //@synthesize rebuildState=_rebuildState - In the implementation block
@property (nonatomic,readonly) long long keyStatus;                          //@synthesize keyStatus=_keyStatus - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)rebuilderStateString:(unsigned long long)arg1 ;
+(id)keyStatusString:(long long)arg1 ;
+(id)hmbDecodeData:(id)arg1 fromStorageLocation:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)message;
-(id)attributeDescriptions;
-(long long)keyStatus;
-(id)initWithState:(unsigned long long)arg1 message:(id)arg2 ;
-(unsigned long long)rebuildState;
-(id)hmbEncodeForStorageLocation:(unsigned long long)arg1 error:(id*)arg2 ;
@end
