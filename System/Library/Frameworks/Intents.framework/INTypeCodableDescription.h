/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:51 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/INCodableDescription.h>

@class NSString;

@interface INTypeCodableDescription : INCodableDescription {

	NSString* _displayName;
	NSString* _displayNameLocID;

}

@property (nonatomic,copy) NSString * displayName;                                //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy) NSString * displayNameLocID;                           //@synthesize displayNameLocID=_displayNameLocID - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedDisplayName; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)displayName;
-(NSString *)localizedDisplayName;
-(void)setDisplayName:(NSString *)arg1 ;
-(id)keyPrefix;
-(void)updateWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentationForLanguage:(id)arg1 ;
-(id)_attributeKeyPrefix;
-(id)_attributesKeyPrefix;
-(id)localizedDisplayNameForLanguage:(id)arg1 ;
-(NSString *)displayNameLocID;
-(void)setDisplayNameLocID:(NSString *)arg1 ;
@end
