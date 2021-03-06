/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:46 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Security.framework/CloudKeychainProxy.bundle/CloudKeychainProxy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CKDStore <NSObject>
@required
-(void)removeAllObjects;
-(id)objectForKey:(id)arg1;
-(void)removeObjectForKey:(id)arg1;
-(void)setObject:(id)arg1 forKey:(id)arg2;
-(void)addEntriesFromDictionary:(id)arg1;
-(void)connectToProxy:(id)arg1;
-(id)copyAsDictionary;
-(void)perfCounters:(/*^block*/id)arg1;
-(void)pushWrites;
-(BOOL)pullUpdates:(id*)arg1;
-(void)addOneToOutGoing;

@end

