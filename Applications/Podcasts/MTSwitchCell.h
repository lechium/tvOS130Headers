/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:50:18 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/MTTableViewCell.h>

@class NSString, UISwitch;

@interface MTSwitchCell : MTTableViewCell {

	/*^block*/id _toggleChanged;
	NSString* _artworkKey;
	unsigned long long _maximumNumberOfTextLines;
	UISwitch* _toggle;

}

@property (nonatomic,retain) UISwitch * toggle;                                        //@synthesize toggle=_toggle - In the implementation block
@property (nonatomic,copy) id toggleChanged;                                           //@synthesize toggleChanged=_toggleChanged - In the implementation block
@property (nonatomic,retain) NSString * artworkKey;                                    //@synthesize artworkKey=_artworkKey - In the implementation block
@property (assign,nonatomic) unsigned long long maximumNumberOfTextLines;              //@synthesize maximumNumberOfTextLines=_maximumNumberOfTextLines - In the implementation block
+(id)titleFont;
-(void)setEnabled:(BOOL)arg1 ;
-(UISwitch *)toggle;
-(void)setToggle:(UISwitch *)arg1 ;
-(void)layoutSubviews;
-(id)_artworkView;
-(void)setupCell;
-(void)toggleOn:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_clearAndHideArtworkView;
-(void)_fetchArtwork;
-(void)_updateSeparatorInsets;
-(void)_layoutContentViewSubviews;
-(void)toggleChanged:(id)arg1 ;
-(BOOL)_showsArtwork;
-(NSString *)artworkKey;
-(BOOL)_loadArtworkFromMemoryCache;
-(void)_fetchArtworkInBackground;
-(void)_asyncFetchArtworkDidLoadImage:(id)arg1 forArtworkKey:(id)arg2 ;
-(void)toggleOn:(BOOL)arg1 ;
-(void)setArtworkKey:(NSString *)arg1 ;
-(void)setMaximumNumberOfTextLines:(unsigned long long)arg1 ;
-(id)toggleChanged;
-(void)setToggleChanged:(id)arg1 ;
-(unsigned long long)maximumNumberOfTextLines;
@end
