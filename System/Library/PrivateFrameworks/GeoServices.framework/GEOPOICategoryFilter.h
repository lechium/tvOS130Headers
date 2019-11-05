/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:03 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GEOSearchFilter.h>
#import <GeoServices/GEOAutocompleteFilter.h>

@class NSArray;

@interface GEOPOICategoryFilter : NSObject <GEOSearchFilter, GEOAutocompleteFilter> {

	NSArray* _categoriesToInclude;
	NSArray* _categoriesToExclude;

}

@property (nonatomic,readonly) NSArray * categoriesToInclude;              //@synthesize categoriesToInclude=_categoriesToInclude - In the implementation block
@property (nonatomic,readonly) NSArray * categoriesToExclude;              //@synthesize categoriesToExclude=_categoriesToExclude - In the implementation block
+(id)filterIncludingAllCategories;
+(id)filterExcludingAllCategories;
-(id)initWithCategoriesToInclude:(id)arg1 categoriesToExclude:(id)arg2 ;
-(BOOL)applyToSearchParameters:(id)arg1 error:(id*)arg2 ;
-(BOOL)applyToAutocompleteParameters:(id)arg1 error:(id*)arg2 ;
-(BOOL)shouldDisplayPOIWithType:(int)arg1 ;
-(NSArray *)categoriesToInclude;
-(NSArray *)categoriesToExclude;
@end
