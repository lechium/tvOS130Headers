/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:40 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface NSFilePresenterOperationRecord : NSObject {

	NSString* operationDescription;
	long long state;
	id reactor;

}

@property (readonly) NSString * operationDescription; 
@property (readonly) long long state; 
@property (assign) id reactor; 
+(id)operationRecordWithDescription:(id)arg1 ;
-(id)description;
-(void)dealloc;
-(long long)state;
-(void)setReactor:(id)arg1 ;
-(void)didBegin;
-(void)didEnd;
-(void)willEnd;
-(id)reactor;
-(NSString *)operationDescription;
-(id)_reactorQueue;
@end

