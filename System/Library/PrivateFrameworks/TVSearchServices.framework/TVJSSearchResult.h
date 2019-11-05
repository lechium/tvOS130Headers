/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:28 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/TVSearchServices.framework/TVSearchServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSURL, NSArray, TVSSSearchResultBatch;


@protocol TVJSSearchResult <JSExport>
@property (nonatomic,readonly) BOOL showBrowseResults; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSURL * queryURL; 
@property (nonatomic,copy,readonly) NSArray * contentItems; 
@property (nonatomic,readonly) TVSSSearchResultBatch * initialBatch; 
@property (nonatomic,copy,readonly) NSArray * relatedContentQueries; 
@required
-(NSString *)title;
-(NSArray *)contentItems;
-(BOOL)showBrowseResults;
-(NSURL *)queryURL;
-(TVSSSearchResultBatch *)initialBatch;
-(NSArray *)relatedContentQueries;

@end
