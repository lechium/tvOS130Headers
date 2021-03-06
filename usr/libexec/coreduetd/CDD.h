/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:33 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/coreduetd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
#import <coreduetd/coreduetd-Structs.h>
@class CDDCommunicator, CDDPrivacyMonitor, NSObject, CDDConfig, CDDebug, CDDWatchUpdateController;

@interface CDD : NSObject {

	CDDCommunicator* communicator;
	CDDPrivacyMonitor* privacyMonitor;
	NSObject*<OS_dispatch_queue> cullingTimerQueue;
	NSObject*<OS_dispatch_source> cullingTimer;
	NSObject*<OS_dispatch_queue> logQueue;
	CDDConfig* config;
	CDDebug* debug;
	BOOL isIdle;
	int notificationOTAToken;
	int settingsToken;
	int bundleIdRetryToken;
	int localAppChangeToken;
	BOOL classCLocked;
	BOOL passcodeLocked;
	BOOL inClassroomMode;
	CDDWatchUpdateController* watchUpdate;

}

@property (nonatomic,readonly) CDDebug * debug; 
@property (assign) BOOL isIdle; 
@property (nonatomic,readonly) CDDConfig * config; 
@property (nonatomic,readonly) CDDCommunicator * communicator; 
@property (nonatomic,readonly) CDDPrivacyMonitor * privacyMonitor; 
@property (nonatomic,readonly) CDDWatchUpdateController * watchUpdate; 
@property (readonly) BOOL classCLocked; 
@property (readonly) BOOL passcodeLocked; 
@property (readonly) BOOL inClassroomMode; 
+(id)sharedInstance;
+(id)fetchTemplateWithKey:(id)arg1 OnContext:(id)arg2 withEntityNamed:(id)arg3 predicateString:(id)arg4 parameters:(id)arg5 batchSize:(unsigned long long)arg6 ;
-(id)init;
-(void)dealloc;
-(CDDConfig *)config;
-(BOOL)isLocked;
-(CDDebug *)debug;
-(id)knowledgeStore;
-(BOOL)isClassCLocked;
-(BOOL)isIdle;
-(void)dumpAll;
-(void)setIsIdle:(BOOL)arg1 ;
-(BOOL)classCLocked;
-(CDDWatchUpdateController *)watchUpdate;
-(CDDPrivacyMonitor *)privacyMonitor;
-(CDDCommunicator *)communicator;
-(BOOL)isSupportedQueryForStatistic:(long long)arg1 repeated:(BOOL)arg2 ;
-(id)statistic:(long long)arg1 forParameters:(SCD_Struct_CD2*)arg2 repeated:(BOOL)arg3 ;
-(id)pmfOverHourOfDayWithParams:(SCD_Struct_CD2*)arg1 ;
-(void)saveRemoteInBedTimes:(id)arg1 ;
-(BOOL)saveForecast:(id)arg1 queryParameters:(SCD_Struct_CD2*)arg2 deviceIdentifier:(id)arg3 error:(id*)arg4 ;
-(BOOL)classroomModeCheck;
-(BOOL)readConfigParamsFromPlist;
-(void)setDefaultConfigParams;
-(void)classCAndPasscodeCheck;
-(id)computeDatabaseAge;
-(void)setupCommunicator;
-(unsigned long long)calculateActualStartEpoch:(unsigned long long)arg1 endepoch:(unsigned long long)arg2 recurrenceInterval:(unsigned long long)arg3 ;
-(id)knowledgeQueryStatistic:(long long)arg1 forParameters:(SCD_Struct_CD2*)arg2 repeated:(BOOL)arg3 ;
-(id)repeatedLastValueForBatteryLevelWithParameters:(SCD_Struct_CD2*)arg1 ;
-(id)histogramOfCountsFromForecast:(id)arg1 ;
-(id)retrieveHistogram;
-(id)newRemoteForecastHistogram;
-(void)loadParamsFromDict:(id)arg1 userDefaults:(id)arg2 ;
-(unsigned)hashFromDeviceDescription:(id)arg1 ;
-(void)stuffDictionary:(id*)arg1 withBasisObject:(id)arg2 xpcKey:(const char*)arg3 ;
-(id)retrieveForecast:(SCD_Struct_CD2*)arg1 withTemporalLeeway:(double)arg2 identifier:(unsigned)arg3 error:(id*)arg4 ;
-(id)getTransactionWithIdentifier:(unsigned long long)arg1 ;
-(id)findOrAllocIntegerIdForDeviceDescription:(id)arg1 ;
-(void)setDatabaseAge:(id)arg1 ;
-(BOOL)passcodeLocked;
-(BOOL)inClassroomMode;
@end

