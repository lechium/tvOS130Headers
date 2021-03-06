/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:09 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <CoreMotion/NSFastEnumeration.h>

@class NSData, NSDictionary;

@interface CMFallStatsItemsIterator : NSObject <NSFastEnumeration> {

	NSData* _data;
	NSDictionary* _item;
	Reader* fMslReader;
	MemoryDelegate* fMslReaderDelegate;
	ReaderIterator* fMslIterator;

}
-(void)dealloc;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_CM3*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)initWithData:(id)arg1 ;
@end

