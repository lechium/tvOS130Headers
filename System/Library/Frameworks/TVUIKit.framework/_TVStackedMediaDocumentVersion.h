/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:58 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/TVUIKit.framework/TVUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _TVStackedMediaDocumentVersion : NSObject {

	long long _majorVersion;
	long long _minorVersion;
	long long _patchVersion;

}

@property (assign,nonatomic) long long majorVersion;              //@synthesize majorVersion=_majorVersion - In the implementation block
@property (assign,nonatomic) long long minorVersion;              //@synthesize minorVersion=_minorVersion - In the implementation block
@property (assign,nonatomic) long long patchVersion;              //@synthesize patchVersion=_patchVersion - In the implementation block
+(id)v1_0_0;
+(id)v1_0_1;
-(long long)compare:(id)arg1 ;
-(long long)majorVersion;
-(long long)minorVersion;
-(void)setMajorVersion:(long long)arg1 ;
-(void)setMinorVersion:(long long)arg1 ;
-(long long)patchVersion;
-(void)setPatchVersion:(long long)arg1 ;
-(id)initWithVersionString:(id)arg1 ;
-(BOOL)isEqualToVersion:(id)arg1 ;
-(BOOL)isGreaterThanVersion:(id)arg1 ;
-(BOOL)isLessThanVersion:(id)arg1 ;
@end

