/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:23 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSError;

@interface DirectUploadResponse : NSObject {

	NSString* _assetToken;
	NSString* _assetTokenType;
	long long _countOfBytesSent;
	NSError* _error;

}

@property (nonatomic,copy,readonly) NSString * assetToken;                  //@synthesize assetToken=_assetToken - In the implementation block
@property (nonatomic,copy,readonly) NSString * assetTokenType;              //@synthesize assetTokenType=_assetTokenType - In the implementation block
@property (assign,nonatomic) long long countOfBytesSent;                    //@synthesize countOfBytesSent=_countOfBytesSent - In the implementation block
@property (nonatomic,copy,readonly) NSError * error;                        //@synthesize error=_error - In the implementation block
-(NSError *)error;
-(void)setCountOfBytesSent:(long long)arg1 ;
-(long long)countOfBytesSent;
-(id)initWithURLResponse:(id)arg1 data:(id)arg2 ;
-(NSString *)assetToken;
-(NSString *)assetTokenType;
@end
