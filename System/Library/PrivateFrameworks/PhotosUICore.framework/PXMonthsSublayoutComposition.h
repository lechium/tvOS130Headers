/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:50 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PXGGeneratedSublayoutComposition.h>

@class NSIndexSet, PXMonthsLayoutGenerator, PXMonthsLayoutMetrics;

@interface PXMonthsSublayoutComposition : PXGGeneratedSublayoutComposition {

	NSIndexSet* _indexesOfChapterHeaders;
	NSIndexSet* _indexesOfHeroes;
	PXMonthsLayoutGenerator* _layoutGenerator;
	PXMonthsLayoutMetrics* _metrics;

}

@property (nonatomic,copy) PXMonthsLayoutMetrics * metrics;              //@synthesize metrics=_metrics - In the implementation block
@property (nonatomic,readonly) BOOL presentedSingleColumn; 
-(PXMonthsLayoutMetrics *)metrics;
-(void)setMetrics:(PXMonthsLayoutMetrics *)arg1 ;
-(id)configuredLayoutGenerator;
-(BOOL)presentedSingleColumn;
-(void)updateSublayoutAttributes;
@end

