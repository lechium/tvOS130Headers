/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:07 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WiFiPolicy/TBFetchResponse.h>

@class NSSet, NSArray, NSError, NSString, NSDictionary;

@interface TBRemoteFetchResponse : NSObject <TBFetchResponse> {

	NSSet* _tiles;
	NSArray* _results;
	NSError* _error;

}

@property (nonatomic,retain) NSArray * results;                            //@synthesize results=_results - In the implementation block
@property (nonatomic,copy) NSError * error;                                //@synthesize error=_error - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSSet * tiles;                              //@synthesize tiles=_tiles - In the implementation block
@property (nonatomic,readonly) NSDictionary * resultsByBSSID; 
+(id)responseWithResults:(id)arg1 tiles:(id)arg2 error:(id)arg3 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(NSArray *)results;
-(void)setResults:(NSArray *)arg1 ;
-(NSSet *)tiles;
-(id)initWithResults:(id)arg1 tiles:(id)arg2 error:(id)arg3 ;
@end

