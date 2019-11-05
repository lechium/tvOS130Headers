/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:52 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Support/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleMediaServices/AMSMetricsEvent.h>

@class NSNumber, NSString, NSArray;

@interface AppUsageMetricsEvent : AMSMetricsEvent {

	NSNumber* _beta;
	unsigned char _appEventType;
	BOOL _hasBeenPosted;
	unsigned char _installationType;
	unsigned char _installType;
	NSString* _tempUserId;
	NSString* _tempDeviceIdentifer;
	NSString* _actorID;
	NSString* _appSessionReporterKey;
	long long _appUsageType;
	NSString* _bundleID;
	NSString* _bundleVersion;
	NSString* _clientEventID;
	NSArray* _clusters;
	NSString* _cohort;
	NSNumber* _collectionTime;
	long long _cumulativeUserCount;
	long long _databaseID;
	long long _duration;
	NSNumber* _evid;
	NSNumber* _eventTimeOverride;
	NSArray* _foregroundEvents;
	NSString* _hardwareFamily;
	NSString* _hardwareModel;
	NSNumber* _itemID;
	NSString* _itemName;
	NSString* _ocelotDeviceID;
	NSString* _ocelotID;
	NSString* _ocelotSubscriptionState;
	NSString* _OS;
	NSString* _osBuild;
	NSString* _platform;
	NSString* _shortVersion;
	NSNumber* _startTime;
	NSNumber* _storefront;
	long long _timeRangeEnd;
	long long _timeRangeStart;
	long long _usageTime;
	long long _usageCount;
	long long _qualifiedDuration;
	NSString* _weekStartDate;

}

