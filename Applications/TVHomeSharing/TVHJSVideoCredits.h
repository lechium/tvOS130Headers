/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 12:49:52 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/TVHomeSharing.app/TVHomeSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKJSObject.h>
#import <TVHomeSharing/TVHJSVideoCredits.h>
@class NSArray;


@protocol TVHJSVideoCredits <JSExport>
@property (nonatomic,copy,readonly) NSArray * actors; 
@property (nonatomic,copy,readonly) NSArray * directors; 
@property (nonatomic,copy,readonly) NSArray * producers; 
@property (nonatomic,copy,readonly) NSArray * screenwriters; 
@property (nonatomic,readonly) BOOL hasCredits; 
@required
-(NSArray *)actors;
-(NSArray *)directors;
-(NSArray *)producers;
-(NSArray *)screenwriters;
-(BOOL)hasCredits;

@end


@class NSArray, TVHKVideoCredits;

@interface TVHJSVideoCredits : IKJSObject <TVHJSVideoCredits> {

	TVHKVideoCredits* _videoCredits;

}

@property (nonatomic,retain) TVHKVideoCredits * videoCredits;              //@synthesize videoCredits=_videoCredits - In the implementation block
@property (nonatomic,copy,readonly) NSArray * actors; 
@property (nonatomic,copy,readonly) NSArray * directors; 
@property (nonatomic,copy,readonly) NSArray * producers; 
@property (nonatomic,copy,readonly) NSArray * screenwriters; 
@property (nonatomic,readonly) BOOL hasCredits; 
-(id)init;
-(NSArray *)actors;
-(NSArray *)directors;
-(NSArray *)producers;
-(NSArray *)screenwriters;
-(id)initWithAppContext:(id)arg1 ;
-(TVHKVideoCredits *)videoCredits;
-(BOOL)hasCredits;
-(void)setVideoCredits:(TVHKVideoCredits *)arg1 ;
-(id)initWithVideoCredits:(id)arg1 appContext:(id)arg2 ;
@end

