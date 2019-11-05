/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:57 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/OSLogCoding.h>
#import <GeoServices/NSFastEnumeration.h>
#import <GeoServices/NSCopying.h>

@class GEOTileKeyMap;

@interface GEOTileKeyList : NSObject <OSLogCoding, NSFastEnumeration, NSCopying> {

	void* _head;
	void* _tail;
	GEOTileKeyMap* _map;
	unsigned long long _count;
	unsigned long long _maxCount;
	unsigned long long _mutationsCount;

}
+(id)formatOSLogData:(id)arg1 ;
+(id)listFromXPCData:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(void)encodeWithOSLogCoder:(id)arg1 options:(unsigned long long)arg2 maxLength:(unsigned long long)arg3 ;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(unsigned long long)count;
-(GEOTileKey*)keyAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_GE36*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(BOOL)containsKey:(const GEOTileKey*)arg1 ;
-(unsigned long long)capacity;
-(GEOTileKey*)firstKey;
-(void)addKey:(const GEOTileKey*)arg1 ;
-(id)initWithMaxCapacity:(unsigned long long)arg1 ;
-(void)_addKeyToBack:(const GEOTileKey*)arg1 ;
-(BOOL)addKey:(const GEOTileKey*)arg1 lostKey:(GEOTileKey*)arg2 ;
-(BOOL)intersectsList:(id)arg1 ;
-(id)copyWithMaxCapacity:(unsigned long long)arg1 ;
-(id)listWithout:(id)arg1 ;
-(id)sublistWithRange:(NSRange)arg1 ;
-(void)sort:(/*^block*/id)arg1 ;
-(void)removeKeysMatchingPredicate:(/*^block*/id)arg1 ;
-(BOOL)removeKey:(const GEOTileKey*)arg1 ;
-(id)newXPCData;
@end
