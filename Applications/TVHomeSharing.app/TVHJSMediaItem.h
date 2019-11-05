/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 12:49:52 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/TVHomeSharing.app/TVHomeSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVHomeSharing/TVHJSMediaEntity.h>
#import <TVHomeSharing/TVHJSMediaItem.h>
@class NSDate, TVHJSContentRating, NSNumber, NSString, TVHJSVideoCredits;


@protocol TVHJSMediaItem <TVHJSMediaEntity,JSExport>
@property (nonatomic,copy,readonly) NSDate * lastPlayedDate; 
@property (nonatomic,readonly) TVHJSContentRating * contentRating; 
@property (nonatomic,copy,readonly) NSNumber * bookmark; 
@property (nonatomic,copy,readonly) NSNumber * progress; 
@property (nonatomic,copy,readonly) NSString * albumArtistTitle; 
@property (nonatomic,copy,readonly) NSString * albumArtistIdentifier; 
@property (nonatomic,readonly) BOOL isHighDefinition; 
@property (nonatomic,copy,readonly) NSNumber * trackNumber; 
@property (nonatomic,copy,readonly) NSNumber * discNumber; 
@property (nonatomic,copy,readonly) NSString * artistTitle; 
@property (nonatomic,copy,readonly) NSString * composerTitle; 
@property (nonatomic,copy,readonly) NSNumber * chapter; 
@property (nonatomic,copy,readonly) NSString * studio; 
@property (nonatomic,copy,readonly) TVHJSVideoCredits * videoCredits; 
@property (nonatomic,copy,readonly) NSDate * expirationDate; 
@property (nonatomic,copy,readonly) NSString * showTitle; 
@property (nonatomic,copy,readonly) NSString * showIdentifier; 
@property (nonatomic,copy,readonly) NSNumber * episodeNumber; 
@required
-(NSNumber *)progress;
-(NSDate *)expirationDate;
-(TVHJSContentRating *)contentRating;
-(NSString *)showTitle;
-(BOOL)isHighDefinition;
-(NSNumber *)episodeNumber;
-(NSNumber *)discNumber;
-(NSNumber *)trackNumber;
-(NSString *)studio;
-(NSDate *)lastPlayedDate;
-(NSNumber *)bookmark;
-(NSString *)albumArtistIdentifier;
-(NSString *)showIdentifier;
-(TVHJSVideoCredits *)videoCredits;
-(NSString *)albumArtistTitle;
-(NSString *)artistTitle;
-(NSString *)composerTitle;
-(id)contributorImageLoadParamsWithContributorName:(id)arg1;
-(NSNumber *)chapter;

@end


@class NSDate, TVHJSContentRating, NSNumber, NSString, TVHJSVideoCredits, TVHKMediaItem, TVHJSMediaEntityType;

@interface TVHJSMediaItem : TVHJSMediaEntity <TVHJSMediaItem> {

	NSString* _imageLoadParams;
	TVHJSContentRating* _contentRating;
	TVHJSVideoCredits* _videoCredits;
	NSString* _albumArtistIdentifier;
	NSString* _title;
	NSString* _artistTitle;
	NSString* _showTitle;
	NSString* _showIdentifier;
	NSString* _albumArtistTitle;
	NSString* _composerTitle;
	TVHKMediaItem* _mediaItem;

}

@property (nonatomic,retain) TVHKMediaItem * mediaItem;                              //@synthesize mediaItem=_mediaItem - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) TVHJSMediaEntityType * type; 
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,copy,readonly) NSString * mediaServerIdentifier; 
@property (nonatomic,copy,readonly) NSString * metadataHash; 
@property (nonatomic,copy,readonly) NSString * title;                                //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * genreTitle; 
@property (nonatomic,copy,readonly) NSString * albumTitle; 
@property (nonatomic,copy,readonly) NSString * albumIdentifier; 
@property (nonatomic,copy,readonly) NSNumber * seasonNumber; 
@property (nonatomic,copy,readonly) NSDate * addedDate; 
@property (nonatomic,copy,readonly) NSDate * releaseDate; 
@property (nonatomic,copy,readonly) NSNumber * releaseYear; 
@property (nonatomic,copy,readonly) NSString * contentDescription; 
@property (nonatomic,copy,readonly) NSNumber * duration; 
@property (nonatomic,copy) NSString * playedState; 
@property (nonatomic,copy,readonly) NSString * playedStateResourceName; 
@property (nonatomic,copy,readonly) NSString * imageLoadParams;                      //@synthesize imageLoadParams=_imageLoadParams - In the implementation block
@property (nonatomic,copy,readonly) NSDate * lastPlayedDate; 
@property (nonatomic,readonly) TVHJSContentRating * contentRating;                   //@synthesize contentRating=_contentRating - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * bookmark; 
@property (nonatomic,copy,readonly) NSNumber * progress; 
@property (nonatomic,copy,readonly) NSString * albumArtistTitle;                     //@synthesize albumArtistTitle=_albumArtistTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * albumArtistIdentifier;                //@synthesize albumArtistIdentifier=_albumArtistIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL isHighDefinition; 
@property (nonatomic,copy,readonly) NSNumber * trackNumber; 
@property (nonatomic,copy,readonly) NSNumber * discNumber; 
@property (nonatomic,copy,readonly) NSString * artistTitle;                          //@synthesize artistTitle=_artistTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * composerTitle;                        //@synthesize composerTitle=_composerTitle - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * chapter; 
@property (nonatomic,copy,readonly) NSString * studio; 
@property (nonatomic,copy,readonly) TVHJSVideoCredits * videoCredits;                //@synthesize videoCredits=_videoCredits - In the implementation block
@property (nonatomic,copy,readonly) NSDate * expirationDate; 
@property (nonatomic,copy,readonly) NSString * showTitle;                            //@synthesize showTitle=_showTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * showIdentifier;                       //@synthesize showIdentifier=_showIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * episodeNumber; 
-(NSNumber *)progress;
-(NSString *)title;
-(NSDate *)expirationDate;
-(TVHJSContentRating *)contentRating;
-(NSString *)showTitle;
-(BOOL)isHighDefinition;
-(NSNumber *)episodeNumber;
-(NSNumber *)discNumber;
-(NSNumber *)trackNumber;
-(TVHKMediaItem *)mediaItem;
-(void)setMediaItem:(TVHKMediaItem *)arg1 ;
-(NSString *)studio;
-(NSDate *)lastPlayedDate;
-(NSNumber *)bookmark;
-(NSString *)albumArtistIdentifier;
-(NSString *)showIdentifier;
-(TVHJSVideoCredits *)videoCredits;
-(NSString *)albumArtistTitle;
-(NSString *)artistTitle;
-(NSString *)composerTitle;
-(id)initWithMediaEntity:(id)arg1 appContext:(id)arg2 ;
-(id)_unknownMediaItemTitle;
-(id)_nativeContentRating;
-(NSString *)imageLoadParams;
-(id)contributorImageLoadParamsWithContributorName:(id)arg1 ;
-(NSNumber *)chapter;
-(id)initWithMediaItem:(id)arg1 appContext:(id)arg2 ;
@end
