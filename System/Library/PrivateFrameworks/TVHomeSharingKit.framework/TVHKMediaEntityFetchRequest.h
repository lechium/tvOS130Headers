/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:20 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVHomeSharingKit/TVHomeSharingKit-Structs.h>
#import <TVHomeSharingKit/NSCopying.h>

@class NSPredicate, NSArray, NSSet, NSDictionary, TVHKDMAPPlaylistIdentifier;

@interface TVHKMediaEntityFetchRequest : NSObject <NSCopying> {

	BOOL _containsMediaEntityTypePredicate;
	BOOL _forceMediaServerFetch;
	unsigned long long _mediaEntitySubtype;
	unsigned long long _mediaCategoryType;
	unsigned long long _mediaCollectionType;
	NSPredicate* _predicate;
	NSArray* _sortDescriptors;
	NSSet* _properties;
	NSDictionary* _options;
	unsigned long long _protocol;
	TVHKDMAPPlaylistIdentifier* _playlistIdentifier;
	NSArray* _playlistItemMediaCategoryTypes;
	NSDictionary* _mediaCategoryByMediaCollectionPersistentID;
	unsigned long long _fromRevision;
	unsigned long long _toRevision;
	NSSet* _metadataNames;
	NSArray* _queryTerms;
	NSPredicate* _additionalPredicate;
	NSRange _range;

}

