/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:13 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtocolBuffer/PBCodable.h>
#import <CoreParsec/_CPProcessableFeedback.h>
#import <CoreParsec/_CPErrorFeedback.h>
@class _CPError, NSData;


@protocol _CPErrorFeedback <NSObject>
@property (assign,nonatomic) unsigned long long timestamp; 
@property (nonatomic,retain) _CPError * error; 
@property (nonatomic,retain) _CPError * underlyingError; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(id)initWithDictionary:(id)arg1;
-(_CPError *)error;
-(void)setError:(id)arg1;
-(void)setUnderlyingError:(id)arg1;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1;
-(_CPError *)underlyingError;
-(NSData *)jsonData;
-(id)initWithJSON:(id)arg1;

@end

#import <CoreParsec/NSSecureCoding.h>

@class _CPError, NSData, NSString, NSDictionary;

@interface _CPErrorFeedback : PBCodable <_CPProcessableFeedback, _CPErrorFeedback, NSSecureCoding> {

	unsigned long long _timestamp;
	_CPError* _error;
	_CPError* _underlyingError;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) id feedbackJSON; 
@property (assign,nonatomic) unsigned long long timestamp; 
@property (nonatomic,retain) _CPError * error;                                       //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) _CPError * underlyingError;                             //@synthesize underlyingError=_underlyingError - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)init;
-(id)initWithDictionary:(id)arg1 ;
-(_CPError *)error;
-(void)setError:(_CPError *)arg1 ;
-(void)setUnderlyingError:(_CPError *)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)initWithError:(id)arg1 ;
-(_CPError *)underlyingError;
-(NSData *)jsonData;
-(id)initWithFacade:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
@end

