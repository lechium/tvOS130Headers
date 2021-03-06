/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:55 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <GameCenterUI/GKCollectionDataSource.h>

@class NSDictionary, GKGameRecord, GKLeaderboardSet, NSArray;

@interface GKDashboardLeaderboardListDataSource : GKCollectionDataSource {

	NSDictionary* _assetNames;
	GKGameRecord* _gameRecord;
	GKLeaderboardSet* _leaderboardSet;
	NSArray* _leaderboards;

}

@property (nonatomic,retain) GKGameRecord * gameRecord;                      //@synthesize gameRecord=_gameRecord - In the implementation block
@property (nonatomic,retain) GKLeaderboardSet * leaderboardSet;              //@synthesize leaderboardSet=_leaderboardSet - In the implementation block
@property (nonatomic,retain) NSArray * leaderboards;                         //@synthesize leaderboards=_leaderboards - In the implementation block
@property (nonatomic,retain) NSDictionary * assetNames;                      //@synthesize assetNames=_assetNames - In the implementation block
-(void)dealloc;
-(long long)itemCount;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)loadDataWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setupCollectionView:(id)arg1 ;
-(double)preferredCollectionHeight;
-(id)itemForIndexPath:(id)arg1 ;
-(id)sectionHeaderText;
-(void)setGameRecord:(GKGameRecord *)arg1 ;
-(id)initWithGameRecord:(id)arg1 leaderboardSet:(id)arg2 ;
-(void)setAssetNames:(NSDictionary *)arg1 ;
-(GKGameRecord *)gameRecord;
-(void)setLeaderboardSet:(GKLeaderboardSet *)arg1 ;
-(GKLeaderboardSet *)leaderboardSet;
-(void)setLeaderboards:(NSArray *)arg1 ;
-(void)removeLeaderboardsWithoutImages;
-(NSDictionary *)assetNames;
-(NSArray *)leaderboards;
@end

