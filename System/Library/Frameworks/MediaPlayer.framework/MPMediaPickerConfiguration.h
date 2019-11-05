/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:16 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/NSSecureCoding.h>

@class NSString, NSArray;

@interface MPMediaPickerConfiguration : NSObject <NSSecureCoding> {

	BOOL _allowsPickingMultipleItems;
	BOOL _showsCloudItems;
	BOOL _showsItemsWithProtectedAssets;
	BOOL _picksSingleCollectionEntity;
	BOOL _showsCatalogContent;
	BOOL _pickingForExternalPlayer;
	unsigned _watchCompatibilityVersion;
	unsigned long long _mediaTypes;
	NSString* _prompt;
	NSArray* _typeIdentifiers;
	long long _selectionMode;

}

@property (assign,nonatomic) unsigned long long mediaTypes;                   //@synthesize mediaTypes=_mediaTypes - In the implementation block
@property (assign,nonatomic) BOOL allowsPickingMultipleItems;                 //@synthesize allowsPickingMultipleItems=_allowsPickingMultipleItems - In the implementation block
@property (assign,nonatomic) BOOL showsCloudItems;                            //@synthesize showsCloudItems=_showsCloudItems - In the implementation block
@property (assign,nonatomic) BOOL showsItemsWithProtectedAssets;              //@synthesize showsItemsWithProtectedAssets=_showsItemsWithProtectedAssets - In the implementation block
@property (nonatomic,copy) NSString * prompt;                                 //@synthesize prompt=_prompt - In the implementation block
@property (assign,nonatomic) BOOL picksSingleCollectionEntity;                //@synthesize picksSingleCollectionEntity=_picksSingleCollectionEntity - In the implementation block
@property (assign,nonatomic) unsigned watchCompatibilityVersion;              //@synthesize watchCompatibilityVersion=_watchCompatibilityVersion - In the implementation block
@property (nonatomic,copy) NSArray * typeIdentifiers;                         //@synthesize typeIdentifiers=_typeIdentifiers - In the implementation block
@property (assign,nonatomic) long long selectionMode;                         //@synthesize selectionMode=_selectionMode - In the implementation block
@property (assign,nonatomic) BOOL showsCatalogContent;                        //@synthesize showsCatalogContent=_showsCatalogContent - In the implementation block
@property (assign,nonatomic) BOOL pickingForExternalPlayer;                   //@synthesize pickingForExternalPlayer=_pickingForExternalPlayer - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)selectionMode;
-(void)setSelectionMode:(long long)arg1 ;
-(void)setMediaTypes:(unsigned long long)arg1 ;
-(unsigned long long)mediaTypes;
-(void)setPrompt:(NSString *)arg1 ;
-(NSString *)prompt;
-(BOOL)allowsPickingMultipleItems;
-(void)setAllowsPickingMultipleItems:(BOOL)arg1 ;
-(BOOL)showsCloudItems;
-(void)setShowsCloudItems:(BOOL)arg1 ;
-(BOOL)showsItemsWithProtectedAssets;
-(void)setShowsItemsWithProtectedAssets:(BOOL)arg1 ;
-(BOOL)picksSingleCollectionEntity;
-(void)setPicksSingleCollectionEntity:(BOOL)arg1 ;
-(unsigned)watchCompatibilityVersion;
-(void)setWatchCompatibilityVersion:(unsigned)arg1 ;
-(NSArray *)typeIdentifiers;
-(BOOL)showsCatalogContent;
-(void)setShowsCatalogContent:(BOOL)arg1 ;
-(BOOL)pickingForExternalPlayer;
-(void)setPickingForExternalPlayer:(BOOL)arg1 ;
-(void)setTypeIdentifiers:(NSArray *)arg1 ;
@end
