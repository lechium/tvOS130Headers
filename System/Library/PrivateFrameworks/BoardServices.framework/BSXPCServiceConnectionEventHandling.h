/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:17 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/BoardServices.framework/BoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BSXPCServiceConnectionEventHandling <NSObject>
@required
-(void)connection:(id)arg1 handleConnection:(id)arg2;
-(void)connectionHandleNoMoreChildren:(id)arg1;
-(void)connection:(id)arg1 handleError:(id)arg2;
-(void)connection:(id)arg1 handleMessage:(id)arg2;
-(void)connectionActivated:(id)arg1;
-(void)connectionInterrupted:(id)arg1;
-(void)connectionInvalidated:(id)arg1;

@end
