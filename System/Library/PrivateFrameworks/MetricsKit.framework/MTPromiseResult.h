/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:44 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSError;

@interface MTPromiseResult : NSObject {

	NSError* _error;
	id _result;

}

@property (nonatomic,copy,readonly) NSError * error;              //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) id result;                         //@synthesize result=_result - In the implementation block
-(NSError *)error;
-(id)result;
-(id)initWithResult:(id)arg1 error:(id)arg2 ;
@end
