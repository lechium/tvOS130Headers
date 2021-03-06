/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:24 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSArray, NSString;

@interface SADecoratedString : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSArray * regions; 
@property (nonatomic,copy) NSString * text; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)decoratedString;
+(id)decoratedStringWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)siriui_enumeratePropertyRangesUsingBlock:(/*^block*/id)arg1 ;
-(void)siriui_enumerateRangesOfRegionsWithProperty:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)siriui_attributedStringValueWithAttribute:(id)arg1 value:(id)arg2 forRegionsWithProperty:(id)arg3 ;
-(id)groupIdentifier;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(NSArray *)regions;
-(void)setRegions:(NSArray *)arg1 ;
-(id)encodedClassName;
@end

