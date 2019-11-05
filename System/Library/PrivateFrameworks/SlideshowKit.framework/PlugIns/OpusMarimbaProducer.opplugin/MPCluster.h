/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:06 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusMarimbaProducer.opplugin/OpusMarimbaProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSMutableSet, NSString, NSMutableDictionary;

@interface MPCluster : NSObject {

	NSMutableArray* mSlides;
	NSMutableSet* mPathsInCluster;
	NSString* mName;
	double mRating;
	NSMutableDictionary* mUsageCounterPerLayer;

}

@property (retain) NSMutableArray * items; 
@property (copy) NSString * name; 
@property (assign) double rating; 
@property (retain) NSMutableDictionary * usageCounterPerLayer; 
-(NSString *)name;
-(id)description;
-(id)init;
-(void)dealloc;
-(void)setName:(NSString *)arg1 ;
-(NSMutableArray *)items;
-(void)setItems:(NSMutableArray *)arg1 ;
-(double)rating;
-(void)detailedDescription;
-(void)setRating:(double)arg1 ;
-(void)removeAllSlides;
-(id)allSlides;
-(long long)slideCount;
-(void)setUsageCountForLayer:(id)arg1 to:(double)arg2 ;
-(id)usageCountDescription;
-(void)addSlide:(id)arg1 ;
-(id)allSlidesSortedByUser;
-(BOOL)clusterContainsSlideAtPath:(id)arg1 ;
-(id)allSlidesSortedChronologically;
-(double)usageCountForLayer:(id)arg1 ;
-(void)resetAllUsageCounters;
-(NSMutableDictionary *)usageCounterPerLayer;
-(void)setUsageCounterPerLayer:(NSMutableDictionary *)arg1 ;
@end
