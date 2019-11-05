/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:00:52 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/TVPhotos.app/TVPhotos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewDataSource.h>

@class PHAssetCollection, NSMutableDictionary, NSArray, NSIndexPath, NSString;

@interface TVPScreenSaverDataSource : NSObject <UITableViewDataSource> {

	PHAssetCollection* _activityFeedCollection;
	NSMutableDictionary* _fetchResults;
	NSArray* _allowedSubtypes;
	NSArray* _filteredTypeArray;
	NSIndexPath* _selectedIndexPath;

}

@property (nonatomic,retain) NSIndexPath * selectedIndexPath;              //@synthesize selectedIndexPath=_selectedIndexPath - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)setSelectedIndexPath:(NSIndexPath *)arg1 ;
-(NSIndexPath *)selectedIndexPath;
-(void)_fetchPhotoCollections;
-(void)_loadExistingSelection;
-(id)initWithAllowedCollectionSubtypes:(id)arg1 ;
-(id)albumForIndexPath:(id)arg1 ;
@end
