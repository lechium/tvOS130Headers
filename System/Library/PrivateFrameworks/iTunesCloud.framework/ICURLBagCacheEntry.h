/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:16 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ICURLBag;

@interface ICURLBagCacheEntry : NSObject {

	double _expirationTime;
	ICURLBag* _urlBag;

}

@property (assign,nonatomic) double expirationTime;              //@synthesize expirationTime=_expirationTime - In the implementation block
@property (retain) ICURLBag * urlBag;                            //@synthesize urlBag=_urlBag - In the implementation block
-(double)expirationTime;
-(void)setExpirationTime:(double)arg1 ;
-(id)initWithURLBag:(id)arg1 expirationTime:(double)arg2 ;
-(ICURLBag *)urlBag;
-(void)setUrlBag:(ICURLBag *)arg1 ;
@end
