/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:50 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSString, NSData, NSURL;

@interface ICDRequest : NSObject {

	NSDictionary* _arguments;
	BOOL _concurrent;
	BOOL _acceptsGzipEncoding;
	BOOL _shouldPromptForAuthentication;
	NSString* _action;
	long long _method;
	NSData* _bodyData;
	NSURL* _responseDataDestinationFileURL;
	long long _reason;
	long long _allowedRetryCount;
	NSString* _requestingBundleID;
	long long _requestPersonalizationStyle;

}

@property (nonatomic,readonly) NSString * action;                                //@synthesize action=_action - In the implementation block
@property (getter=isConcurrent,nonatomic,readonly) BOOL concurrent;              //@synthesize concurrent=_concurrent - In the implementation block
@property (assign,nonatomic) long long method;                                   //@synthesize method=_method - In the implementation block
@property (nonatomic,readonly) double timeoutInterval; 
@property (nonatomic,copy) NSData * bodyData;                                    //@synthesize bodyData=_bodyData - In the implementation block
@property (assign,nonatomic) BOOL acceptsGzipEncoding;                           //@synthesize acceptsGzipEncoding=_acceptsGzipEncoding - In the implementation block
@property (assign,nonatomic) BOOL shouldPromptForAuthentication;                 //@synthesize shouldPromptForAuthentication=_shouldPromptForAuthentication - In the implementation block
@property (nonatomic,copy) NSURL * responseDataDestinationFileURL;               //@synthesize responseDataDestinationFileURL=_responseDataDestinationFileURL - In the implementation block
@property (assign,nonatomic) long long reason;                                   //@synthesize reason=_reason - In the implementation block
@property (assign,nonatomic) long long allowedRetryCount;                        //@synthesize allowedRetryCount=_allowedRetryCount - In the implementation block
@property (nonatomic,copy) NSString * requestingBundleID;                        //@synthesize requestingBundleID=_requestingBundleID - In the implementation block
@property (assign,nonatomic) long long requestPersonalizationStyle;              //@synthesize requestPersonalizationStyle=_requestPersonalizationStyle - In the implementation block
+(id)request;
-(id)description;
-(long long)reason;
-(NSData *)bodyData;
-(void)setBodyData:(NSData *)arg1 ;
-(long long)method;
-(double)timeoutInterval;
-(BOOL)isConcurrent;
-(void)setReason:(long long)arg1 ;
-(NSString *)action;
-(void)setMethod:(long long)arg1 ;
-(void)setAllowedRetryCount:(long long)arg1 ;
-(long long)allowedRetryCount;
-(id)initWithAction:(id)arg1 ;
-(BOOL)shouldPromptForAuthentication;
-(void)setShouldPromptForAuthentication:(BOOL)arg1 ;
-(void)setValue:(id)arg1 forArgument:(id)arg2 ;
-(BOOL)acceptsGzipEncoding;
-(id)canonicalResponseForResponse:(id)arg1 ;
-(id)requestURLForBaseURL:(id)arg1 sessionID:(unsigned)arg2 ;
-(id)URLRequestForBaseURL:(id)arg1 sessionID:(unsigned)arg2 ;
-(void)setAcceptsGzipEncoding:(BOOL)arg1 ;
-(void)setRequestPersonalizationStyle:(long long)arg1 ;
-(void)setResponseDataDestinationFileURL:(NSURL *)arg1 ;
-(NSString *)requestingBundleID;
-(long long)requestPersonalizationStyle;
-(NSURL *)responseDataDestinationFileURL;
-(void)setRequestingBundleID:(NSString *)arg1 ;
-(id)_HTTPMethodStringForICDRequestMethod:(long long)arg1 ;
@end
