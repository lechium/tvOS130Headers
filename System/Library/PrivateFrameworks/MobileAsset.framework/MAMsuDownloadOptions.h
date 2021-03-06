/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:44 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/MobileAsset.framework/MobileAsset
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileAsset/MADownloadOptions.h>

@class NSString;

@interface MAMsuDownloadOptions : MADownloadOptions {

	BOOL _supervised;
	BOOL _allowSameVersion;
	NSString* _requestedProductVersion;
	long long _delayPeriod;

}

@property (nonatomic,retain) NSString * requestedProductVersion;              //@synthesize requestedProductVersion=_requestedProductVersion - In the implementation block
@property (assign,nonatomic) long long delayPeriod;                           //@synthesize delayPeriod=_delayPeriod - In the implementation block
@property (assign,nonatomic) BOOL supervised;                                 //@synthesize supervised=_supervised - In the implementation block
@property (assign,nonatomic) BOOL allowSameVersion;                           //@synthesize allowSameVersion=_allowSameVersion - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)supervised;
-(void)logOptions;
-(void)setRequestedProductVersion:(NSString *)arg1 ;
-(NSString *)requestedProductVersion;
-(long long)delayPeriod;
-(BOOL)allowSameVersion;
-(void)setDelayPeriod:(long long)arg1 ;
-(void)setSupervised:(BOOL)arg1 ;
-(void)setAllowSameVersion:(BOOL)arg1 ;
@end

