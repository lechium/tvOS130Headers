/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:03 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSDictionary;

@interface GEOClientRequestInfo : NSObject {

	NSMutableDictionary* _requests;

}

@property (nonatomic,readonly) NSDictionary * requests;              //@synthesize requests=_requests - In the implementation block
-(id)init;
-(NSDictionary *)requests;
-(unsigned long long)countForRequestType:(unsigned char)arg1 ;
-(void)incrementCountForRequestType:(unsigned char)arg1 ;
@end

