/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 12:49:52 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/TVHomeSharing.app/TVHomeSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVHomeSharing/TVHJSObject.h>
#import <TVHomeSharing/TVHKMediaEntityFetchControllerDelegate.h>
#import <TVHomeSharing/TVHJSMediaEntityFetchController.h>
@class NSArray, NSString;


@protocol TVHJSMediaEntityFetchController <JSExport>
@property (nonatomic,copy,readonly) NSArray * mediaEntities; 
@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,copy) NSString * logNameSuffix; 
@property (assign,nonatomic) BOOL calculatesRecentlyAdded; 
@property (nonatomic,copy) NSArray * groupingKeyPaths; 
@required
+(id)create:(id)arg1 :(id)arg2;
-(NSString *)identifier;
-(void)resume;
-(void)start;
-(void)stop;
-(void)setIdentifier:(id)arg1;
-(void)pause;
-(NSArray *)mediaEntities;
-(BOOL)calculatesRecentlyAdded;
-(NSArray *)groupingKeyPaths;
-(void)setCalculatesRecentlyAdded:(BOOL)arg1;
-(void)setGroupingKeyPaths:(id)arg1;
-(NSString *)logNameSuffix;
-(void)setLogNameSuffix:(id)arg1;
-(void)simulateContentsChangeWithFetchFromServer:(BOOL)arg1;

@end


@class NSArray, NSString, NSMutableArray, NSMutableDictionary, TVHKMediaEntityFetchController, NSUUID, TVHCollectionChangesToJSCollectionChangesValueTransformer;

@interface TVHJSMediaEntityFetchController : TVHJSObject <TVHKMediaEntityFetchControllerDelegate, TVHJSMediaEntityFetchController> {

	NSMutableArray* _jsMediaEntities;
	NSMutableArray* _jsRecentlyAddedMediaEntities;
	NSMutableDictionary* _jsGroupings;
	NSArray* _jsMediaEntitiesSortHeaders;
	TVHKMediaEntityFetchController* _wrappedFetchController;
	NSUUID* _fetchControllerContext;
	TVHCollectionChangesToJSCollectionChangesValueTransformer* _collectionChangesValueTransformer;

}

@property (setter=setJSMediaEntities:,nonatomic,retain) NSMutableArray * jsMediaEntities;                                                //@synthesize jsMediaEntities=_jsMediaEntities - In the implementation block
@property (setter=setJSRecentlyAddedMediaEntities:,nonatomic,retain) NSMutableArray * jsRecentlyAddedMediaEntities;                      //@synthesize jsRecentlyAddedMediaEntities=_jsRecentlyAddedMediaEntities - In the implementation block
@property (setter=setJSGroupings:,nonatomic,retain) NSMutableDictionary * jsGroupings;                                                   //@synthesize jsGroupings=_jsGroupings - In the implementation block
@property (setter=setJSMediaEntitiesSortHeaders:,nonatomic,retain) NSArray * jsMediaEntitiesSortHeaders;                                 //@synthesize jsMediaEntitiesSortHeaders=_jsMediaEntitiesSortHeaders - In the implementation block
@property (nonatomic,retain) TVHKMediaEntityFetchController * wrappedFetchController;                                                    //@synthesize wrappedFetchController=_wrappedFetchController - In the implementation block
@property (nonatomic,retain) NSUUID * fetchControllerContext;                                                                            //@synthesize fetchControllerContext=_fetchControllerContext - In the implementation block
@property (nonatomic,retain) TVHCollectionChangesToJSCollectionChangesValueTransformer * collectionChangesValueTransformer;              //@synthesize collectionChangesValueTransformer=_collectionChangesValueTransformer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSArray * mediaEntities; 
@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,copy) NSString * logNameSuffix; 
@property (assign,nonatomic) BOOL calculatesRecentlyAdded; 
@property (nonatomic,copy) NSArray * groupingKeyPaths; 
+(id)create:(id)arg1 :(id)arg2 ;
+(id)_jsSortHeadersFromSortHeaders:(id)arg1 appContext:(id)arg2 ;
+(id)_jsMediaEntitiesFromMediaEntities:(id)arg1 indexes:(id)arg2 appContext:(id)arg3 ;
-(NSString *)identifier;
-(void)resume;
-(void)start;
-(void)stop;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)pause;
-(id)initWithAppContext:(id)arg1 ;
-(NSArray *)mediaEntities;
-(BOOL)calculatesRecentlyAdded;
-(NSArray *)groupingKeyPaths;
-(void)setCalculatesRecentlyAdded:(BOOL)arg1 ;
-(void)setGroupingKeyPaths:(NSArray *)arg1 ;
-(void)controller:(id)arg1 fetchRequest:(id)arg2 didCompleteWithResult:(id)arg3 ;
-(void)controller:(id)arg1 fetchRequest:(id)arg2 didFailWithError:(id)arg3 ;
-(NSString *)logNameSuffix;
-(void)setLogNameSuffix:(NSString *)arg1 ;
-(id)initWithMediaServer:(id)arg1 fetchRequest:(id)arg2 appContext:(id)arg3 ;
-(NSMutableArray *)jsMediaEntities;
-(TVHKMediaEntityFetchController *)wrappedFetchController;
-(void)setFetchControllerContext:(NSUUID *)arg1 ;
-(NSMutableArray *)jsRecentlyAddedMediaEntities;
-(NSMutableDictionary *)jsGroupings;
-(NSUUID *)fetchControllerContext;
-(void)_updateJSArraysWithResult:(id)arg1 ;
-(NSArray *)jsMediaEntitiesSortHeaders;
-(void)_updateJSMediaQueryResult:(id)arg1 withJSObjects:(id)arg2 andChanges:(id)arg3 sortHeaders:(id)arg4 ;
-(void)_updateMediaEntitiesMutableArray:(id)arg1 withResult:(id)arg2 ;
-(void)_updateGroupingsWithResult:(id)arg1 ;
-(void)setJSMediaEntitiesSortHeaders:(id)arg1 ;
-(void)_applyChanges:(id)arg1 fromSourceMediaEntities:(id)arg2 toDestinationMediaEntities:(id)arg3 ;
-(void)_updateGroupingWithResult:(id)arg1 forKeyPath:(id)arg2 ;
-(id)_groupsValueTransformerWithKeyPath:(id)arg1 ;
-(TVHCollectionChangesToJSCollectionChangesValueTransformer *)collectionChangesValueTransformer;
-(void)simulateContentsChangeWithFetchFromServer:(BOOL)arg1 ;
-(void)setJSMediaEntities:(id)arg1 ;
-(void)setJSRecentlyAddedMediaEntities:(id)arg1 ;
-(void)setJSGroupings:(id)arg1 ;
-(void)setWrappedFetchController:(TVHKMediaEntityFetchController *)arg1 ;
-(void)setCollectionChangesValueTransformer:(TVHCollectionChangesToJSCollectionChangesValueTransformer *)arg1 ;
@end

