/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:08 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtocolBuffer/ProtocolBuffer-Structs.h>
#import <ProtocolBuffer/NSSecureCoding.h>

@class NSData;

@interface PBCodable : NSObject <NSSecureCoding>

@property (nonatomic,readonly) NSData * data; 
+(void)load;
+(id)options;
+(BOOL)supportsSecureCoding;
-(id)debugRequestName;
-(id)hack_formattedText;
-(void)_CKLogToFileHandle:(id)arg1 atDepth:(int)arg2 ;
-(BOOL)_hasIvar:(objc_ivarRef)arg1 ;
-(id)initWithOSStateData:(void*)arg1 length:(int)arg2 ;
-(os_state_data_s*)copyOSStateDataWithTitle:(const char*)arg1 ;
-(id)jsonString;
-(id)mr_valueForPotentiallyUndefinedKey:(id)arg1 ;
-(void)setClientMetricsIfSupported:(id)arg1 ;
-(id)si_dictionaryRepresentation;
-(id)initWithCPLArchiver:(id)arg1 ;
-(id)plistArchiveWithCPLArchiver:(id)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(NSData *)data;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)formattedText;
@end

