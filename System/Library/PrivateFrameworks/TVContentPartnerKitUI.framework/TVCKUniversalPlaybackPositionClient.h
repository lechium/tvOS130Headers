/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:18 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/TVContentPartnerKitUI.framework/TVContentPartnerKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVContentPartnerKitUI/SBKUniversalPlaybackPositionDataSource.h>

@class SBKUniversalPlaybackPositionStore, NSLock, ATVUPPClientState, NSString;

@interface TVCKUniversalPlaybackPositionClient : NSObject <SBKUniversalPlaybackPositionDataSource> {

	SBKUniversalPlaybackPositionStore* _uppStore;
	id _activeAccountOrNull;
	double _lastSyncTimestamp;
	BOOL _needsSync;
	NSLock* _stateLock;
	ATVUPPClientState* _state;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (retain) ATVUPPClientState * state;                       //@synthesize state=_state - In the implementation block
+(id)defaultClient;
-(id)init;
-(void)dealloc;
-(ATVUPPClientState *)state;
-(void)setState:(ATVUPPClientState *)arg1 ;
-(void)synchronize:(/*^block*/id)arg1 ;
-(id)allRecords;
-(void)cancelUniversalPlaybackPositionTransaction:(id)arg1 ;
-(id)beginTransactionWithItemsToSyncEnumerationBlock:(/*^block*/id)arg1 ;
-(void)commitUniversalPlaybackPositionTransaction:(id)arg1 domainVersion:(id)arg2 metadataEnumerationBlock:(/*^block*/id)arg3 ;
-(id)recordForBookmarkKey:(id)arg1 ;
-(void)writeItems:(id)arg1 ;
-(id)ActiveStoreAccountBinding;
-(void)tvs_bindActiveStoreAccountBindingToObject:(id)arg1 withKeyPath:(id)arg2 options:(id)arg3 ;
-(void)_setNeedsSync;
-(void)_updateBoundActiveStoreAccount;
-(id)recordForItemIdentifier:(id)arg1 mediaType:(id)arg2 podcastURL:(id)arg3 podcastGUID:(id)arg4 ;
@end

