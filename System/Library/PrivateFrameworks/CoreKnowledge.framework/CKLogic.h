/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:10 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreKnowledge.framework/CoreKnowledge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface CKLogic : NSObject {

	 body;
	 negatedBody;

}

@property (readonly,nonatomic) long long hash; 
@property (readonly,nonatomic) NSString * identifier; 
+(id)ifExistsLink:(id)arg1 to:(id)arg2 ;
+(id)ifNotExistsLink:(id)arg1 to:(id)arg2 ;
-(long long)hash;
-(id)init;
-(NSString *)identifier;
-(id)and:(id)arg1 ;
-(id)andExistsLink:(id)arg1 to:(id)arg2 error:(id*)arg3 ;
-(id)andNotExistsLink:(id)arg1 to:(id)arg2 error:(id*)arg3 ;
@end

