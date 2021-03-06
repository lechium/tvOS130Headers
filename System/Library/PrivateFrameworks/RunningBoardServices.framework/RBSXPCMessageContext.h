/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:20 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object;
@class NSObject;

@interface RBSXPCMessageContext : NSObject {

	NSObject*<OS_xpc_object> _handoffToken;
	NSObject*<OS_xpc_object> _connection;

}

@property (nonatomic,readonly) NSObject*<OS_xpc_object> connection;              //@synthesize connection=_connection - In the implementation block
+(id)currentContext;
-(NSObject*<OS_xpc_object>)connection;
-(void)_set;
-(void)handoffToQueue:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)_unset;
-(id)_initWithHandoffToken:(id)arg1 ;
@end

