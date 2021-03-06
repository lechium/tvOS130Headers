/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:21 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSURLSessionDataDelegate, OS_dispatch_queue;
#import <MediaToolbox/MediaToolbox-Structs.h>
@class NSURLSessionConfiguration, NSURLSession, NSOperationQueue, NSObject, NSString;

@interface FigNSURLSession : NSObject {

	NSURLSessionConfiguration* _configuration;
	NSURLSession* _session;
	id<NSURLSessionDataDelegate> _dataDelegate;
	NSOperationQueue* _opQueue;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSString* _clientBundleIdentifier;
	OpaqueFigCFWeakReferenceHolderRef _weakAssertion;
	long long _doomTime;
	BOOL _doomCheckScheduled;

}

@property (nonatomic,readonly) NSURLSession * session;                                  //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) id<NSURLSessionDataDelegate> dataDelegate;               //@synthesize dataDelegate=_dataDelegate - In the implementation block
@property (nonatomic,readonly) NSOperationQueue * opQueue;                              //@synthesize opQueue=_opQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,readonly) NSString * clientBundleIdentifier;                       //@synthesize clientBundleIdentifier=_clientBundleIdentifier - In the implementation block
@property (nonatomic,readonly) FigOpaqueAssertionRef assertion; 
@property (assign,nonatomic) long long doomTime;                                        //@synthesize doomTime=_doomTime - In the implementation block
@property (assign,nonatomic) BOOL doomCheckScheduled;                                   //@synthesize doomCheckScheduled=_doomCheckScheduled - In the implementation block
-(void)dealloc;
-(NSURLSession *)session;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(FigOpaqueAssertionRef)assertion;
-(void)setDoomTime:(long long)arg1 ;
-(void)debug;
-(id)initWithClientBundleIdentifier:(id)arg1 dispatchQueue:(id)arg2 ;
-(id<NSURLSessionDataDelegate>)dataDelegate;
-(NSOperationQueue *)opQueue;
-(NSString *)clientBundleIdentifier;
-(long long)doomTime;
-(BOOL)doomCheckScheduled;
-(void)setDoomCheckScheduled:(BOOL)arg1 ;
@end

