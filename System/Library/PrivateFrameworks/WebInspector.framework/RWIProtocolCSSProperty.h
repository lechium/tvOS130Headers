/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:00 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString, RWIProtocolCSSSourceRange;

@interface RWIProtocolCSSProperty : RWIProtocolJSONObject

@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * value; 
@property (nonatomic,copy) NSString * priority; 
@property (assign,nonatomic) BOOL implicit; 
@property (nonatomic,copy) NSString * text; 
@property (assign,nonatomic) BOOL parsedOk; 
@property (assign,nonatomic) long long status; 
@property (nonatomic,retain) RWIProtocolCSSSourceRange * range; 
+(id)safe_initWithName:(id)arg1 value:(id)arg2 ;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(NSString *)priority;
-(NSString *)value;
-(void)setPriority:(NSString *)arg1 ;
-(void)setValue:(NSString *)arg1 ;
-(long long)status;
-(id)initWithName:(id)arg1 value:(id)arg2 ;
-(RWIProtocolCSSSourceRange *)range;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setStatus:(long long)arg1 ;
-(void)setRange:(RWIProtocolCSSSourceRange *)arg1 ;
-(void)setImplicit:(BOOL)arg1 ;
-(BOOL)implicit;
-(void)setParsedOk:(BOOL)arg1 ;
-(BOOL)parsedOk;
@end

