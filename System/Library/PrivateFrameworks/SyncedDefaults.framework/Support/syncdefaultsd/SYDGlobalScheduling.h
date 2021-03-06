/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:16 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SyncedDefaults.framework/Support/syncdefaultsd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SYDSchedulingParameters;

@interface SYDGlobalScheduling : NSObject {

	SYDSchedulingParameters* _parameters;
	unsigned long long _entriesSize;
	double* _entries;

}

@property (assign,nonatomic) unsigned long long entriesSize;                    //@synthesize entriesSize=_entriesSize - In the implementation block
@property (assign,nonatomic) double* entries;                                   //@synthesize entries=_entries - In the implementation block
@property (nonatomic,retain) SYDSchedulingParameters * parameters;              //@synthesize parameters=_parameters - In the implementation block
-(void)dealloc;
-(SYDSchedulingParameters *)parameters;
-(double*)entries;
-(void)setEntries:(double*)arg1 ;
-(void)setParameters:(SYDSchedulingParameters *)arg1 ;
-(id)persistentState;
-(id)schedulingDescription;
-(id)initWithPersistentState:(id)arg1 ;
-(void)markSuccessfulSyncUsingNow:(double)arg1 ;
-(double)nextAllowedRefreshDateUsingNow:(double)arg1 ;
-(void)resetUpdateRequests;
-(void)_resizeEntriesWithUpdatedParametersIfNecessary;
-(void)_markEntriesAsIncorrect;
-(unsigned long long)entriesSize;
-(void)setEntriesSize:(unsigned long long)arg1 ;
@end

