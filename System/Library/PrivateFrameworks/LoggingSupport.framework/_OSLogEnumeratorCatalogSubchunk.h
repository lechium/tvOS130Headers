/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:16 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LoggingSupport/LoggingSupport-Structs.h>
#import <LoggingSupport/_OSLogIndexTimeRangable.h>

@class NSMutableDictionary, _OSLogEnumeratorCatalog, NSString;

@interface _OSLogEnumeratorCatalogSubchunk : NSObject <_OSLogIndexTimeRangable> {

	NSMutableDictionary* _decompressedChunks;
	catalog_subchunk_s* _subchunk;
	NSRange _range;
	_OSLogEnumeratorCatalog* _catalog;
	unsigned long long _ot;
	unsigned long long _et;

}

@property (nonatomic,readonly) _OSLogEnumeratorCatalog * catalog;              //@synthesize catalog=_catalog - In the implementation block
@property (nonatomic,readonly) unsigned long long oldestTime;                  //@synthesize ot=_ot - In the implementation block
@property (nonatomic,readonly) unsigned long long endTime;                     //@synthesize et=_et - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)endTime;
-(_OSLogEnumeratorCatalog *)catalog;
-(void)enumerateChunksUsingBlock:(/*^block*/id)arg1 ;
-(unsigned long long)oldestTime;
-(id)initWithCatalog:(id)arg1 subchunk:(catalog_subchunk_s*)arg2 range:(NSRange)arg3 ;
-(id)initWithCatalog:(id)arg1 subchunk:(catalog_subchunk_s*)arg2 range:(NSRange)arg3 oldestTime:(unsigned long long)arg4 endTime:(unsigned long long)arg5 ;
-(long long)oldestTimeCompare:(id)arg1 ;
-(long long)endTimeCompare:(id)arg1 ;
-(id)_decompressedBufferForChunk:(tracev3_chunk_s*)arg1 subchunk:(catalog_subchunk_s*)arg2 ;
@end
