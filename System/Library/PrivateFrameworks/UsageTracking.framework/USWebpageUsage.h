/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:34 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UsageTracking.framework/UsageTracking
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _CDAsyncLocalContext, _DKKnowledgeSaving;
@class NSMutableDictionary, NSURL;

@interface USWebpageUsage : NSObject {

	NSMutableDictionary* _contextUsageRecord;
	NSURL* _URL;
	id<_CDAsyncLocalContext> _context;
	id<_DKKnowledgeSaving> _eventStorage;

}

@property (readonly) id<_CDAsyncLocalContext> context;                 //@synthesize context=_context - In the implementation block
@property (readonly) id<_DKKnowledgeSaving> eventStorage;              //@synthesize eventStorage=_eventStorage - In the implementation block
@property (copy,readonly) NSURL * URL;                                 //@synthesize URL=_URL - In the implementation block
-(id)description;
-(void)dealloc;
-(id)initWithURL:(id)arg1 ;
-(NSURL *)URL;
-(id<_CDAsyncLocalContext>)context;
-(id<_DKKnowledgeSaving>)eventStorage;
-(id)initWithURL:(id)arg1 context:(id)arg2 eventStorage:(id)arg3 ;
-(void)changeState:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

