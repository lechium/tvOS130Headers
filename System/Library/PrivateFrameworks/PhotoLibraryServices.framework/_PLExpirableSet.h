/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:24 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet, NSMutableDictionary;

@interface _PLExpirableSet : NSObject {

	NSMutableSet* _set;
	NSMutableDictionary* _recentTouches;
	double _secondsToExpire;

}
-(void)dealloc;
-(void)addObject:(id)arg1 ;
-(void)removeObject:(id)arg1 ;
-(BOOL)containsObject:(id)arg1 ;
-(id)initWithSecondsToExpire:(double)arg1 ;
-(void)_touch:(id)arg1 ;
-(BOOL)_didExpireObject:(id)arg1 ;
@end

