/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:15 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SyncedDefaults.framework/SyncedDefaults
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SyncedDefaults/SYDClientProtocol.h>

@protocol SYDClientProtocol;
@interface SYDClientProtocolProxy : NSObject <SYDClientProtocol> {

	id<SYDClientProtocol> _target;

}

@property (assign,nonatomic,__weak) id<SYDClientProtocol> target;              //@synthesize target=_target - In the implementation block
-(void)setTarget:(id<SYDClientProtocol>)arg1 ;
-(id<SYDClientProtocol>)target;
-(id)initWithTarget:(id)arg1 ;
-(void)storeDidChangeWithIdentifier:(id)arg1 type:(long long)arg2 changeDictionary:(id)arg3 reply:(/*^block*/id)arg4 ;
@end

