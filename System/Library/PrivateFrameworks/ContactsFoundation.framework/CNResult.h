/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:50 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CNEither, NSError;

@interface CNResult : NSObject {

	CNEither* _either;

}

@property (readonly) CNEither * either;                 //@synthesize either=_either - In the implementation block
@property (readonly) id value; 
@property (copy,readonly) NSError * error; 
@property (readonly) BOOL isSuccess; 
@property (readonly) BOOL isFailure; 
+(id)resultWithValue:(id)arg1 orError:(id)arg2 ;
+(id)resultWithBlock:(/*^block*/id)arg1 ;
+(id)resultWithFuture:(id)arg1 ;
+(id)successWithValue:(id)arg1 ;
+(id)failureWithError:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSError *)error;
-(id)value;
-(id)initWithError:(id)arg1 ;
-(id)initWithValue:(id)arg1 ;
-(BOOL)isSuccess;
-(id)initWithValue:(id)arg1 error:(id)arg2 ;
-(BOOL)isFailure;
-(id)valueWithError:(id*)arg1 ;
-(id)flatMap:(/*^block*/id)arg1 ;
-(id)recover:(/*^block*/id)arg1 ;
-(CNEither *)either;
@end
