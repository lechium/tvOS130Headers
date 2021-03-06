/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:46 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/locationd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <locationd/locationd-Structs.h>
#import <LocationSupport/CLIntersiloService.h>
#import <locationd/CLRunningAggregatorAWDServiceProtocol.h>

@class NSString;

@interface CLRunningAggregatorAWD : CLIntersiloService <CLRunningAggregatorAWDServiceProtocol> {

	BOOL fHasRun;
	BOOL fInSession;
	deque<std::__1::pair<double, double>, std::__1::allocator<std::__1::pair<double, double> > >* fStepWindow;
	unique_ptr<CLStepCountNotifier_Type::Client, std::__1::default_delete<CLStepCountNotifier_Type::Client> >* fStepCountClient;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL valid; 
+(void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2 ;
+(id)getSilo;
+(void)performSyncOnSilo:(id)arg1 invoker:(/*^block*/id)arg2 ;
-(id)init;
-(void)beginService;
-(void)endService;
-(void)updateSession:(long long)arg1 ;
-(BOOL)syncgetCompanionOnlyNoGPSRun;
-(void)clearStepArray;
-(void)ageOutStepArray;
-(void)checkForRunningThreshold;
-(void)onStepNotification:(int)arg1 data:(NotificationData*)arg2 ;
@end

