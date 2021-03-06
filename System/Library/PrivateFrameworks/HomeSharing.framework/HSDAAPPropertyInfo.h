/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:48 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface HSDAAPPropertyInfo : NSObject {

	NSMutableDictionary* _codeMap;
	NSMutableDictionary* _valueTypeMap;

}

@property (nonatomic,retain) NSMutableDictionary * codeMap;                   //@synthesize codeMap=_codeMap - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * valueTypeMap;              //@synthesize valueTypeMap=_valueTypeMap - In the implementation block
+(id)sharedContainerPropertyInfo;
+(id)sharedItemPropertyInfo;
-(id)_init;
-(BOOL)hasInfoForProperty:(id)arg1 ;
-(void)mapProperty:(id)arg1 toCode:(unsigned)arg2 valueType:(long long)arg3 ;
-(unsigned)elementCodeForProperty:(id)arg1 ;
-(long long)valueTypeForProperty:(id)arg1 ;
-(NSMutableDictionary *)codeMap;
-(void)setCodeMap:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)valueTypeMap;
-(void)setValueTypeMap:(NSMutableDictionary *)arg1 ;
@end

