/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:09 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SSLookupRequest, NSString, NSURL;

@interface MKAppLaunchController : NSObject {

	SSLookupRequest* _request;
	NSString* _webURLString;
	NSURL* webURL;

}

@property (nonatomic,retain) SSLookupRequest * storeRequest;              //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) NSURL * webURL; 
+(id)sharedController;
+(void)launchAttributionURLs:(id)arg1 withAttribution:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)dealloc;
-(NSURL *)webURL;
-(void)setWebURL:(NSURL *)arg1 ;
-(SSLookupRequest *)storeRequest;
-(void)setStoreRequest:(SSLookupRequest *)arg1 ;
-(void)lookUpAppStoreURLForBundle:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

