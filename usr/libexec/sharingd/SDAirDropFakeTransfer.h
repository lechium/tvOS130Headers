/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:54 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SDAirDropAlertManager;
#import <sharingd/sharingd-Structs.h>
@class NSBundle, NSObject;

@interface SDAirDropFakeTransfer : NSObject {

	NSBundle* _bundle;
	BOOL _debugModeEnabled;
	NSObject*<SDAirDropAlertManager> _transferManager;

}

@property (nonatomic,retain) NSObject*<SDAirDropAlertManager> transferManager;              //@synthesize transferManager=_transferManager - In the implementation block
@property (assign,nonatomic) BOOL debugModeEnabled;                                         //@synthesize debugModeEnabled=_debugModeEnabled - In the implementation block
+(id)sharedFakeTransfer;
-(id)init;
-(BOOL)debugModeEnabled;
-(void)setDebugModeEnabled:(BOOL)arg1 ;
-(void)setTransferManager:(NSObject*<SDAirDropAlertManager>)arg1 ;
-(id)writeDataToFile:(id)arg1 ofType:(id)arg2 ;
-(void)startFakeTransferWithItemSources:(id)arg1 ;
-(void)startFakeTransferWithItems:(id)arg1 fromBundleID:(id)arg2 withItemsDescription:(id)arg3 previewImage:(id)arg4 desiredDuration:(float)arg5 totalBytes:(long long)arg6 ;
-(id)generateFakeTransferDataFromBundleID:(id)arg1 files:(id)arg2 items:(id)arg3 itemsDescription:(id)arg4 ;
-(void)addIconPropertiesWithImage:(CGImageRef)arg1 toFakeTransferData:(id)arg2 ;
-(/*^block*/id)createBlockToPerformBlockOnMainQueue:(/*^block*/id)arg1 withDelay:(float)arg2 ;
-(void)addProgressPropertiesWithBytesCopied:(long long)arg1 totalBytes:(long long)arg2 timeRemaining:(long long)arg3 filesCopied:(long long)arg4 toFakeTransferData:(id)arg5 ;
-(void)replaceItemsWithItems:(id)arg1 inFakeTransferData:(id)arg2 ;
-(void)startFakeTransferInCategory:(long long)arg1 ofType:(long long)arg2 ;
-(NSObject*<SDAirDropAlertManager>)transferManager;
@end

