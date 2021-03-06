/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:19 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RunningBoard/RunningBoard-Structs.h>
#import <RunningBoard/NSCopying.h>

@class NSMutableDictionary;

@interface RBProcessMap : NSObject <NSCopying> {

	os_unfair_lock_s _lock;
	NSMutableDictionary* _stateMap;

}
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(unsigned long long)count;
-(void)removeAllObjects;
-(id)dictionary;
-(void)enumerateWithBlock:(/*^block*/id)arg1 ;
-(id)stateForIdentity:(id)arg1 ;
-(id)removeStateForIdentity:(id)arg1 ;
-(void)removeIdentity:(id)arg1 ;
-(id)setState:(id)arg1 forIdentity:(id)arg2 ;
-(id)removeStateForIdentity:(id)arg1 withPredicate:(/*^block*/id)arg2 ;
-(BOOL)containsIdentity:(id)arg1 ;
-(id)allState;
-(void)addIdentity:(id)arg1 ;
-(id)allIdentities;
@end

