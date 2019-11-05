/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:17 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/NSSecureCoding.h>
#import <MediaPlayer/NSCopying.h>

@class NSString;

@interface MPMediaQuerySection : NSObject <NSSecureCoding, NSCopying> {

	NSString* _title;
	unsigned long long _sectionIndexTitleIndex;
	NSRange _range;

}

@property (nonatomic,copy) NSString * title;                                         //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) NSRange range;                                          //@synthesize range=_range - In the implementation block
@property (assign,nonatomic) unsigned long long sectionIndexTitleIndex;              //@synthesize sectionIndexTitleIndex=_sectionIndexTitleIndex - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_init;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSRange)range;
-(void)setRange:(NSRange)arg1 ;
-(unsigned long long)sectionIndexTitleIndex;
-(void)setSectionIndexTitleIndex:(unsigned long long)arg1 ;
@end
