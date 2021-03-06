/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:48 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PXCMMInvitationsDataSourceManager.h>
#import <PhotosUICore/PXPhotoLibraryUIChangeObserver.h>

@protocol OS_dispatch_queue;
@class NSObject, PXCMMMomentsInvitationsDataSourceState, NSMutableOrderedSet, NSString;

@interface PXCMMMomentsInvitationsDataSourceManager : PXCMMInvitationsDataSourceManager <PXPhotoLibraryUIChangeObserver> {

	NSObject*<OS_dispatch_queue> _workerQueue;
	BOOL _isLoading;
	BOOL _hasCreatedInitialDataSource;
	PXCMMMomentsInvitationsDataSourceState* __state;
	NSMutableOrderedSet* __remainingAssetCollectionObjectIDsToFetch;

}

@property (nonatomic,retain) PXCMMMomentsInvitationsDataSourceState * _state;                    //@synthesize _state=__state - In the implementation block
@property (retain) NSMutableOrderedSet * _remainingAssetCollectionObjectIDsToFetch;              //@synthesize _remainingAssetCollectionObjectIDsToFetch=__remainingAssetCollectionObjectIDsToFetch - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)new;
+(id)mockDataSourceManagerFromRecentLargeMoments;
-(id)init;
-(void)dealloc;
-(PXCMMMomentsInvitationsDataSourceState *)_state;
-(id)createInitialDataSource;
-(id)prepareForPhotoLibraryChange:(id)arg1 ;
-(void)photoLibraryDidChangeOnMainQueue:(id)arg1 withPreparedInfo:(id)arg2 ;
-(id)initWithAssetCollectionsFetchResult:(id)arg1 ;
-(void)startLoadingIfNeeded;
-(void)_handleFinishedFetchingBatch:(id)arg1 preparedChangeDetails:(id)arg2 forFetchResult:(id)arg3 ;
-(void)set_state:(PXCMMMomentsInvitationsDataSourceState *)arg1 ;
-(id)assetCollections;
-(id)_createInvitationsDataSourceFromCurrentState;
-(void)_workerQueue_fetchRemainingAssetCollectionsInBatches;
-(NSMutableOrderedSet *)_remainingAssetCollectionObjectIDsToFetch;
-(void)set_remainingAssetCollectionObjectIDsToFetch:(NSMutableOrderedSet *)arg1 ;
@end

