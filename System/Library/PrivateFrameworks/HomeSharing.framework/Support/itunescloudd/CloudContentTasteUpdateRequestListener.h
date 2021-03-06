/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:50 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <itunescloudd/NSXPCListenerDelegate.h>

@protocol OS_dispatch_queue;
@class NSXPCListener, NSObject, NSOperationQueue, NSMutableDictionary, NSDate, NSString;

@interface CloudContentTasteUpdateRequestListener : NSObject <NSXPCListenerDelegate> {

	NSXPCListener* _listener;
	NSObject*<OS_dispatch_queue> _accessQueue;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	NSOperationQueue* _updateContentTasteOperationQueue;
	NSMutableDictionary* _contentTasteItemsToRetry;
	BOOL _musicAppIsInstalled;
	BOOL _havePendingRetryOperation;
	int _backOffIndex;
	NSDate* _responseExpirationDate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedContentTasteRequestListener;
-(id)init;
-(id)_init;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)start;
-(void)stop;
-(BOOL)_isRetryableError:(id)arg1 ;
-(void)_scheduleContentTasteUpdateOperationForFailedItems;
-(void)_resetState;
-(void)setContentTaste:(long long)arg1 forMediaItem:(long long)arg2 storeIdentifier:(long long)arg3 configuration:(id)arg4 withCompletionHandler:(/*^block*/id)arg5 ;
-(void)setContentTaste:(long long)arg1 forPlaylistGlobalID:(id)arg2 configuration:(id)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(void)setContentTaste:(long long)arg1 forAlbumStoreID:(long long)arg2 configuration:(id)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(void)updateContentTasteForMediaItemsAndInvalidateLocalCache:(BOOL)arg1 configuration:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)handleMusicAppInstalled;
-(void)handleMusicAppRemoved;
-(void)accountDidChange;
-(void)handleContentTasteChangedNotification;
-(void)_updateContentTasteForItems:(id)arg1 invalidatingLocalCache:(BOOL)arg2 configuration:(id)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(void)_handleContentTasteUpdateOperationFinishedWithError:(id)arg1 forRequestItems:(id)arg2 ;
-(void)_scheduleNextContentTasteSyncOperation;
@end

