/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:18 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/TVContentPartnerKitUI.framework/TVContentPartnerKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TVCKDataQuery;

@interface TVCKDataImageRequest : NSObject {

	TVCKDataQuery* _query;
	/*^block*/id _completionHandler;

}

@property (assign,nonatomic,__weak) TVCKDataQuery * query;              //@synthesize query=_query - In the implementation block
@property (nonatomic,copy) id completionHandler;                        //@synthesize completionHandler=_completionHandler - In the implementation block
-(TVCKDataQuery *)query;
-(void)setQuery:(TVCKDataQuery *)arg1 ;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(id)initWithQuery:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

