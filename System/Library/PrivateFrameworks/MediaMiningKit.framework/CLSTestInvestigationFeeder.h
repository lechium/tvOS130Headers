/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:22 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaMiningKit/CLSInvestigationFeeder.h>

@class NSArray;

@interface CLSTestInvestigationFeeder : CLSInvestigationFeeder {

	NSArray* _items;

}
-(id)initWithItems:(id)arg1 ;
-(id)itemAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)numberOfItems;
-(id)allItems;
-(id)approximateLocation;
-(void)enumerateItemsUsingBlock:(/*^block*/id)arg1 ;
-(id)localStartDateComponents;
-(id)localEndDateComponents;
-(void)enumerateItemsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
@end

