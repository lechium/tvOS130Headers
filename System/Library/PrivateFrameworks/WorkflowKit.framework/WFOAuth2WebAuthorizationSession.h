/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:09 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFOAuth2AuthorizationSession.h>

@class NSURL, ASWebAuthenticationSession, WFOAuth2SessionManager, NSString;

@interface WFOAuth2WebAuthorizationSession : NSObject <WFOAuth2AuthorizationSession> {

	NSURL* _authorizationURL;
	NSURL* _redirectURI;
	ASWebAuthenticationSession* _authenticationSession;
	WFOAuth2SessionManager* _sessionManager;
	NSString* _responseType;
	NSString* _state;
	/*^block*/id _completionHandler;
	NSString* _responseKey;

}

@property (nonatomic,readonly) WFOAuth2SessionManager * sessionManager;                         //@synthesize sessionManager=_sessionManager - In the implementation block
@property (nonatomic,copy,readonly) NSString * responseType;                                    //@synthesize responseType=_responseType - In the implementation block
@property (nonatomic,readonly) NSString * state;                                                //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) id completionHandler;                                                //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,readonly) NSString * responseKey;                                          //@synthesize responseKey=_responseKey - In the implementation block
@property (nonatomic,copy,readonly) NSURL * authorizationURL;                                   //@synthesize authorizationURL=_authorizationURL - In the implementation block
@property (nonatomic,copy,readonly) NSURL * redirectURI;                                        //@synthesize redirectURI=_redirectURI - In the implementation block
@property (nonatomic,readonly) ASWebAuthenticationSession * authenticationSession;              //@synthesize authenticationSession=_authenticationSession - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)state;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(NSString *)responseType;
-(ASWebAuthenticationSession *)authenticationSession;
-(WFOAuth2SessionManager *)sessionManager;
-(NSURL *)authorizationURL;
-(NSURL *)redirectURI;
-(BOOL)resumeSessionWithURL:(id)arg1 ;
-(BOOL)resumeSessionWithURL:(id)arg1 options:(id)arg2 ;
-(id)initWithSessionManager:(id)arg1 authorizationURL:(id)arg2 responseType:(id)arg3 redirectURI:(id)arg4 specifyRedirectURI:(BOOL)arg5 completionHandler:(/*^block*/id)arg6 ;
-(BOOL)resumeSessionWithResponseObject:(id)arg1 ;
-(NSString *)responseKey;
@end
