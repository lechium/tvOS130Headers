/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:49 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/Contacts-Structs.h>
#import <Contacts/NSCopying.h>
#import <Contacts/NSSecureCoding.h>

@class NSString;

@interface CNContactLocationVCardSummary : NSObject <NSCopying, NSSecureCoding> {

	NSString* _title;
	NSString* _urlString;

}

@property (nonatomic,copy,readonly) NSString * title;                         //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * descriptiveLabel; 
@property (nonatomic,copy,readonly) NSString * urlString;                     //@synthesize urlString=_urlString - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)title;
-(id)initWithData:(id)arg1 error:(id*)arg2 ;
-(NSString *)urlString;
-(NSString *)descriptiveLabel;
-(id)initWithTitle:(id)arg1 URLString:(id)arg2 ;
@end

