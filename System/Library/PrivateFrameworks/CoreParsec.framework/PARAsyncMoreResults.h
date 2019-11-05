/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:13 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SFMoreResults.h>

@class NSXPCListenerEndpoint, PARSessionConfiguration, NSURL;

@interface PARAsyncMoreResults : SFMoreResults {

	NSXPCListenerEndpoint* _endpoint;
	PARSessionConfiguration* _configuration;
	double _scale;
	NSURL* _moreResultsURL;
	unsigned long long _queryId;
	unsigned long long _clientQueryId;

}

@property (nonatomic,readonly) NSXPCListenerEndpoint * endpoint;                     //@synthesize endpoint=_endpoint - In the implementation block
@property (nonatomic,readonly) PARSessionConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (assign,nonatomic) double scale;                                           //@synthesize scale=_scale - In the implementation block
@property (nonatomic,copy,readonly) NSURL * moreResultsURL;                          //@synthesize moreResultsURL=_moreResultsURL - In the implementation block
@property (nonatomic,readonly) unsigned long long queryId;                           //@synthesize queryId=_queryId - In the implementation block
@property (nonatomic,readonly) unsigned long long clientQueryId;                     //@synthesize clientQueryId=_clientQueryId - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)moreResults:(id)arg1 label:(id)arg2 session:(id)arg3 scale:(double)arg4 queryId:(unsigned long long)arg5 ;
+(id)moreResults:(id)arg1 label:(id)arg2 session:(id)arg3 scale:(double)arg4 queryId:(unsigned long long)arg5 clientQueryId:(unsigned long long)arg6 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(PARSessionConfiguration *)configuration;
-(NSXPCListenerEndpoint *)endpoint;
-(double)scale;
-(void)setScale:(double)arg1 ;
-(unsigned long long)queryId;
-(NSURL *)moreResultsURL;
-(unsigned long long)clientQueryId;
@end