@property (assign,nonatomic) unsigned long long mediaEntitySubtype;                                //@synthesize mediaEntitySubtype=_mediaEntitySubtype - In the implementation block
@property (assign,nonatomic) unsigned long long mediaCategoryType;                                 //@synthesize mediaCategoryType=_mediaCategoryType - In the implementation block
@property (assign,nonatomic) unsigned long long mediaCollectionType;                               //@synthesize mediaCollectionType=_mediaCollectionType - In the implementation block
@property (assign,nonatomic) unsigned long long protocol;                                          //@synthesize protocol=_protocol - In the implementation block
@property (nonatomic,retain) TVHKDMAPPlaylistIdentifier * playlistIdentifier;                      //@synthesize playlistIdentifier=_playlistIdentifier - In the implementation block
@property (nonatomic,copy) NSArray * playlistItemMediaCategoryTypes;                               //@synthesize playlistItemMediaCategoryTypes=_playlistItemMediaCategoryTypes - In the implementation block
@property (nonatomic,copy) NSDictionary * mediaCategoryByMediaCollectionPersistentID;              //@synthesize mediaCategoryByMediaCollectionPersistentID=_mediaCategoryByMediaCollectionPersistentID - In the implementation block
@property (assign,nonatomic) unsigned long long fromRevision;                                      //@synthesize fromRevision=_fromRevision - In the implementation block
@property (assign,nonatomic) unsigned long long toRevision;                                        //@synthesize toRevision=_toRevision - In the implementation block
@property (assign,nonatomic) BOOL containsMediaEntityTypePredicate;                                //@synthesize containsMediaEntityTypePredicate=_containsMediaEntityTypePredicate - In the implementation block
@property (nonatomic,copy) NSSet * metadataNames;                                                  //@synthesize metadataNames=_metadataNames - In the implementation block
@property (nonatomic,copy) NSArray * queryTerms;                                                   //@synthesize queryTerms=_queryTerms - In the implementation block
@property (nonatomic,copy) NSPredicate * additionalPredicate;                                      //@synthesize additionalPredicate=_additionalPredicate - In the implementation block
@property (assign,nonatomic) BOOL forceMediaServerFetch;                                           //@synthesize forceMediaServerFetch=_forceMediaServerFetch - In the implementation block
@property (nonatomic,readonly) NSPredicate * canonicalPredicate; 
@property (nonatomic,copy) NSPredicate * predicate;                                                //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,copy) NSArray * sortDescriptors;                                              //@synthesize sortDescriptors=_sortDescriptors - In the implementation block
@property (nonatomic,copy) NSSet * properties;                                                     //@synthesize properties=_properties - In the implementation block
@property (assign,nonatomic) NSRange range;                                                        //@synthesize range=_range - In the implementation block
@property (nonatomic,copy) NSDictionary * options;                                                 //@synthesize options=_options - In the implementation block
+(id)mediaItemsFetchRequestWithMediaCategoryType:(unsigned long long)arg1 ;
+(id)_mediaItemsFetchRequestWithProtocol:(unsigned long long)arg1 ;
+(id)_mediaCollectionsFetchRequestWithMediaCollectionType:(unsigned long long)arg1 mediaCategoryByMediaCollectionPersistentID:(id)arg2 ;
+(unsigned long long)_protocolFromMediaCategoryType:(unsigned long long)arg1 ;
+(id)playlistItemsFetchRequestWithPlaylistIdentifier:(id)arg1 ;
+(id)_requiredProperties;
+(id)mediaCollectionsFetchRequestWithMediaCollectionType:(unsigned long long)arg1 mediaCategoryType:(unsigned long long)arg2 ;
+(id)playlistsFetchRequestWithPlaylistItemMediaCategoryTypes:(id)arg1 ;
+(id)playlistItemsFetchRequestWithPlaylist:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(NSDictionary *)options;
-(void)setOptions:(NSDictionary *)arg1 ;
-(unsigned long long)protocol;
-(NSSet *)properties;
-(void)setPredicate:(NSPredicate *)arg1 ;
-(NSPredicate *)predicate;
-(NSArray *)sortDescriptors;
-(void)setSortDescriptors:(NSArray *)arg1 ;
-(NSRange)range;
-(void)setProtocol:(unsigned long long)arg1 ;
-(void)setProperties:(NSSet *)arg1 ;
-(void)setRange:(NSRange)arg1 ;
-(unsigned long long)mediaCategoryType;
-(void)setMediaCategoryType:(unsigned long long)arg1 ;
-(unsigned long long)mediaCollectionType;
-(void)setQueryTerms:(NSArray *)arg1 ;
-(unsigned long long)mediaEntitySubtype;
-(void)setForceMediaServerFetch:(BOOL)arg1 ;
-(NSPredicate *)canonicalPredicate;
-(void)setMediaEntitySubtype:(unsigned long long)arg1 ;
-(TVHKDMAPPlaylistIdentifier *)playlistIdentifier;
-(void)setAdditionalPredicate:(NSPredicate *)arg1 ;
-(BOOL)containsMediaEntityTypePredicate;
-(void)setMediaCollectionType:(unsigned long long)arg1 ;
-(NSDictionary *)mediaCategoryByMediaCollectionPersistentID;
-(void)setPlaylistIdentifier:(TVHKDMAPPlaylistIdentifier *)arg1 ;
-(unsigned long long)fromRevision;
-(void)setFromRevision:(unsigned long long)arg1 ;
-(unsigned long long)toRevision;
-(void)setToRevision:(unsigned long long)arg1 ;
-(id)_initMediaItemsRequestWithProtocol:(unsigned long long)arg1 mediaCategoryType:(unsigned long long)arg2 ;
-(id)_initMediaCollectionsRequestWithMediaCollectionType:(unsigned long long)arg1 mediaCategoryType:(unsigned long long)arg2 ;
-(void)setMediaCategoryByMediaCollectionPersistentID:(NSDictionary *)arg1 ;
-(id)_initPlaylistsRequestWithPlaylistItemMediaCategoryTypes:(id)arg1 ;
-(id)_initPlaylistItemsRequestWithPlaylistIdentifier:(id)arg1 ;
-(id)_initWithProtocol:(unsigned long long)arg1 mediaEntitySubtype:(unsigned long long)arg2 ;
-(void)_processPredicateRootPredicate;
-(NSPredicate *)additionalPredicate;
-(NSArray *)playlistItemMediaCategoryTypes;
-(BOOL)forceMediaServerFetch;
-(NSArray *)queryTerms;
-(NSSet *)metadataNames;
-(void)_processPredicate:(id)arg1 ;
-(void)_processCompoundPredicate:(id)arg1 ;
-(void)_processComparisonPredicate:(id)arg1 ;
-(void)setContainsMediaEntityTypePredicate:(BOOL)arg1 ;
-(void)setPlaylistItemMediaCategoryTypes:(NSArray *)arg1 ;
-(void)setMetadataNames:(NSSet *)arg1 ;
@end

