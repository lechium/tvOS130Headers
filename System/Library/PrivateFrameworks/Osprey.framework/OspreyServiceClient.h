/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:56 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Osprey.framework/Osprey
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSURLSessionConfiguration;

@interface OspreyServiceClient : NSObject {

	NSURL* _URL;
	NSURLSessionConfiguration* _Conf;

}

@property (nonatomic,copy,readonly) NSURL * URL;                                   //@synthesize URL=_URL - In the implementation block
@property (nonatomic,copy,readonly) NSURLSessionConfiguration * Conf;              //@synthesize Conf=_Conf - In the implementation block
-(NSURL *)URL;
-(id)initWithURL:(id)arg1 configuration:(id)arg2 ;
-(NSURLSessionConfiguration *)Conf;
@end

