/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:17 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MPMediaLibraryView;

@interface MPMediaLibrarySystemFilters : NSObject {

	MPMediaLibraryView* _libraryView;
	BOOL _shouldExcludePurchaseHistoryContent;

}
+(id)globalSerialQueue;
+(id)systemFiltersPerLibrary;
+(id)filtersForLibrary:(id)arg1 ;
-(void)_updateFilters;
-(id)_initWithLibrary:(id)arg1 ;
-(BOOL)shouldExcludePurchaseHistoryContent;
-(void)_cloudLibraryAvailabilityDidChange:(id)arg1 ;
@end

