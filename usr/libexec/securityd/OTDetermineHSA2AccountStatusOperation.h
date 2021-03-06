/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:52 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/securityd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <securityd/securityd-Structs.h>
#import <securityd/CKKSGroupOperation.h>
#import <securityd/OctagonStateTransitionOperationProtocol.h>

@class OTOperationDependencies, NSOperation;

@interface OTDetermineHSA2AccountStatusOperation : CKKSGroupOperation <OctagonStateTransitionOperationProtocol> {

	NSString* _intendedState;
	NSString* _nextState;
	OTOperationDependencies* _deps;
	NSString* _stateIfNotHSA2;
	NSString* _stateIfNoAccount;
	NSOperation* _finishedOp;

}

@property (retain) OTOperationDependencies * deps;                              //@synthesize deps=_deps - In the implementation block
@property (retain) NSString*<OctagonStateString> stateIfNotHSA2;                //@synthesize stateIfNotHSA2=_stateIfNotHSA2 - In the implementation block
@property (retain) NSString*<OctagonStateString> stateIfNoAccount;              //@synthesize stateIfNoAccount=_stateIfNoAccount - In the implementation block
@property (retain) NSOperation * finishedOp;                                    //@synthesize finishedOp=_finishedOp - In the implementation block
@property (retain) NSString*<OctagonStateString> nextState;                     //@synthesize nextState=_nextState - In the implementation block
@property (readonly) NSString*<OctagonStateString> intendedState;               //@synthesize intendedState=_intendedState - In the implementation block
-(void)groupStart;
-(NSString*<OctagonStateString>)intendedState;
-(NSOperation *)finishedOp;
-(void)setFinishedOp:(NSOperation *)arg1 ;
-(OTOperationDependencies *)deps;
-(void)setDeps:(OTOperationDependencies *)arg1 ;
-(id)initWithDependencies:(id)arg1 stateIfHSA2:(NSString*)arg2 stateIfNotHSA2:(NSString*)arg3 stateIfNoAccount:(NSString*)arg4 errorState:(NSString*)arg5 ;
-(NSString*<OctagonStateString>)stateIfNotHSA2;
-(void)setStateIfNotHSA2:(NSString*<OctagonStateString>)arg1 ;
-(NSString*<OctagonStateString>)stateIfNoAccount;
-(void)setStateIfNoAccount:(NSString*<OctagonStateString>)arg1 ;
-(NSString*<OctagonStateString>)nextState;
-(void)setNextState:(NSString*<OctagonStateString>)arg1 ;
@end

