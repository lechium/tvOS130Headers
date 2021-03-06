/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:12 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/NSSecureCoding.h>

@class GEOPDBrowseCategory, GEOPDAutocompleteEntry, NSArray, NSData, NSString, GEOFeatureStyleAttributes, NSURL;

@interface GEOSearchCategory : NSObject <NSSecureCoding> {

	GEOPDBrowseCategory* _browseCategory;
	GEOPDAutocompleteEntry* _autocompleteEntry;
	NSArray* _subcategories;

}

@property (getter=_suggestionEntryMetadata,nonatomic,readonly) NSData * suggestionEntryMetadata; 
@property (getter=_autocompleteEntry,nonatomic,readonly) GEOPDAutocompleteEntry * autocompleteEntry;              //@synthesize autocompleteEntry=_autocompleteEntry - In the implementation block
@property (nonatomic,readonly) NSString * displayString; 
@property (nonatomic,readonly) NSString * shortDisplayString; 
@property (nonatomic,readonly) NSString * popularTokenString; 
@property (nonatomic,readonly) GEOFeatureStyleAttributes * styleAttributes; 
@property (nonatomic,readonly) NSArray * subcategories;                                                           //@synthesize subcategories=_subcategories - In the implementation block
@property (nonatomic,readonly) id<GEOVenueIdentifier> venueIdentifier; 
@property (nonatomic,readonly) int displayMode; 
@property (nonatomic,readonly) int sortOrder; 
@property (nonatomic,readonly) int subCategoryType; 
@property (getter=isSubCategorySameAsTopLevel,nonatomic,readonly) BOOL subCategorySameAsTopLevel; 
@property (nonatomic,readonly) NSURL * mapsURL; 
+(BOOL)supportsSecureCoding;
+(id)categoryForURL:(id)arg1 ;
+(void)sendFeedbackForVisibleCategories:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(GEOFeatureStyleAttributes *)styleAttributes;
-(NSURL *)mapsURL;
-(int)sortOrder;
-(id)_suggestionEntryMetadata;
-(id)initWithBrowseCategory:(id)arg1 ;
-(id)initWithAutocompleteEntry:(id)arg1 ;
-(NSString *)displayString;
-(void)sendFeedback;
-(id)_autocompleteEntry;
-(id<GEOVenueIdentifier>)venueIdentifier;
-(id)serverMetadata;
-(id)initWithStorage:(id)arg1 ;
-(NSString *)shortDisplayString;
-(int)displayMode;
-(int)subCategoryType;
-(BOOL)isSubCategorySameAsTopLevel;
-(NSString *)popularTokenString;
-(id)_browseCategory;
-(NSArray *)subcategories;
@end

