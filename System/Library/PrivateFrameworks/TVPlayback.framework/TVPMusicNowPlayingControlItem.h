/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:27 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TVPRoundButton, UIImage;

@interface TVPMusicNowPlayingControlItem : NSObject {

	TVPRoundButton* _buttonView;
	UIImage* _image;
	long long _type;
	/*^block*/id _handler;

}

@property (assign,nonatomic) long long type;                               //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) id handler;                                     //@synthesize handler=_handler - In the implementation block
@property (nonatomic,retain) UIImage * image;                              //@synthesize image=_image - In the implementation block
@property (assign,getter=isSelected,nonatomic) BOOL selected; 
+(id)controlItemWithImage:(id)arg1 handler:(/*^block*/id)arg2 ;
+(id)contextControlItem;
-(id)handler;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(id)initWithType:(long long)arg1 ;
-(void)setHandler:(id)arg1 ;
-(BOOL)isSelected;
-(void)setSelected:(BOOL)arg1 ;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(id)buttonView;
@end

