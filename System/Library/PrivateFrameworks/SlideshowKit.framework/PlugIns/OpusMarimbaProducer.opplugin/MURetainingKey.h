/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:02 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusMarimbaProducer.opplugin/OpusMarimbaProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusMarimbaProducer/OpusMarimbaProducer-Structs.h>
#import <ATVSlideshow/MUPoolObject.h>
#import <OpusMarimbaProducer/NSCopying.h>

@class NSObject;

@interface MURetainingKey : MUPoolObject <NSCopying> {

	NSObject* _object;

}

@property (readonly) NSObject * object;              //@synthesize object=_object - In the implementation block
+(SCD_Struct_MU3*)poolInfo;
+(BOOL)clearVars;
+(id)retainingKeyWithObject:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(NSObject *)object;
-(id)initWithObject:(id)arg1 ;
-(void)purge;
@end

