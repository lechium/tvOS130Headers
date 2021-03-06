/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:14 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtocolBuffer/PBCodable.h>
#import <CoreParsec/_CPProcessableFeedback.h>
#import <CoreParsec/_CPVisibleSectionHeaderFeedback.h>
@class NSString, NSData;


@protocol _CPVisibleSectionHeaderFeedback <NSObject>
@property (assign,nonatomic) unsigned long long timestamp; 
@property (assign,nonatomic) int headerType; 
@property (nonatomic,copy) NSString * sectionId; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(id)initWithDictionary:(id)arg1;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1;
-(NSString *)sectionId;
-(void)setSectionId:(id)arg1;
-(NSData *)jsonData;
-(id)initWithJSON:(id)arg1;
-(int)headerType;
-(void)setHeaderType:(int)arg1;

@end

#import <CoreParsec/NSSecureCoding.h>

@class NSString, NSData, NSDictionary;

@interface _CPVisibleSectionHeaderFeedback : PBCodable <_CPProcessableFeedback, _CPVisibleSectionHeaderFeedback, NSSecureCoding> {

	int _headerType;
	unsigned long long _timestamp;
	NSString* _sectionId;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) id feedbackJSON; 
@property (assign,nonatomic) unsigned long long timestamp; 
@property (assign,nonatomic) int headerType;                                         //@synthesize headerType=_headerType - In the implementation block
@property (nonatomic,copy) NSString * sectionId;                                     //@synthesize sectionId=_sectionId - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)init;
-(id)initWithDictionary:(id)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(NSString *)sectionId;
-(void)setSectionId:(NSString *)arg1 ;
-(NSData *)jsonData;
-(id)initWithFacade:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(int)headerType;
-(void)setHeaderType:(int)arg1 ;
@end

