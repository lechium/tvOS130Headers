/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:12 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Symbolication/VMUAbstractSerializer.h>

@class NSData;

@interface VMUSimpleDeserializer : VMUAbstractSerializer {

	void* _cache;
	NSData* _data;

}
-(void)dealloc;
-(id)initWithData:(id)arg1 ;
-(unsigned)deserialize32;
-(unsigned long long)deserialize64;
-(id)copyDeserializedString;
-(id)copyDeserializedStringWithID:(unsigned)arg1 ;
-(void)skipFields:(unsigned)arg1 ;
-(const char*)copyDeserializedNullTerminatedBytes;
-(unsigned*)_deserializeValues:(unsigned)arg1 ;
@end
