/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:49 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface VUIPostPlayConfig : NSObject {

	double _bootstrapInterval;
	double _documentUpdateOffsetInterval;
	unsigned long long _maximumAutoPlayableItems;
	double _duration;

}

@property (assign,nonatomic) double bootstrapInterval;                                 //@synthesize bootstrapInterval=_bootstrapInterval - In the implementation block
@property (assign,nonatomic) double documentUpdateOffsetInterval;                      //@synthesize documentUpdateOffsetInterval=_documentUpdateOffsetInterval - In the implementation block
@property (assign,nonatomic) unsigned long long maximumAutoPlayableItems;              //@synthesize maximumAutoPlayableItems=_maximumAutoPlayableItems - In the implementation block
@property (assign,nonatomic) double duration;                                          //@synthesize duration=_duration - In the implementation block
-(id)init;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(double)documentUpdateOffsetInterval;
-(unsigned long long)maximumAutoPlayableItems;
-(double)bootstrapInterval;
-(void)setBootstrapInterval:(double)arg1 ;
-(void)setDocumentUpdateOffsetInterval:(double)arg1 ;
-(void)setMaximumAutoPlayableItems:(unsigned long long)arg1 ;
@end
