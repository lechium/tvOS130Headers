/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:47 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class PXRunNode, NSLock;

@interface PXRunNodeOperation : NSOperation {

	unsigned long long _state;
	PXRunNode* _runNode;
	NSLock* __stateLock;

}

@property (nonatomic,readonly) NSLock * _stateLock;              //@synthesize _stateLock=__stateLock - In the implementation block
@property (nonatomic,readonly) PXRunNode * runNode;              //@synthesize runNode=_runNode - In the implementation block
@property (readonly) unsigned long long state;                   //@synthesize state=_state - In the implementation block
+(id)keyPathsForValuesAffectingIsFinished;
+(id)keyPathsForValuesAffectingIsReady;
+(id)keyPathsForValuesAffectingIsExecuting;
-(id)init;
-(unsigned long long)state;
-(void)start;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(BOOL)isReady;
-(BOOL)isAsynchronous;
-(NSLock *)_stateLock;
-(BOOL)_transitionToState:(unsigned long long)arg1 ;
-(id)initWithRunNode:(id)arg1 ;
-(BOOL)cancelIfAble;
-(BOOL)completeIfAble;
-(PXRunNode *)runNode;
@end

