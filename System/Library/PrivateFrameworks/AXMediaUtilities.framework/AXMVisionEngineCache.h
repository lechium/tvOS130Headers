/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:24 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableOrderedSet, NSMutableDictionary;

@interface AXMVisionEngineCache : NSObject {

	NSObject*<OS_dispatch_queue> _cacheQueue;
	long long _cacheQueue_maxItems;
	NSMutableOrderedSet* _cacheQueue_orderedKeys;
	NSMutableDictionary* _cacheQueue_results;

}

@property (nonatomic,readonly) long long cacheSize; 
-(id)debugDescription;
-(id)description;
-(long long)cacheSize;
-(id)initWithCacheSize:(long long)arg1 ;
-(void)setResult:(id)arg1 forKey:(id)arg2 ;
-(long long)_cacheQueue_cacheSize;
-(id)_cacheQueue_resultForKey:(id)arg1 ;
-(void)_cacheQueue_setResult:(id)arg1 forKey:(id)arg2 ;
-(id)resultForKey:(id)arg1 ;
-(void)purgeCache;
@end
