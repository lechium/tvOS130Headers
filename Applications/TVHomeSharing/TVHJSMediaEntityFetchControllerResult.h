/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 12:49:52 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/TVHomeSharing.app/TVHomeSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVHomeSharing/TVHJSObject.h>
#import <TVHomeSharing/TVHJSMediaEntityFetchControllerResult.h>
@class NSString, TVHJSMediaQueryResult, NSDictionary;


@protocol TVHJSMediaEntityFetchControllerResult <JSExport>
@property (nonatomic,copy,readonly) NSString * queryReason; 
@property (nonatomic,readonly) TVHJSMediaQueryResult * mediaEntitiesResult; 
@property (nonatomic,readonly) TVHJSMediaQueryResult * recentlyAddedMediaEntitiesResult; 
@property (nonatomic,readonly) TVHJSMediaQueryResult * unplayedMediaEntitiesResult; 
@property (nonatomic,readonly) NSDictionary * groupingsResult; 
@required
-(TVHJSMediaQueryResult *)mediaEntitiesResult;
-(TVHJSMediaQueryResult *)recentlyAddedMediaEntitiesResult;
-(NSDictionary *)groupingsResult;
-(NSString *)queryReason;
-(TVHJSMediaQueryResult *)unplayedMediaEntitiesResult;

@end


@class NSString, TVHJSMediaQueryResult, NSDictionary;

@interface TVHJSMediaEntityFetchControllerResult : TVHJSObject <TVHJSMediaEntityFetchControllerResult> {

	NSString* _queryReason;
	TVHJSMediaQueryResult* _mediaEntitiesResult;
	TVHJSMediaQueryResult* _recentlyAddedMediaEntitiesResult;
	TVHJSMediaQueryResult* _unplayedMediaEntitiesResult;
	NSDictionary* _groupingsResult;

}

@property (nonatomic,copy) NSString * queryReason;                                                  //@synthesize queryReason=_queryReason - In the implementation block
@property (nonatomic,retain) TVHJSMediaQueryResult * mediaEntitiesResult;                           //@synthesize mediaEntitiesResult=_mediaEntitiesResult - In the implementation block
@property (nonatomic,retain) TVHJSMediaQueryResult * recentlyAddedMediaEntitiesResult;              //@synthesize recentlyAddedMediaEntitiesResult=_recentlyAddedMediaEntitiesResult - In the implementation block
@property (nonatomic,retain) TVHJSMediaQueryResult * unplayedMediaEntitiesResult;                   //@synthesize unplayedMediaEntitiesResult=_unplayedMediaEntitiesResult - In the implementation block
@property (nonatomic,retain) NSDictionary * groupingsResult;                                        //@synthesize groupingsResult=_groupingsResult - In the implementation block
-(id)initWithAppContext:(id)arg1 ;
-(TVHJSMediaQueryResult *)mediaEntitiesResult;
-(TVHJSMediaQueryResult *)recentlyAddedMediaEntitiesResult;
-(NSDictionary *)groupingsResult;
-(NSString *)queryReason;
-(void)setRecentlyAddedMediaEntitiesResult:(TVHJSMediaQueryResult *)arg1 ;
-(void)setGroupingsResult:(NSDictionary *)arg1 ;
-(void)setQueryReason:(NSString *)arg1 ;
-(TVHJSMediaQueryResult *)unplayedMediaEntitiesResult;
-(void)setMediaEntitiesResult:(TVHJSMediaQueryResult *)arg1 ;
-(void)setUnplayedMediaEntitiesResult:(TVHJSMediaQueryResult *)arg1 ;
@end

