/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:34 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <CoreFoundation/NSData.h>

@interface NSConcreteData : NSData {

	unsigned long long _length;
	void* _bytes;
	/*^block*/id _deallocator;

}
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)dealloc;
-(unsigned long long)length;
-(id)initWithBytes:(void*)arg1 length:(unsigned long long)arg2 copy:(BOOL)arg3 freeWhenDone:(BOOL)arg4 bytesAreVM:(BOOL)arg5 ;
-(const void*)bytes;
-(BOOL)_isCompact;
-(void)getBytes:(void*)arg1 length:(unsigned long long)arg2 ;
-(id)_createDispatchData;
-(void)getBytes:(void*)arg1 range:(NSRange)arg2 ;
-(BOOL)_providesConcreteBacking;
-(BOOL)_copyWillRetain;
-(id)initWithBytes:(void*)arg1 length:(unsigned long long)arg2 copy:(BOOL)arg3 deallocator:(/*^block*/id)arg4 ;
-(void)getBytes:(void*)arg1 ;
@end

