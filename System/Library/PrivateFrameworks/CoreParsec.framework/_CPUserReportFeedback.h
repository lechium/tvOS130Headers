/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:14 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtocolBuffer/PBCodable.h>
#import <CoreParsec/_CPProcessableFeedback.h>
#import <CoreParsec/_CPUserReportFeedback.h>
@class _CPSearchResultForFeedback, _CPPunchoutForFeedback, _CPCardSectionForFeedback, NSData;


@protocol _CPUserReportFeedback <NSObject>
@property (assign,nonatomic) unsigned long long timestamp; 
@property (nonatomic,retain) _CPSearchResultForFeedback * result; 
@property (nonatomic,retain) _CPPunchoutForFeedback * userSelection; 
@property (nonatomic,retain) _CPCardSectionForFeedback * cardSection; 
@property (nonatomic,copy) NSData * uuidBytes; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(id)initWithDictionary:(id)arg1;
-(_CPSearchResultForFeedback *)result;
-(unsigned long long)timestamp;
-(void)setResult:(id)arg1;
-(void)setTimestamp:(unsigned long long)arg1;
-(_CPPunchoutForFeedback *)userSelection;
-(void)setUserSelection:(id)arg1;
-(NSData *)jsonData;
-(_CPCardSectionForFeedback *)cardSection;
-(void)setCardSection:(id)arg1;
-(id)initWithJSON:(id)arg1;
-(void)setUuidBytes:(id)arg1;
-(NSData *)uuidBytes;

@end

#import <CoreParsec/NSSecureCoding.h>

@class _CPSearchResultForFeedback, _CPPunchoutForFeedback, _CPCardSectionForFeedback, NSData, NSString, NSDictionary;

@interface _CPUserReportFeedback : PBCodable <_CPProcessableFeedback, _CPUserReportFeedback, NSSecureCoding> {

	unsigned long long _timestamp;
	_CPSearchResultForFeedback* _result;
	_CPPunchoutForFeedback* _userSelection;
	_CPCardSectionForFeedback* _cardSection;
	NSData* _uuidBytes;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) id feedbackJSON; 
@property (assign,nonatomic) unsigned long long timestamp; 
@property (nonatomic,retain) _CPSearchResultForFeedback * result;                    //@synthesize result=_result - In the implementation block
@property (nonatomic,retain) _CPPunchoutForFeedback * userSelection;                 //@synthesize userSelection=_userSelection - In the implementation block
@property (nonatomic,retain) _CPCardSectionForFeedback * cardSection;                //@synthesize cardSection=_cardSection - In the implementation block
@property (nonatomic,copy) NSData * uuidBytes;                                       //@synthesize uuidBytes=_uuidBytes - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)init;
-(id)initWithDictionary:(id)arg1 ;
-(_CPSearchResultForFeedback *)result;
-(NSDictionary *)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setResult:(_CPSearchResultForFeedback *)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(_CPPunchoutForFeedback *)userSelection;
-(void)setUserSelection:(_CPPunchoutForFeedback *)arg1 ;
-(NSData *)jsonData;
-(_CPCardSectionForFeedback *)cardSection;
-(void)setCardSection:(_CPCardSectionForFeedback *)arg1 ;
-(id)initWithFacade:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(void)setUuidBytes:(NSData *)arg1 ;
-(NSData *)uuidBytes;
@end

