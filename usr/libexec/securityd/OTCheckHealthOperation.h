/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:50 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/securityd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <securityd/securityd-Structs.h>
#import <securityd/CKKSGroupOperation.h>
#import <securityd/OctagonStateTransitionOperationProtocol.h>

@class OTDeviceInformation, OTCuttlefishContext, OTOperationDependencies, NSOperation;

@interface OTCheckHealthOperation : CKKSGroupOperation <OctagonStateTransitionOperationProtocol> {

	BOOL _skipRateLimitingCheck;
	BOOL _postRepairCFU;
	BOOL _postEscrowCFU;
	BOOL _resetOctagon;
	BOOL _requiresEscrowCheck;
	NSString* _intendedState;
	NSString* _nextState;
	OTDeviceInformation* _deviceInfo;
	OTCuttlefishContext* _cuttlefishContext;
	OTOperationDependencies* _deps;
	NSOperation* _finishOp;

}

@property (retain) OTOperationDependencies * deps;                             //@synthesize deps=_deps - In the implementation block
@property (retain) NSOperation * finishOp;                                     //@synthesize finishOp=_finishOp - In the implementation block
@property (assign) BOOL requiresEscrowCheck;                                   //@synthesize requiresEscrowCheck=_requiresEscrowCheck - In the implementation block
@property (retain) NSString*<OctagonStateString> nextState;                    //@synthesize nextState=_nextState - In the implementation block
@property (retain) OTDeviceInformation * deviceInfo;                           //@synthesize deviceInfo=_deviceInfo - In the implementation block
@property (__weak) OTCuttlefishContext * cuttlefishContext;                    //@synthesize cuttlefishContext=_cuttlefishContext - In the implementation block
@property (assign) BOOL skipRateLimitingCheck;                                 //@synthesize skipRateLimitingCheck=_skipRateLimitingCheck - In the implementation block
@property (assign) BOOL postRepairCFU;                                         //@synthesize postRepairCFU=_postRepairCFU - In the implementation block
@property (assign) BOOL postEscrowCFU;                                         //@synthesize postEscrowCFU=_postEscrowCFU - In the implementation block
@property (assign) BOOL resetOctagon;                                          //@synthesize resetOctagon=_resetOctagon - In the implementation block
@property (readonly) NSString*<OctagonStateString> intendedState;              //@synthesize intendedState=_intendedState - In the implementation block
-(void)groupStart;
-(NSString*<OctagonStateString>)intendedState;
-(OTOperationDependencies *)deps;
-(void)setDeps:(OTOperationDependencies *)arg1 ;
-(id)initWithDependencies:(id)arg1 intendedState:(NSString*)arg2 errorState:(NSString*)arg3 deviceInfo:(id)arg4 skipRateLimitedCheck:(BOOL)arg5 ;
-(BOOL)checkIfPasscodeIsSetForDevice;
-(OTCuttlefishContext *)cuttlefishContext;
-(void)setCuttlefishContext:(OTCuttlefishContext *)arg1 ;
-(BOOL)skipRateLimitingCheck;
-(void)setSkipRateLimitingCheck:(BOOL)arg1 ;
-(BOOL)postRepairCFU;
-(void)setPostRepairCFU:(BOOL)arg1 ;
-(BOOL)postEscrowCFU;
-(void)setPostEscrowCFU:(BOOL)arg1 ;
-(BOOL)resetOctagon;
-(void)setResetOctagon:(BOOL)arg1 ;
-(NSOperation *)finishOp;
-(void)setFinishOp:(NSOperation *)arg1 ;
-(BOOL)requiresEscrowCheck;
-(void)setRequiresEscrowCheck:(BOOL)arg1 ;
-(OTDeviceInformation *)deviceInfo;
-(void)setDeviceInfo:(OTDeviceInformation *)arg1 ;
-(NSString*<OctagonStateString>)nextState;
-(void)setNextState:(NSString*<OctagonStateString>)arg1 ;
@end

