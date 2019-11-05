/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:24 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVPlayback/TVPBaseMediaItem.h>

@class NSURL, NSSet;

@interface TVPURLMediaItem : TVPBaseMediaItem {

	NSURL* _url;
	NSSet* _traits;

}

@property (nonatomic,copy) NSURL * url;                 //@synthesize url=_url - In the implementation block
@property (nonatomic,copy) NSSet * traits;              //@synthesize traits=_traits - In the implementation block
-(id)init;
-(NSURL *)url;
-(void)setUrl:(NSURL *)arg1 ;
-(void)setTraits:(NSSet *)arg1 ;
-(NSSet *)traits;
-(id)initWithURL:(id)arg1 traits:(id)arg2 ;
-(BOOL)isEqualToMediaItem:(id)arg1 ;
-(id)mediaItemURL;
-(BOOL)hasTrait:(id)arg1 ;
@end
