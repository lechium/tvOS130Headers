/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:37 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PHCollectionList, PHFetchResult;

@interface PXNavigationListDataSectionConfiguration : NSObject {

	BOOL _emptyCollectionsHidden;
	BOOL _includeKeyAssetFetches;
	BOOL _includeUserSmartAlbums;
	BOOL _skipKeyAssetFetchesForSmartAlbums;
	BOOL _skipAssetFetches;
	PHCollectionList* _collectionList;
	PHFetchResult* _collectionsFetchResult;

}

@property (nonatomic,readonly) PHCollectionList * collectionList;                   //@synthesize collectionList=_collectionList - In the implementation block
@property (nonatomic,readonly) PHFetchResult * collectionsFetchResult;              //@synthesize collectionsFetchResult=_collectionsFetchResult - In the implementation block
@property (assign,nonatomic) BOOL emptyCollectionsHidden;                           //@synthesize emptyCollectionsHidden=_emptyCollectionsHidden - In the implementation block
@property (assign,nonatomic) BOOL includeKeyAssetFetches;                           //@synthesize includeKeyAssetFetches=_includeKeyAssetFetches - In the implementation block
@property (assign,nonatomic) BOOL includeUserSmartAlbums;                           //@synthesize includeUserSmartAlbums=_includeUserSmartAlbums - In the implementation block
@property (assign,nonatomic) BOOL skipKeyAssetFetchesForSmartAlbums;                //@synthesize skipKeyAssetFetchesForSmartAlbums=_skipKeyAssetFetchesForSmartAlbums - In the implementation block
@property (assign,nonatomic) BOOL skipAssetFetches;                                 //@synthesize skipAssetFetches=_skipAssetFetches - In the implementation block
+(id)configurationWithCollectionList:(id)arg1 ;
+(id)configurationWithCollectionsFetchResult:(id)arg1 ;
-(id)description;
-(BOOL)includeUserSmartAlbums;
-(void)setIncludeUserSmartAlbums:(BOOL)arg1 ;
-(PHCollectionList *)collectionList;
-(id)initWithCollectionList:(id)arg1 ;
-(id)initWithCollectionsFetchResult:(id)arg1 ;
-(PHFetchResult *)collectionsFetchResult;
-(BOOL)emptyCollectionsHidden;
-(void)setEmptyCollectionsHidden:(BOOL)arg1 ;
-(BOOL)includeKeyAssetFetches;
-(void)setIncludeKeyAssetFetches:(BOOL)arg1 ;
-(BOOL)skipKeyAssetFetchesForSmartAlbums;
-(void)setSkipKeyAssetFetchesForSmartAlbums:(BOOL)arg1 ;
-(BOOL)skipAssetFetches;
-(void)setSkipAssetFetches:(BOOL)arg1 ;
@end
