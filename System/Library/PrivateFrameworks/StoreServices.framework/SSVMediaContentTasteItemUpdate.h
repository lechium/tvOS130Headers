/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:11:55 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSXPCCoding.h>
#import <StoreServices/NSSecureCoding.h>

@class SSVMediaContentTasteItem, NSDate, NSString;

@interface SSVMediaContentTasteItemUpdate : NSObject <SSXPCCoding, NSSecureCoding> {

	SSVMediaContentTasteItem* _item;
	NSDate* _updateDate;

}

@property (nonatomic,copy) SSVMediaContentTasteItem * item;              //@synthesize item=_item - In the implementation block
@property (nonatomic,copy) NSDate * updateDate;                          //@synthesize updateDate=_updateDate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(SSVMediaContentTasteItem *)item;
-(void)setItem:(SSVMediaContentTasteItem *)arg1 ;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(NSDate *)updateDate;
-(void)setUpdateDate:(NSDate *)arg1 ;
@end

