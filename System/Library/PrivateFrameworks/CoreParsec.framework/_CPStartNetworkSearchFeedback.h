/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:14 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtocolBuffer/PBCodable.h>
#import <CoreParsec/_CPProcessableFeedback.h>
#import <CoreParsec/_CPFeedbackUUID.h>
#import <CoreParsec/_CPStartNetworkSearchFeedback.h>
@class NSString, NSDictionary, NSData;


@protocol _CPStartNetworkSearchFeedback <NSObject>
@property (assign,nonatomic) unsigned long long timestamp; 
@property (nonatomic,copy) NSString * input; 
@property (nonatomic,copy) NSString * uuid; 
@property (assign,nonatomic) unsigned long long queryId; 
@property (nonatomic,copy) NSString * url; 
@property (nonatomic,copy) NSDictionary * headers; 
@property (assign,nonatomic) int endpoint; 
@property (assign,nonatomic) int triggerEvent; 
@property (assign,nonatomic) int lookupSelectionType; 
@property (assign,nonatomic) int tuscanyStatus; 
@property (nonatomic,copy) NSData * bodyData; 
@property (nonatomic,readonly) NSData * jsonData; 
@property (nonatomic,readonly) unsigned long long whichTrigger; 
@required
-(id)initWithDictionary:(id)arg1;
-(NSData *)bodyData;
-(void)setBodyData:(id)arg1;
-(int)endpoint;
-(void)setEndpoint:(int)arg1;
-(NSString *)url;
-(NSString *)uuid;
-(unsigned long long)timestamp;
-(NSString *)input;
-(void)setTimestamp:(unsigned long long)arg1;
-(void)setInput:(id)arg1;
-(void)setUrl:(id)arg1;
-(void)setUuid:(id)arg1;
-(void)setTriggerEvent:(int)arg1;
-(int)triggerEvent;
-(NSDictionary *)headers;
-(void)setHeaders:(id)arg1;
-(NSData *)jsonData;
-(id)initWithJSON:(id)arg1;
-(void)setQueryId:(unsigned long long)arg1;
-(unsigned long long)queryId;
-(void)setHeaders:(id)arg1 forKey:(id)arg2;
-(void)setLookupSelectionType:(int)arg1;
-(void)setTuscanyStatus:(int)arg1;
-(int)lookupSelectionType;
-(int)tuscanyStatus;
-(BOOL)getHeaders:(id*)arg1 forKey:(id)arg2;
-(unsigned long long)whichTrigger;

@end

#import <CoreParsec/NSSecureCoding.h>

@class NSString, NSDictionary, NSData;

@interface _CPStartNetworkSearchFeedback : PBCodable <_CPProcessableFeedback, _CPFeedbackUUID, _CPStartNetworkSearchFeedback, NSSecureCoding> {

	int _endpoint;
	int _triggerEvent;
	int _lookupSelectionType;
	int _tuscanyStatus;
	unsigned long long _timestamp;
	NSString* _input;
	NSString* _uuid;
	unsigned long long _queryId;
	NSString* _url;
	NSDictionary* _headers;
	NSData* _bodyData;
	unsigned long long _whichTrigger;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) id feedbackJSON; 
@property (assign,nonatomic) unsigned long long timestamp; 
@property (nonatomic,copy,readonly) NSString * uuid; 
@property (nonatomic,copy) NSString * input;                                         //@synthesize input=_input - In the implementation block
@property (nonatomic,copy) NSString * uuid;                                          //@synthesize uuid=_uuid - In the implementation block
@property (assign,nonatomic) unsigned long long queryId;                             //@synthesize queryId=_queryId - In the implementation block
@property (nonatomic,copy) NSString * url;                                           //@synthesize url=_url - In the implementation block
@property (nonatomic,copy) NSDictionary * headers;                                   //@synthesize headers=_headers - In the implementation block
@property (assign,nonatomic) int endpoint;                                           //@synthesize endpoint=_endpoint - In the implementation block
@property (assign,nonatomic) int triggerEvent;                                       //@synthesize triggerEvent=_triggerEvent - In the implementation block
@property (assign,nonatomic) int lookupSelectionType;                                //@synthesize lookupSelectionType=_lookupSelectionType - In the implementation block
@property (assign,nonatomic) int tuscanyStatus;                                      //@synthesize tuscanyStatus=_tuscanyStatus - In the implementation block
@property (nonatomic,copy) NSData * bodyData;                                        //@synthesize bodyData=_bodyData - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
@property (nonatomic,readonly) unsigned long long whichTrigger;                      //@synthesize whichTrigger=_whichTrigger - In the implementation block
+(id)startSearchFeedbackWithUUID;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)init;
-(id)initWithDictionary:(id)arg1 ;
-(NSData *)bodyData;
-(void)setBodyData:(NSData *)arg1 ;
-(int)endpoint;
-(void)setEndpoint:(int)arg1 ;
-(NSString *)url;
-(NSDictionary *)dictionaryRepresentation;
-(NSString *)uuid;
-(unsigned long long)timestamp;
-(NSString *)input;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)setInput:(NSString *)arg1 ;
-(void)setUrl:(NSString *)arg1 ;
-(void)setUuid:(NSString *)arg1 ;
-(void)setTriggerEvent:(int)arg1 ;
-(int)triggerEvent;
-(NSDictionary *)headers;
-(void)setHeaders:(NSDictionary *)arg1 ;
-(NSData *)jsonData;
-(id)initWithFacade:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(void)setQueryId:(unsigned long long)arg1 ;
-(unsigned long long)queryId;
-(id)feedbackJSON;
-(void)clearTrigger;
-(void)setHeaders:(id)arg1 forKey:(id)arg2 ;
-(void)setLookupSelectionType:(int)arg1 ;
-(void)setTuscanyStatus:(int)arg1 ;
-(int)lookupSelectionType;
-(int)tuscanyStatus;
-(BOOL)getHeaders:(id*)arg1 forKey:(id)arg2 ;
-(unsigned long long)whichTrigger;
@end
