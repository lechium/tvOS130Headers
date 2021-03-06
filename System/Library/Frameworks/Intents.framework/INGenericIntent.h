/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:57 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSDictionary;


@protocol INGenericIntent <NSObject,NSCopying,NSSecureCoding>
@property (nonatomic,copy) NSString * domain; 
@property (nonatomic,copy) NSString * verb; 
@property (nonatomic,copy) NSDictionary * parametersByName; 
@required
-(NSString *)domain;
-(void)setDomain:(id)arg1;
-(NSString *)verb;
-(void)setVerb:(id)arg1;
-(NSDictionary *)parametersByName;
-(void)setParametersByName:(id)arg1;
-(BOOL)isGenericIntent;

@end

