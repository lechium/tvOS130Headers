/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:11:58 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <StoreServices/NSCopying.h>

@class NSString;

@interface SSPaymentSheetPriceSectionItem : NSObject <NSCopying> {

	NSString* _label;
	NSString* _price;

}

@property (copy) NSString * label;              //@synthesize label=_label - In the implementation block
@property (copy) NSString * price;              //@synthesize price=_price - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(NSString *)price;
-(void)setPrice:(NSString *)arg1 ;
-(void)_parseDictionary:(id)arg1 withCaseControl:(BOOL)arg2 ;
@end

