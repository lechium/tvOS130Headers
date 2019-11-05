/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 12:49:52 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/TVHomeSharing.app/TVHomeSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKJSObject.h>
#import <TVHomeSharing/TVHJSMediaEntity.h>
@class TVHJSMediaEntityType, NSString, NSNumber, NSDate;


@protocol TVHJSMediaEntity <NSObject,JSExport>
@property (nonatomic,readonly) TVHJSMediaEntityType * type; 
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,copy,readonly) NSString * mediaServerIdentifier; 
@property (nonatomic,copy,readonly) NSString * metadataHash; 
@property (nonatomic,copy,readonly) NSString * title; 
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
@property (nonatomic,copy,readonly) NSString * imageLoadParams; 
@required
-(TVHJSMediaEntityType *)type;
-(NSString *)identifier;
-(NSString *)title;
-(NSNumber *)duration;
-(NSDate *)addedDate;
-(NSString *)contentDescription;
-(NSDate *)releaseDate;
-(NSNumber *)seasonNumber;
-(NSNumber *)releaseYear;
-(NSString *)albumIdentifier;
-(NSString *)albumTitle;
-(NSString *)genreTitle;
-(NSString *)metadataHash;
-(NSString *)mediaServerIdentifier;
-(void)setPlayedState:(id)arg1;
-(NSString *)playedState;
-(id)imageResourceNameWithSize:(id)arg1;
-(NSString *)playedStateResourceName;
-(NSString *)imageLoadParams;

@end


@class TVHJSMediaEntityType, NSString, NSNumber, NSDate, TVHKMediaEntity;

@interface TVHJSMediaEntity : IKJSObject <TVHJSMediaEntity> {

	TVHJSMediaEntityType* _type;
	NSString* _identifier;
	NSString* _mediaServerIdentifier;
	NSString* _genreTitle;
	NSString* _albumTitle;
	NSString* _albumIdentifier;
	TVHKMediaEntity* _mediaEntity;

}

@property (nonatomic,retain) TVHKMediaEntity * mediaEntity;                          //@synthesize mediaEntity=_mediaEntity - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) TVHJSMediaEntityType * type;                          //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                           //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * mediaServerIdentifier;                //@synthesize mediaServerIdentifier=_mediaServerIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * metadataHash; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * genreTitle;                           //@synthesize genreTitle=_genreTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * albumTitle;                           //@synthesize albumTitle=_albumTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * albumIdentifier;                      //@synthesize albumIdentifier=_albumIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * seasonNumber; 
@property (nonatomic,copy,readonly) NSDate * addedDate; 
@property (nonatomic,copy,readonly) NSDate * releaseDate; 
@property (nonatomic,copy,readonly) NSNumber * releaseYear; 
@property (nonatomic,copy,readonly) NSString * contentDescription; 
@property (nonatomic,copy,readonly) NSNumber * duration; 
@property (nonatomic,copy) NSString * playedState; 
@property (nonatomic,copy,readonly) NSString * playedStateResourceName; 
@property (nonatomic,copy,readonly) NSString * imageLoadParams; 
-(NSString *)description;
-(id)init;
-(TVHJSMediaEntityType *)type;
-(NSString *)identifier;
-(NSString *)title;
-(NSNumber *)duration;
-(NSDate *)addedDate;
-(NSString *)contentDescription;
-(NSDate *)releaseDate;
-(NSNumber *)seasonNumber;
-(NSNumber *)releaseYear;
-(NSString *)albumIdentifier;
-(TVHKMediaEntity *)mediaEntity;
-(NSString *)albumTitle;
-(id)initWithAppContext:(id)arg1 ;
-(NSString *)genreTitle;
-(NSString *)metadataHash;
-(NSString *)mediaServerIdentifier;
-(void)setPlayedState:(NSString *)arg1 ;
-(NSString *)playedState;
-(void)setMediaEntity:(TVHKMediaEntity *)arg1 ;
-(id)initWithMediaEntity:(id)arg1 appContext:(id)arg2 ;
-(id)imageResourceNameWithSize:(id)arg1 ;
-(NSString *)playedStateResourceName;
-(NSString *)imageLoadParams;
@end
