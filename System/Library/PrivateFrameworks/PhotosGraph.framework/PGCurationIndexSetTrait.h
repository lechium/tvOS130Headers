/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:29 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGCurationTrait.h>

@class NSIndexSet, NSDictionary;

@interface PGCurationIndexSetTrait : PGCurationTrait {

	NSIndexSet* _indexSet;
	NSDictionary* _thresholdByIdentifier;
	unsigned long long _targetNumberOfMatches;

}

@property (nonatomic,retain) NSDictionary * thresholdByIdentifier;                  //@synthesize thresholdByIdentifier=_thresholdByIdentifier - In the implementation block
@property (nonatomic,readonly) NSIndexSet * indexSet;                               //@synthesize indexSet=_indexSet - In the implementation block
@property (assign,nonatomic) unsigned long long targetNumberOfMatches;              //@synthesize targetNumberOfMatches=_targetNumberOfMatches - In the implementation block
-(id)debugDescription;
-(BOOL)isActive;
-(id)initWithIndexSet:(id)arg1 ;
-(NSIndexSet *)indexSet;
-(id)niceDescription;
-(double)thresholdForSceneIdentifier:(unsigned)arg1 ;
-(NSDictionary *)thresholdByIdentifier;
-(void)setThresholdByIdentifier:(NSDictionary *)arg1 ;
-(unsigned long long)targetNumberOfMatches;
-(void)setTargetNumberOfMatches:(unsigned long long)arg1 ;
@end
