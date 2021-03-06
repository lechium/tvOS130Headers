/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:36 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, UIImage;

@interface AVNowPlayingChapter : NSObject {

	double _startTime;
	NSString* _title;
	UIImage* _image;

}

@property (nonatomic,readonly) double startTime;              //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,readonly) NSString * title;              //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) UIImage * image;               //@synthesize image=_image - In the implementation block
-(double)startTime;
-(NSString *)title;
-(UIImage *)image;
-(id)initWithStartTime:(double)arg1 title:(id)arg2 image:(id)arg3 ;
@end

