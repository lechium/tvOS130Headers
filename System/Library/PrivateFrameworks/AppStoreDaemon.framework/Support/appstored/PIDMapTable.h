/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:51 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Support/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMapTable;

@interface PIDMapTable : NSObject {

	NSMapTable* _map;

}
+(id)strongObjectsMapTable;
+(id)weakObjectsMapTable;
-(id)description;
-(id)objectEnumerator;
-(id)objectAtIndexedSubscript:(long long)arg1 ;
-(void)setObject:(id)arg1 atIndexedSubscript:(long long)arg2 ;
-(id)allObjects;
-(id)objectForPID:(long long)arg1 ;
-(void)setObject:(id)arg1 forPID:(long long)arg2 ;
-(void)removeObjectForPID:(long long)arg1 ;
-(id)_initWithMapTable:(id)arg1 ;
@end

