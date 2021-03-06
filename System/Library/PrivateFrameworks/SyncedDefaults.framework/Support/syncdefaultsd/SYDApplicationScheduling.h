/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:16 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SyncedDefaults.framework/Support/syncdefaultsd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <syncdefaultsd/syncdefaultsd-Structs.h>
@class SYDSchedulingParameters, SYDApplication;

@interface SYDApplicationScheduling : NSObject {

	BOOL _developmentApp;
	BOOL _disableUntilNextLaunch;
	int _nextSyncReason;
	int _currentSyncReason;
	SYDSchedulingParameters* _parameters;
	SYDApplication* _app;
	unsigned long long _currentSyncIdentifier;
	double _delayedSyncDate;
	unsigned long long _entriesSize;
	SCD_Struct_SY3* _entries;
	double _lastLaunch;

}

@property (assign,nonatomic) SYDApplication * app;                                                      //@synthesize app=_app - In the implementation block
@property (assign,nonatomic) int nextSyncReason;                                                        //@synthesize nextSyncReason=_nextSyncReason - In the implementation block
@property (assign,nonatomic) int currentSyncReason;                                                     //@synthesize currentSyncReason=_currentSyncReason - In the implementation block
@property (assign,nonatomic) unsigned long long currentSyncIdentifier;                                  //@synthesize currentSyncIdentifier=_currentSyncIdentifier - In the implementation block
@property (assign,nonatomic) double delayedSyncDate;                                                    //@synthesize delayedSyncDate=_delayedSyncDate - In the implementation block
@property (assign,nonatomic) unsigned long long entriesSize;                                            //@synthesize entriesSize=_entriesSize - In the implementation block
@property (assign,nonatomic) SCD_Struct_SY3* entries;                                                   //@synthesize entries=_entries - In the implementation block
@property (assign,getter=isDisabledUntilNextLaunch,nonatomic) BOOL disableUntilNextLaunch;              //@synthesize disableUntilNextLaunch=_disableUntilNextLaunch - In the implementation block
@property (assign,nonatomic) double lastLaunch;                                                         //@synthesize lastLaunch=_lastLaunch - In the implementation block
@property (nonatomic,retain) SYDSchedulingParameters * parameters;                                      //@synthesize parameters=_parameters - In the implementation block
@property (assign,nonatomic) BOOL developmentApp;                                                       //@synthesize developmentApp=_developmentApp - In the implementation block
+(id)descriptionForReason:(int)arg1 ;
-(void)dealloc;
-(SYDSchedulingParameters *)parameters;
-(SCD_Struct_SY3*)entries;
-(void)setEntries:(SCD_Struct_SY3*)arg1 ;
-(void)setParameters:(SYDSchedulingParameters *)arg1 ;
-(SYDApplication *)app;
-(void)setApp:(SYDApplication *)arg1 ;
-(id)persistentState;
-(void)setDevelopmentApp:(BOOL)arg1 ;
-(id)initWithApplication:(id)arg1 persistentState:(id)arg2 ;
-(BOOL)disableUntilNextLaunch;
-(void)disableSyncUntil:(double)arg1 ;
-(int)nextSyncReason;
-(id)schedulingDescription;
-(BOOL)requestSyncSoonForReason:(int)arg1 now:(double)arg2 ;
-(double)nextRefreshDateUsingNow:(double)arg1 ;
-(void)didFinishSyncWithIdentifier:(unsigned long long)arg1 success:(BOOL)arg2 now:(double)arg3 ;
-(void)willStartSyncWithIdentifier:(unsigned long long)arg1 ;
-(BOOL)isDisabledUntilNextLaunch;
-(void)resetUpdateRequests;
-(void)_resizeEntriesWithUpdatedParametersIfNecessary;
-(void)_markEntriesAsIncorrect;
-(double)_nextRefreshDateForReason:(int)arg1 usingNow:(double)arg2 ;
-(BOOL)developmentApp;
-(void)setNextSyncReason:(int)arg1 ;
-(int)currentSyncReason;
-(void)setCurrentSyncReason:(int)arg1 ;
-(unsigned long long)currentSyncIdentifier;
-(void)setCurrentSyncIdentifier:(unsigned long long)arg1 ;
-(double)delayedSyncDate;
-(void)setDelayedSyncDate:(double)arg1 ;
-(unsigned long long)entriesSize;
-(void)setEntriesSize:(unsigned long long)arg1 ;
-(void)setDisableUntilNextLaunch:(BOOL)arg1 ;
-(double)lastLaunch;
-(void)setLastLaunch:(double)arg1 ;
@end

