/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:25 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/Home-Structs.h>
#import <Home/HFItem.h>
#import <Home/NSCopying.h>

@class NSDictionary;

@interface HFStaticItem : HFItem <NSCopying> {

	NSDictionary* _staticResults;
	/*^block*/id _resultsBlock;

}

@property (nonatomic,retain) NSDictionary * staticResults;              //@synthesize staticResults=_staticResults - In the implementation block
@property (nonatomic,copy) id resultsBlock;                             //@synthesize resultsBlock=_resultsBlock - In the implementation block
+(id)emptyItem;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(id)initWithResultsBlock:(/*^block*/id)arg1 ;
-(id)initWithResults:(id)arg1 ;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(NSDictionary *)staticResults;
-(id)resultsBlock;
-(void)setStaticResults:(NSDictionary *)arg1 ;
-(void)setResultsBlock:(id)arg1 ;
@end
