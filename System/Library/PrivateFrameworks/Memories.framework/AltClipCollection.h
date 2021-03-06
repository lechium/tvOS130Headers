/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:33 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Memories/Memories-Structs.h>
#import <Memories/NSFastEnumeration.h>
#import <Memories/NSCopying.h>

@protocol AltAspect;
@class NSMutableDictionary, NSArray;

@interface AltClipCollection : NSObject <NSFastEnumeration, NSCopying> {

	NSMutableDictionary* _clips;
	id<AltAspect> _parentClip;

}

@property (nonatomic,retain) NSMutableDictionary * clips;                  //@synthesize clips=_clips - In the implementation block
@property (assign,nonatomic,__weak) id<AltAspect> parentClip;              //@synthesize parentClip=_parentClip - In the implementation block
@property (readonly) NSArray * allKeys; 
@property (readonly) NSArray * allValues; 
@property (readonly) unsigned long long count; 
+(id)recommendedAspects;
+(id)recommendedAdditionalAspects;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(unsigned long long)count;
-(NSArray *)allKeys;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_Sp25*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)initWithParent:(id)arg1 ;
-(NSArray *)allValues;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(void)setClips:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)clips;
-(void)setParentClip:(id<AltAspect>)arg1 ;
-(id<AltAspect>)parentClip;
-(id)objectClosestToKeyedSubscript:(id)arg1 ;
@end

