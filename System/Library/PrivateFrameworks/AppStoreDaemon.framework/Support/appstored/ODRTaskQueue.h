/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:47 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Support/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TaskQueue;

@interface ODRTaskQueue : NSObject {

	TaskQueue* _queue;

}
+(id)queueForQualityOfService:(long long)arg1 ;
+(const char*)_descriptionForQualityOfService:(long long)arg1 ;
+(void)addTask:(id)arg1 withQualityOfService:(long long)arg2 ;
-(id)init;
-(void)_setName:(id)arg1 ;
-(void)addTask:(id)arg1 ;
-(void)_setQualityOfService:(long long)arg1 ;
@end