@property (nonatomic,copy) NSString * tempUserId;                           //@synthesize tempUserId=_tempUserId - In the implementation block
@property (nonatomic,copy) NSString * tempDeviceIdentifer;                  //@synthesize tempDeviceIdentifer=_tempDeviceIdentifer - In the implementation block
@property (nonatomic,copy) NSString * actorID;                              //@synthesize actorID=_actorID - In the implementation block
@property (assign,nonatomic) unsigned char appEventType;                    //@synthesize appEventType=_appEventType - In the implementation block
@property (nonatomic,copy) NSString * appSessionReporterKey;                //@synthesize appSessionReporterKey=_appSessionReporterKey - In the implementation block
@property (assign,nonatomic) long long appUsageType;                        //@synthesize appUsageType=_appUsageType - In the implementation block
@property (nonatomic,copy) NSString * bundleID;                             //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,copy) NSString * bundleVersion;                        //@synthesize bundleVersion=_bundleVersion - In the implementation block
@property (nonatomic,copy) NSString * clientEventID;                        //@synthesize clientEventID=_clientEventID - In the implementation block
@property (nonatomic,copy) NSArray * clusters;                              //@synthesize clusters=_clusters - In the implementation block
@property (nonatomic,copy) NSString * cohort;                               //@synthesize cohort=_cohort - In the implementation block
@property (nonatomic,copy) NSNumber * collectionTime;                       //@synthesize collectionTime=_collectionTime - In the implementation block
@property (assign,nonatomic) long long cumulativeUserCount;                 //@synthesize cumulativeUserCount=_cumulativeUserCount - In the implementation block
@property (assign,nonatomic) long long databaseID;                          //@synthesize databaseID=_databaseID - In the implementation block
@property (assign,nonatomic) long long duration;                            //@synthesize duration=_duration - In the implementation block
@property (nonatomic,copy) NSNumber * evid;                                 //@synthesize evid=_evid - In the implementation block
@property (nonatomic,copy) NSNumber * eventTimeOverride;                    //@synthesize eventTimeOverride=_eventTimeOverride - In the implementation block
@property (nonatomic,copy) NSArray * foregroundEvents;                      //@synthesize foregroundEvents=_foregroundEvents - In the implementation block
@property (nonatomic,copy) NSString * hardwareFamily;                       //@synthesize hardwareFamily=_hardwareFamily - In the implementation block
@property (nonatomic,copy) NSString * hardwareModel;                        //@synthesize hardwareModel=_hardwareModel - In the implementation block
@property (assign,nonatomic) BOOL hasBeenPosted;                            //@synthesize hasBeenPosted=_hasBeenPosted - In the implementation block
@property (assign,nonatomic) unsigned char installationType;                //@synthesize installationType=_installationType - In the implementation block
@property (assign,nonatomic) unsigned char installType;                     //@synthesize installType=_installType - In the implementation block
@property (nonatomic,copy) NSNumber * itemID;                               //@synthesize itemID=_itemID - In the implementation block
@property (nonatomic,copy) NSString * itemName;                             //@synthesize itemName=_itemName - In the implementation block
@property (nonatomic,copy) NSString * ocelotDeviceID;                       //@synthesize ocelotDeviceID=_ocelotDeviceID - In the implementation block
@property (nonatomic,copy) NSString * ocelotID;                             //@synthesize ocelotID=_ocelotID - In the implementation block
@property (nonatomic,copy) NSString * ocelotSubscriptionState;              //@synthesize ocelotSubscriptionState=_ocelotSubscriptionState - In the implementation block
@property (nonatomic,copy) NSString * OS;                                   //@synthesize OS=_OS - In the implementation block
@property (nonatomic,copy) NSString * osBuild;                              //@synthesize osBuild=_osBuild - In the implementation block
@property (nonatomic,copy) NSString * platform;                             //@synthesize platform=_platform - In the implementation block
@property (nonatomic,copy) NSString * shortVersion;                         //@synthesize shortVersion=_shortVersion - In the implementation block
@property (nonatomic,copy) NSNumber * startTime;                            //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,copy) NSNumber * storefront;                           //@synthesize storefront=_storefront - In the implementation block
@property (assign,nonatomic) long long timeRangeEnd;                        //@synthesize timeRangeEnd=_timeRangeEnd - In the implementation block
@property (assign,nonatomic) long long timeRangeStart;                      //@synthesize timeRangeStart=_timeRangeStart - In the implementation block
@property (assign,nonatomic) long long usageTime;                           //@synthesize usageTime=_usageTime - In the implementation block
@property (assign,nonatomic) long long usageCount;                          //@synthesize usageCount=_usageCount - In the implementation block
@property (assign,nonatomic) long long qualifiedDuration;                   //@synthesize qualifiedDuration=_qualifiedDuration - In the implementation block
@property (nonatomic,copy) NSString * weekStartDate;                        //@synthesize weekStartDate=_weekStartDate - In the implementation block
-(NSNumber *)startTime;
-(NSString *)bundleID;
-(void)setBundleID:(NSString *)arg1 ;
-(void)setStartTime:(NSNumber *)arg1 ;
-(long long)duration;
-(void)setDuration:(long long)arg1 ;
-(NSNumber *)itemID;
-(BOOL)isBeta;
-(unsigned char)installType;
-(NSString *)bundleVersion;
-(id)externalMapping;
-(void)setPlatform:(NSString *)arg1 ;
-(NSString *)platform;
-(void)setBeta:(BOOL)arg1 ;
-(NSArray *)clusters;
-(NSString *)osBuild;
-(void)setOsBuild:(NSString *)arg1 ;
-(void)setBundleVersion:(NSString *)arg1 ;
-(NSString *)hardwareModel;
-(void)setHardwareModel:(NSString *)arg1 ;
-(void)setClusters:(NSArray *)arg1 ;
-(void)setItemID:(NSNumber *)arg1 ;
-(long long)appUsageType;
-(void)setInstallType:(unsigned char)arg1 ;
-(BOOL)requiresDiagnosticSendingPermission;
-(void)setDatabaseID:(long long)arg1 ;
-(long long)databaseID;
-(void)setStorefront:(NSNumber *)arg1 ;
-(NSNumber *)storefront;
-(void)setItemName:(NSString *)arg1 ;
-(NSString *)itemName;
-(id)metricsDictionary;
-(NSNumber *)evid;
-(void)setEvid:(NSNumber *)arg1 ;
-(long long)usageTime;
-(void)setUsageTime:(long long)arg1 ;
-(long long)usageCount;
-(void)setUsageCount:(long long)arg1 ;
-(void)setCohort:(NSString *)arg1 ;
-(void)setHasBeenPosted:(BOOL)arg1 ;
-(void)setShortVersion:(NSString *)arg1 ;
-(void)setWeekStartDate:(NSString *)arg1 ;
-(NSString *)cohort;
-(BOOL)hasBeenPosted;
-(NSString *)shortVersion;
-(NSString *)weekStartDate;
-(unsigned char)installationType;
-(void)setInstallationType:(unsigned char)arg1 ;
-(NSString *)clientEventID;
-(void)setClientEventID:(NSString *)arg1 ;
-(NSString *)hardwareFamily;
-(void)setAppEventType:(unsigned char)arg1 ;
-(NSArray *)foregroundEvents;
-(void)setForegroundEvents:(NSArray *)arg1 ;
-(void)setAppUsageType:(long long)arg1 ;
-(NSString *)ocelotSubscriptionState;
-(NSString *)ocelotDeviceID;
-(void)setOcelotDeviceID:(NSString *)arg1 ;
-(void)setHardwareFamily:(NSString *)arg1 ;
-(void)setOS:(NSString *)arg1 ;
-(void)setOcelotSubscriptionState:(NSString *)arg1 ;
-(void)setQualifiedDuration:(long long)arg1 ;
-(void)setCollectionTime:(NSNumber *)arg1 ;
-(void)setOcelotID:(NSString *)arg1 ;
-(NSString *)ocelotID;
-(void)setEventTimeOverride:(NSNumber *)arg1 ;
-(void)setCumulativeUserCount:(long long)arg1 ;
-(void)setAppSessionReporterKey:(NSString *)arg1 ;
-(void)setTimeRangeStart:(long long)arg1 ;
-(void)setTimeRangeEnd:(long long)arg1 ;
-(NSString *)actorID;
-(void)setActorID:(NSString *)arg1 ;
-(NSString *)appSessionReporterKey;
-(unsigned char)appEventType;
-(NSNumber *)eventTimeOverride;
-(id)_eventForType:(unsigned char)arg1 ;
-(id)_metricsTypeForInstallationType:(unsigned char)arg1 ;
-(id)_typeForMetricsType:(unsigned char)arg1 ;
-(long long)timeRangeEnd;
-(long long)timeRangeStart;
-(NSString *)tempUserId;
-(void)setTempUserId:(NSString *)arg1 ;
-(NSString *)tempDeviceIdentifer;
-(void)setTempDeviceIdentifer:(NSString *)arg1 ;
-(NSNumber *)collectionTime;
-(long long)cumulativeUserCount;
-(NSString *)OS;
-(long long)qualifiedDuration;
@end
