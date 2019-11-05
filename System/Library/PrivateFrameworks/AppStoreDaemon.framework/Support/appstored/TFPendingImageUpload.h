/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:51 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Support/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <appstored/appstored-Structs.h>
#import <appstored/NSSecureCoding.h>

@class NSData, NSString, NSURL;

@interface TFPendingImageUpload : NSObject <NSSecureCoding> {

	NSData* _data;
	NSString* _logKey;
	NSURL* _URL;

}

@property (nonatomic,copy) NSData * data;                  //@synthesize data=_data - In the implementation block
@property (nonatomic,copy) NSString * logKey;              //@synthesize logKey=_logKey - In the implementation block
@property (nonatomic,copy) NSURL * URL;                    //@synthesize URL=_URL - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)pendingUploadWithData:(id)arg1 andURL:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)data;
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(void)setData:(NSData *)arg1 ;
-(NSString *)logKey;
-(void)setLogKey:(NSString *)arg1 ;
@end
