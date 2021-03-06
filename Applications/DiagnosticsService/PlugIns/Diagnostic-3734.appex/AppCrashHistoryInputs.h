/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:48:19 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/DiagnosticsService.app/PlugIns/Diagnostic-3734.appex/Diagnostic-3734
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Diagnostic-3734/DKDiagnosticInputs.h>

@class NSArray, NSSet, NSString;

@interface AppCrashHistoryInputs : NSObject <DKDiagnosticInputs> {

	int _minCrashesToConsider;
	int _avgCrashesToConsider;
	NSArray* _logIds;
	NSSet* _whitelist;

}

@property (assign,nonatomic) int minCrashesToConsider;              //@synthesize minCrashesToConsider=_minCrashesToConsider - In the implementation block
@property (assign,nonatomic) int avgCrashesToConsider;              //@synthesize avgCrashesToConsider=_avgCrashesToConsider - In the implementation block
@property (nonatomic,retain) NSArray * logIds;                      //@synthesize logIds=_logIds - In the implementation block
@property (nonatomic,retain) NSSet * whitelist;                     //@synthesize whitelist=_whitelist - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSSet *)whitelist;
-(void)setWhitelist:(NSSet *)arg1 ;
-(BOOL)validateAndInitializeParameters:(id)arg1 ;
-(BOOL)_applyCrashTypesParameter:(id)arg1 ;
-(BOOL)_applyWhitelistParameter:(id)arg1 ;
-(void)setMinCrashesToConsider:(int)arg1 ;
-(void)setAvgCrashesToConsider:(int)arg1 ;
-(void)setLogIds:(NSArray *)arg1 ;
-(int)minCrashesToConsider;
-(int)avgCrashesToConsider;
-(NSArray *)logIds;
@end

