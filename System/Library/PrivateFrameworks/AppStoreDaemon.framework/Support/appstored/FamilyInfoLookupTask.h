/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:53 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Support/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleMediaServices/AMSTask.h>

@protocol AMSBagProtocol;
@class NSString;

@interface FamilyInfoLookupTask : AMSTask {

	BOOL _suppressDialogs;
	id<AMSBagProtocol> _bag;
	NSString* _logKey;

}

@property (nonatomic,retain) id<AMSBagProtocol> bag;              //@synthesize bag=_bag - In the implementation block
@property (nonatomic,retain) NSString * logKey;                   //@synthesize logKey=_logKey - In the implementation block
@property (assign,nonatomic) BOOL suppressDialogs;                //@synthesize suppressDialogs=_suppressDialogs - In the implementation block
+(id)_processURLResult:(id)arg1 ;
-(id<AMSBagProtocol>)bag;
-(void)setBag:(id<AMSBagProtocol>)arg1 ;
-(NSString *)logKey;
-(void)setLogKey:(NSString *)arg1 ;
-(id)initWithBag:(id)arg1 ;
-(id)performFamilyInfoLookup;
-(id)_performFamilyInfoRequestForAccount:(id)arg1 error:(id*)arg2 ;
-(id)_cachedFamilyInfoLookupResultForAccount:(id)arg1 ;
-(void)_cacheFamilyInfoLookupResult:(id)arg1 forAccount:(id)arg2 ;
-(id)_pathForCachedFamilyInfoLookupResult;
-(id)_currentCachedFamilyInfo;
-(BOOL)suppressDialogs;
-(void)setSuppressDialogs:(BOOL)arg1 ;
@end

