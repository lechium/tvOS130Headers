/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:54:58 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/Setup.app/Setup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Setup/NSURLSessionDelegate.h>
#import <Setup/NSURLSessionDataDelegate.h>

@class NSURLSession, NSMutableData, NSURLSessionConfiguration, NSURL, NSDictionary, NSURLRequest, NSString;

@interface SATVActivationEngine : NSObject <NSURLSessionDelegate, NSURLSessionDataDelegate> {

	NSURLSession* _session;
	NSMutableData* _activationData;
	BOOL _allowAnyHTTPSCertificate;
	NSURLSessionConfiguration* _sessionConfiguration;
	NSURL* _overrideActivationURL;
	NSURL* _overrideSessionURL;
	/*^block*/id _completion;
	NSDictionary* _responseHeaders;
	NSURLRequest* _activationRequest;
	NSString* _userAgent;

}

@property (nonatomic,readonly) NSURLSession * session; 
@property (nonatomic,copy) NSURL * overrideActivationURL;                                   //@synthesize overrideActivationURL=_overrideActivationURL - In the implementation block
@property (nonatomic,copy) NSURL * overrideSessionURL;                                      //@synthesize overrideSessionURL=_overrideSessionURL - In the implementation block
@property (nonatomic,copy) id completion;                                                   //@synthesize completion=_completion - In the implementation block
@property (nonatomic,copy) NSDictionary * responseHeaders;                                  //@synthesize responseHeaders=_responseHeaders - In the implementation block
@property (nonatomic,retain) NSURLRequest * activationRequest;                              //@synthesize activationRequest=_activationRequest - In the implementation block
@property (retain) NSString * userAgent;                                                    //@synthesize userAgent=_userAgent - In the implementation block
@property (assign,nonatomic) BOOL allowAnyHTTPSCertificate;                                 //@synthesize allowAnyHTTPSCertificate=_allowAnyHTTPSCertificate - In the implementation block
@property (nonatomic,retain) NSURLSessionConfiguration * sessionConfiguration;              //@synthesize sessionConfiguration=_sessionConfiguration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)activationEngineWithOverrideActivationURL:(id)arg1 sessionURL:(id)arg2 ;
-(void)setUserAgent:(NSString *)arg1 ;
-(NSDictionary *)responseHeaders;
-(id)completion;
-(void)setCompletion:(id)arg1 ;
-(void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 ;
-(void)cancel;
-(NSURLSession *)session;
-(void)_cleanup;
-(NSString *)userAgent;
-(void)setResponseHeaders:(NSDictionary *)arg1 ;
-(NSURLSessionConfiguration *)sessionConfiguration;
-(void)setSessionConfiguration:(NSURLSessionConfiguration *)arg1 ;
-(void)setAllowAnyHTTPSCertificate:(BOOL)arg1 ;
-(void)tryActivateWithOptions:(id)arg1 requestMutator:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)makeRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithOverrideActivationURL:(id)arg1 sessionURL:(id)arg2 ;
-(id)_newActivationRequestWithOptions:(id)arg1 sessionData:(id)arg2 error:(id*)arg3 ;
-(void)_sendSessionRequest:(id)arg1 withOptions:(id)arg2 ;
-(void)setActivationRequest:(NSURLRequest *)arg1 ;
-(BOOL)allowAnyHTTPSCertificate;
-(NSURL *)overrideActivationURL;
-(void)setOverrideActivationURL:(NSURL *)arg1 ;
-(NSURL *)overrideSessionURL;
-(void)setOverrideSessionURL:(NSURL *)arg1 ;
-(NSURLRequest *)activationRequest;
@end

