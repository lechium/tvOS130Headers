/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:35 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <NetworkExtension/NEPrettyDescription.h>
#import <NetworkExtension/NSCopying.h>
#import <NetworkExtension/NSSecureCoding.h>

@class NSString, NSData;

@interface NEKeychainItem : NSObject <NEPrettyDescription, NSCopying, NSSecureCoding> {

	NSString* _password;
	NSString* _identifier;
	NSData* _persistentReference;
	BOOL _legacy;
	long long _domain;
	NSString* _accessGroup;
	NEKeychainItem* _oldItem;

}

@property (copy) NEKeychainItem * oldItem;                  //@synthesize oldItem=_oldItem - In the implementation block
@property (readonly) BOOL legacy;                           //@synthesize legacy=_legacy - In the implementation block
@property (assign) long long domain;                        //@synthesize domain=_domain - In the implementation block
@property (copy) NSString * identifier; 
@property (copy) NSString * password; 
@property (copy) NSData * persistentReference; 
@property (copy) NSString * accessGroup;                    //@synthesize accessGroup=_accessGroup - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)domain;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)password;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setPassword:(NSString *)arg1 ;
-(void)setDomain:(long long)arg1 ;
-(void)remove;
-(NSString *)accessGroup;
-(void)setAccessGroup:(NSString *)arg1 ;
-(BOOL)legacy;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(id)initWithPassword:(id)arg1 domain:(long long)arg2 accessGroup:(id)arg3 ;
-(void)syncUsingConfiguration:(id)arg1 accountName:(id)arg2 passwordType:(long long)arg3 identifierSuffix:(id)arg4 ;
-(NSData *)persistentReference;
-(id)initWithIdentifier:(id)arg1 domain:(long long)arg2 accessGroup:(id)arg3 ;
-(id)initWithPersistentReference:(id)arg1 domain:(long long)arg2 accessGroup:(id)arg3 ;
-(id)initWithLegacyIdentifier:(id)arg1 domain:(long long)arg2 accessGroup:(id)arg3 ;
-(id)copyQueryWithReturnTypes:(id)arg1 ;
-(BOOL)copyDataFromKeychainItem:(void*)arg1 outPassword:(id*)arg2 outIdentifier:(id*)arg3 outPersistentReference:(id*)arg4 ;
-(id)copyKindForPasswordType:(long long)arg1 ;
-(void)setPersistentReference:(NSData *)arg1 ;
-(id)copyPassword;
-(BOOL)addOrUpdateWithConfiguration:(id)arg1 passwordType:(long long)arg2 accountName:(id)arg3 identifierSuffix:(id)arg4 ;
-(NEKeychainItem *)oldItem;
-(void)setOldItem:(NEKeychainItem *)arg1 ;
-(id)initWithPassword:(id)arg1 domain:(long long)arg2 ;
-(id)initWithIdentifier:(id)arg1 domain:(long long)arg2 ;
-(id)initWithPersistentReference:(id)arg1 domain:(long long)arg2 ;
-(id)initWithLegacyIdentifier:(id)arg1 domain:(long long)arg2 ;
-(void)setIdentifierInternal:(id)arg1 ;
-(void)migrateFromPreferences:(SCPreferencesRef)arg1 ;
@end
