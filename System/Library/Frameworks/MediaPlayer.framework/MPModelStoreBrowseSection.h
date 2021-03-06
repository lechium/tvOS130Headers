/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:19 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPModelObject.h>

@class NSString, NSURL, MPModelStoreBrowseResponse;

@interface MPModelStoreBrowseSection : MPModelObject {

	BOOL _containsOnlyEditorialElements;

}

@property (nonatomic,copy) NSString * title; 
@property (assign,nonatomic) long long sectionType; 
@property (nonatomic,copy) NSURL * loadAdditionalContentURL; 
@property (assign,nonatomic) BOOL displaysAsGridCellInCarPlay; 
@property (assign,nonatomic) long long uniformContentItemType; 
@property (assign,getter=isMemberOfChartSet,nonatomic) BOOL memberOfChartSet; 
@property (assign,getter=isBrick,nonatomic) BOOL brick; 
@property (nonatomic,retain) MPModelStoreBrowseResponse * previouslyRetrievedNestedResponse; 
@property (assign,nonatomic) BOOL containsOnlyEditorialElements;                                          //@synthesize containsOnlyEditorialElements=_containsOnlyEditorialElements - In the implementation block
+(id)__title_KEY;
+(id)__loadAdditionalContentURL_KEY;
+(id)__displaysAsGridCellInCarPlay_KEY;
+(id)__sectionType_KEY;
+(id)__uniformContentItemType_KEY;
+(id)__memberOfChartSet_KEY;
+(id)__brick_KEY;
+(id)__previouslyRetrievedNestedResponse_KEY;
-(BOOL)containsOnlyEditorialElements;
-(void)setContainsOnlyEditorialElements:(BOOL)arg1 ;
@end

