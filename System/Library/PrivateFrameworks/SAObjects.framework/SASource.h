/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:32 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSString, NSNumber;

@interface SASource : SADomainObject

@property (nonatomic,copy) NSString * accountIdentifier; 
@property (nonatomic,copy) NSString * accountName; 
@property (nonatomic,copy) NSString * domainIdentifier; 
@property (nonatomic,copy) NSNumber * remote; 
+(id)source;
+(id)sourceWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setDomainIdentifier:(NSString *)arg1 ;
-(NSString *)domainIdentifier;
-(id)groupIdentifier;
-(void)setAccountIdentifier:(NSString *)arg1 ;
-(NSString *)accountIdentifier;
-(NSString *)accountName;
-(void)setAccountName:(NSString *)arg1 ;
-(NSNumber *)remote;
-(void)setRemote:(NSNumber *)arg1 ;
-(id)encodedClassName;
@end

