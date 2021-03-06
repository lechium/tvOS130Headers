/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:59:24 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/TVSettings.app/TVSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccount/AARequest.h>

@class AAAccount;

@interface CastleRequest : AARequest {

	AAAccount* _account;

}

@property (nonatomic,retain) AAAccount * account;              //@synthesize account=_account - In the implementation block
+(void)addHeadersToRequest:(id)arg1 forAccount:(id)arg2 ;
-(AAAccount *)account;
-(void)setAccount:(AAAccount *)arg1 ;
-(id)urlRequest;
-(id)initWithAccount:(id)arg1 URLString:(id)arg2 ;
@end

