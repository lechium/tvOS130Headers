/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:58 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreAccessories.framework/Support/accessoryd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <accessoryd/accessoryd-Structs.h>
@class NSString;

@interface ACCMediaLibraryUpdateItem : NSObject {

	BOOL _partOfCompilation;
	BOOL _local;
	unsigned short _albumTrackNumber;
	unsigned short _albumTrackCount;
	unsigned short _albumDiscNumber;
	unsigned short _albumDiscCount;
	unsigned short _chapterCount;
	int _type;
	int _rating;
	unsigned _duration;
	NSString* _mediaLibraryUID;
	NSString* _revision;
	unsigned long long _persistentID;
	unsigned long long _validMask;
	NSString* _title;
	unsigned long long _albumPersistentID;
	NSString* _albumTitle;
	unsigned long long _artistPersistentID;
	NSString* _artist;
	unsigned long long _albumArtistPersistentID;
	NSString* _albumArtist;
	unsigned long long _genrePersistentID;
	NSString* _genre;
	unsigned long long _composerPersistentID;
	NSString* _composer;

}

@property (nonatomic,retain) NSString * mediaLibraryUID;                              //@synthesize mediaLibraryUID=_mediaLibraryUID - In the implementation block
@property (nonatomic,retain) NSString * revision;                                     //@synthesize revision=_revision - In the implementation block
@property (assign,nonatomic) unsigned long long persistentID;                         //@synthesize persistentID=_persistentID - In the implementation block
@property (nonatomic,readonly) unsigned long long validMask;                          //@synthesize validMask=_validMask - In the implementation block
@property (nonatomic,retain) NSString * title;                                        //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) int type;                                                //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) int rating;                                              //@synthesize rating=_rating - In the implementation block
@property (assign,nonatomic) unsigned duration;                                       //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) unsigned long long albumPersistentID;                    //@synthesize albumPersistentID=_albumPersistentID - In the implementation block
@property (nonatomic,retain) NSString * albumTitle;                                   //@synthesize albumTitle=_albumTitle - In the implementation block
@property (assign,nonatomic) unsigned short albumTrackNumber;                         //@synthesize albumTrackNumber=_albumTrackNumber - In the implementation block
@property (assign,nonatomic) unsigned short albumTrackCount;                          //@synthesize albumTrackCount=_albumTrackCount - In the implementation block
@property (assign,nonatomic) unsigned short albumDiscNumber;                          //@synthesize albumDiscNumber=_albumDiscNumber - In the implementation block
@property (assign,nonatomic) unsigned short albumDiscCount;                           //@synthesize albumDiscCount=_albumDiscCount - In the implementation block
@property (assign,nonatomic) unsigned long long artistPersistentID;                   //@synthesize artistPersistentID=_artistPersistentID - In the implementation block
@property (nonatomic,retain) NSString * artist;                                       //@synthesize artist=_artist - In the implementation block
@property (assign,nonatomic) unsigned long long albumArtistPersistentID;              //@synthesize albumArtistPersistentID=_albumArtistPersistentID - In the implementation block
@property (nonatomic,retain) NSString * albumArtist;                                  //@synthesize albumArtist=_albumArtist - In the implementation block
@property (assign,nonatomic) unsigned long long genrePersistentID;                    //@synthesize genrePersistentID=_genrePersistentID - In the implementation block
@property (nonatomic,retain) NSString * genre;                                        //@synthesize genre=_genre - In the implementation block
@property (assign,nonatomic) unsigned long long composerPersistentID;                 //@synthesize composerPersistentID=_composerPersistentID - In the implementation block
@property (nonatomic,retain) NSString * composer;                                     //@synthesize composer=_composer - In the implementation block
@property (assign,nonatomic) BOOL partOfCompilation;                                  //@synthesize partOfCompilation=_partOfCompilation - In the implementation block
@property (assign,nonatomic) BOOL local;                                              //@synthesize local=_local - In the implementation block
@property (assign,nonatomic) unsigned short chapterCount;                             //@synthesize chapterCount=_chapterCount - In the implementation block
-(id)debugDescription;
-(id)description;
-(int)type;
-(void)setType:(int)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(unsigned)duration;
-(void)setDuration:(unsigned)arg1 ;
-(unsigned long long)persistentID;
-(void)setPersistentID:(unsigned long long)arg1 ;
-(void)setRevision:(NSString *)arg1 ;
-(int)rating;
-(void)setRating:(int)arg1 ;
-(void)setArtist:(NSString *)arg1 ;
-(NSString *)artist;
-(void)setComposer:(NSString *)arg1 ;
-(NSString *)composer;
-(void)setLocal:(BOOL)arg1 ;
-(void)setGenre:(NSString *)arg1 ;
-(NSString *)genre;
-(void)setAlbumPersistentID:(unsigned long long)arg1 ;
-(unsigned long long)albumPersistentID;
-(BOOL)local;
-(NSString *)albumArtist;
-(void)setAlbumArtist:(NSString *)arg1 ;
-(void)setChapterCount:(unsigned short)arg1 ;
-(unsigned short)chapterCount;
-(NSString *)revision;
-(NSString *)albumTitle;
-(unsigned long long)albumArtistPersistentID;
-(unsigned short)albumTrackNumber;
-(unsigned short)albumTrackCount;
-(unsigned long long)artistPersistentID;
-(unsigned long long)genrePersistentID;
-(unsigned long long)composerPersistentID;
-(void)setAlbumTitle:(NSString *)arg1 ;
-(void)setAlbumDiscCount:(unsigned short)arg1 ;
-(void)setAlbumTrackCount:(unsigned short)arg1 ;
-(unsigned short)albumDiscCount;
-(id)initWithMediaLibrary:(id)arg1 dict:(id)arg2 ;
-(void)fillStruct:(SCD_Struct_AC8*)arg1 ;
-(id)copyDict;
-(void)setMediaLibraryUID:(NSString *)arg1 ;
-(NSString *)mediaLibraryUID;
-(unsigned long long)validMask;
-(id)initWithMediaLibrary:(id)arg1 persistentID:(unsigned long long)arg2 revision:(id)arg3 ;
-(void)setAlbumTrackNumber:(unsigned short)arg1 ;
-(void)setAlbumDiscNumber:(unsigned short)arg1 ;
-(void)setArtistPersistentID:(unsigned long long)arg1 ;
-(void)setAlbumArtistPersistentID:(unsigned long long)arg1 ;
-(void)setGenrePersistentID:(unsigned long long)arg1 ;
-(void)setComposerPersistentID:(unsigned long long)arg1 ;
-(void)setPartOfCompilation:(BOOL)arg1 ;
-(unsigned short)albumDiscNumber;
-(BOOL)partOfCompilation;
@end
