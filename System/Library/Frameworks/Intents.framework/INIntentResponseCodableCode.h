/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:00 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/NSSecureCoding.h>
#import <Intents/INCodableCoding.h>

@class NSString, INIntentResponseCodableDescription, NSArray;

@interface INIntentResponseCodableCode : NSObject <NSSecureCoding, INCodableCoding> {

	BOOL _success;
	long long _value;
	NSString* _name;
	NSString* _formatString;
	NSString* _formatStringLocID;
	NSString* _conciseFormatString;
	NSString* _conciseFormatStringLocID;
	INIntentResponseCodableDescription* __responseCodableDescription;

}

@property (assign,setter=_setResponseCodableDescription:,nonatomic,__weak) INIntentResponseCodableDescription * _responseCodableDescription;              //@synthesize _responseCodableDescription=__responseCodableDescription - In the implementation block
@property (assign,nonatomic) long long value;                                                                                                             //@synthesize value=_value - In the implementation block
@property (nonatomic,copy) NSString * name;                                                                                                               //@synthesize name=_name - In the implementation block
@property (assign,getter=isSuccess,nonatomic) BOOL success;                                                                                               //@synthesize success=_success - In the implementation block
@property (nonatomic,copy) NSString * formatString;                                                                                                       //@synthesize formatString=_formatString - In the implementation block
@property (nonatomic,copy) NSString * formatStringLocID;                                                                                                  //@synthesize formatStringLocID=_formatStringLocID - In the implementation block
@property (nonatomic,copy) NSString * conciseFormatString;                                                                                                //@synthesize conciseFormatString=_conciseFormatString - In the implementation block
@property (nonatomic,copy) NSString * conciseFormatStringLocID;                                                                                           //@synthesize conciseFormatStringLocID=_conciseFormatStringLocID - In the implementation block
@property (nonatomic,readonly) NSArray * parameterNames; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSString *)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(long long)value;
-(void)setValue:(long long)arg1 ;
-(id)dictionaryRepresentation;
-(void)setSuccess:(BOOL)arg1 ;
-(BOOL)isSuccess;
-(id)keyPrefix;
-(id)dictionaryKeyForKeyPath:(id)arg1 ;
-(void)updateWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentationForLanguage:(id)arg1 ;
-(NSString *)formatString;
-(void)setFormatString:(NSString *)arg1 ;
-(NSArray *)parameterNames;
-(id)_parameterNamesFromString:(id)arg1 ;
-(NSString *)formatStringLocID;
-(void)setFormatStringLocID:(NSString *)arg1 ;
-(NSString *)conciseFormatString;
-(void)setConciseFormatString:(NSString *)arg1 ;
-(NSString *)conciseFormatStringLocID;
-(void)setConciseFormatStringLocID:(NSString *)arg1 ;
-(INIntentResponseCodableDescription *)_responseCodableDescription;
-(void)_setResponseCodableDescription:(id)arg1 ;
@end

