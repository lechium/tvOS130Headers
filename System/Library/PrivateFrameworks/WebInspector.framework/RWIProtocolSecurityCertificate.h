/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:00 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString, NSArray;

@interface RWIProtocolSecurityCertificate : RWIProtocolJSONObject

@property (nonatomic,copy) NSString * subject; 
@property (assign,nonatomic) double validFrom; 
@property (assign,nonatomic) double validUntil; 
@property (nonatomic,copy) NSArray * dnsNames; 
@property (nonatomic,copy) NSArray * ipAddresses; 
-(NSString *)subject;
-(void)setSubject:(NSString *)arg1 ;
-(void)setValidFrom:(double)arg1 ;
-(double)validFrom;
-(void)setValidUntil:(double)arg1 ;
-(double)validUntil;
-(void)setDnsNames:(NSArray *)arg1 ;
-(NSArray *)dnsNames;
-(void)setIpAddresses:(NSArray *)arg1 ;
-(NSArray *)ipAddresses;
@end

