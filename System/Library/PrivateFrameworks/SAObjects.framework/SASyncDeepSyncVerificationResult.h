/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:27 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSString;

@interface SASyncDeepSyncVerificationResult : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSString * key; 
@property (nonatomic,copy) NSString * result; 
@property (nonatomic,copy) NSString * text; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)deepSyncVerificationResult;
+(id)deepSyncVerificationResultWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)key;
-(NSString *)result;
-(void)setKey:(NSString *)arg1 ;
-(id)groupIdentifier;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setResult:(NSString *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
@end

