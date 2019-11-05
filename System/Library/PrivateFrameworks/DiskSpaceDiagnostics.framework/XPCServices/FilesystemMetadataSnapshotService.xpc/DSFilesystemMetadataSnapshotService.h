/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:34 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/DiskSpaceDiagnostics.framework/XPCServices/FilesystemMetadataSnapshotService.xpc/FilesystemMetadataSnapshotService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FilesystemMetadataSnapshotService/FilesystemMetadataSnapshotService-Structs.h>
#import <FilesystemMetadataSnapshotService/DSFilesystemMetadataSnapshotting.h>

@class NSDictionary, NSMutableDictionary, NSString;

@interface DSFilesystemMetadataSnapshotService : NSObject <DSFilesystemMetadataSnapshotting> {

	BOOL _skipDiskContents;
	long long _onePercentInProgressUnits;
	NSDictionary* _maxProgressUnitsPerPhase;
	NSMutableDictionary* _currentProgressUnitsPerPhase;

}

@property (assign) BOOL skipDiskContents;                                           //@synthesize skipDiskContents=_skipDiskContents - In the implementation block
@property (assign) long long onePercentInProgressUnits;                             //@synthesize onePercentInProgressUnits=_onePercentInProgressUnits - In the implementation block
@property (retain) NSDictionary * maxProgressUnitsPerPhase;                         //@synthesize maxProgressUnitsPerPhase=_maxProgressUnitsPerPhase - In the implementation block
@property (retain) NSMutableDictionary * currentProgressUnitsPerPhase;              //@synthesize currentProgressUnitsPerPhase=_currentProgressUnitsPerPhase - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)saveFilesystemMetadataSnapshotWithReply:(/*^block*/id)arg1 ;
-(id)saveFilesystemMetadataSnapshotWithProgressAndReply:(/*^block*/id)arg1 ;
-(void)refreshPreferences;
-(void)setSkipDiskContents:(BOOL)arg1 ;
-(BOOL)skipDiskContents;
-(NSDictionary *)maxProgressUnitsPerPhase;
-(NSMutableDictionary *)currentProgressUnitsPerPhase;
-(void)setOnePercentInProgressUnits:(long long)arg1 ;
-(void)setMaxProgressUnitsPerPhase:(NSDictionary *)arg1 ;
-(void)setCurrentProgressUnitsPerPhase:(NSMutableDictionary *)arg1 ;
-(void)saveFilesystemMetadataSnapshotWithProgress:(id)arg1 andReply:(/*^block*/id)arg2 ;
-(void)incrementProgress:(id)arg1 phase:(unsigned long long)arg2 percent:(float)arg3 ;
-(int)listDiskContentsToDataFile:(_sFILE*)arg1 withLogFile:(_sFILE*)arg2 progress:(id)arg3 ;
-(BOOL)deleteSnapshotDirectory:(id*)arg1 ;
-(long long)onePercentInProgressUnits;
@end
