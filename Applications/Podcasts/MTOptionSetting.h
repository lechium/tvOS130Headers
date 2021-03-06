/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:50:21 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/MTSetting.h>

@class MTOptionsDescription, NSString;

@interface MTOptionSetting : MTSetting {

	MTOptionsDescription* _options;
	NSString* _headerTitle;

}

@property (nonatomic,copy) NSString * headerTitle;                        //@synthesize headerTitle=_headerTitle - In the implementation block
@property (nonatomic,retain) MTOptionsDescription * options;              //@synthesize options=_options - In the implementation block
-(MTOptionsDescription *)options;
-(void)setOptions:(MTOptionsDescription *)arg1 ;
-(NSString *)headerTitle;
-(void)setHeaderTitle:(NSString *)arg1 ;
-(id)currentShortTitle;
@end

