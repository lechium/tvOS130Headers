/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:16 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PFDispatchQueue;

@interface _PFDQRBEThreadStack : NSObject {

	_PFDQRBEThreadStack* _next;
	unsigned long long _currentIndex;
	PFDispatchQueue* _activeQueues[8];

}
+(void)initialize;
+(id)stackForCurrentThread;
-(BOOL)isEmpty;
-(void)pushQueue:(id)arg1 ;
-(void)popQueue;
-(BOOL)containsQueue:(id)arg1 ;
@end
