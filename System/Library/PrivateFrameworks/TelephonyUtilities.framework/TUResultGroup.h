/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:31 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TelephonyUtilities/TelephonyUtilities-Structs.h>
#import <TelephonyUtilities/NSCopying.h>

@class TUGroupTitle, NSMutableArray, NSArray;

@interface TUResultGroup : NSObject <NSCopying> {

	TUGroupTitle* _title;
	NSMutableArray* _resultsCache;

}

@property (nonatomic,retain) TUGroupTitle * title;                       //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSMutableArray * resultsCache;              //@synthesize resultsCache=_resultsCache - In the implementation block
@property (readonly) NSArray * results; 
@property (readonly) unsigned long long groupType; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)results;
-(TUGroupTitle *)title;
-(void)setTitle:(TUGroupTitle *)arg1 ;
-(unsigned long long)groupType;
-(id)initWithTitle:(id)arg1 results:(id)arg2 ;
-(void)removeSearchItem:(id)arg1 ;
-(NSMutableArray *)resultsCache;
-(void)setResultsCache:(NSMutableArray *)arg1 ;
@end

