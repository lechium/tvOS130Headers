/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:51 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/securityd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <securityd/NSSecureCoding.h>

@class NSData;

@interface SecDbBackupWrappedItemKey : NSObject <NSSecureCoding> {

	NSData* _wrappedKey;
	NSData* _baguuid;

}

@property (nonatomic,retain) NSData * wrappedKey;              //@synthesize wrappedKey=_wrappedKey - In the implementation block
@property (nonatomic,retain) NSData * baguuid;                 //@synthesize baguuid=_baguuid - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSData *)baguuid;
-(void)setBaguuid:(NSData *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)wrappedKey;
-(void)setWrappedKey:(NSData *)arg1 ;
@end

