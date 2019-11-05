/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:49 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Support/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ACAccount, NSMutableArray, NSDictionary, NSArray;

@interface RestoreBatchContext : NSObject {

	ACAccount* _account;
	NSMutableArray* _hardFailures;
	NSDictionary* _itemMap;
	NSMutableArray* _remainingItemIDs;
	NSMutableArray* _softFailures;
	NSMutableArray* _successfulItems;
	NSArray* _targetItems;

}

@property (nonatomic,readonly) NSMutableArray * hardFailures;                  //@synthesize hardFailures=_hardFailures - In the implementation block
@property (readonly) NSDictionary * itemMap;                                   //@synthesize itemMap=_itemMap - In the implementation block
@property (nonatomic,readonly) NSMutableArray * remainingItemIDs;              //@synthesize remainingItemIDs=_remainingItemIDs - In the implementation block
@property (nonatomic,readonly) NSMutableArray * softFailures;                  //@synthesize softFailures=_softFailures - In the implementation block
@property (nonatomic,readonly) NSMutableArray * successfulItems;               //@synthesize successfulItems=_successfulItems - In the implementation block
@property (readonly) NSArray * targetItems;                                    //@synthesize targetItems=_targetItems - In the implementation block
-(NSMutableArray *)hardFailures;
-(NSMutableArray *)softFailures;
-(NSMutableArray *)successfulItems;
-(id)initWithItems:(id)arg1 account:(id)arg2 ;
-(NSArray *)targetItems;
-(NSMutableArray *)remainingItemIDs;
-(NSDictionary *)itemMap;
-(void)hardFailItem:(id)arg1 withError:(id)arg2 ;
-(void)softFailItem:(id)arg1 withError:(id)arg2 ;
-(void)itemSucceeded:(id)arg1 storeItem:(id)arg2 ;
@end
