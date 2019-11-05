/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:16 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/PlugIns/AppManagementExtension.appex/AppManagementExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppManagementExtension/NSSecureCoding.h>

@class NSNumber, NSString;

@interface AMXAppMetadata : NSObject <NSSecureCoding> {

	BOOL _isAuthoratative;
	BOOL _isFree;
	BOOL _isSystemApp;
	BOOL _isUserLicensed;
	BOOL _needsRedownload;
	NSNumber* _appStoreIdentifier;
	NSString* _bundleIdentifier;
	NSString* _displayName;
	NSNumber* _externalVersionIdentifier;

}

@property (nonatomic,retain) NSNumber * appStoreIdentifier;                     //@synthesize appStoreIdentifier=_appStoreIdentifier - In the implementation block
@property (nonatomic,copy) NSString * bundleIdentifier;                         //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * displayName;                              //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain) NSNumber * externalVersionIdentifier;              //@synthesize externalVersionIdentifier=_externalVersionIdentifier - In the implementation block
@property (assign,nonatomic) BOOL isAuthoratative;                              //@synthesize isAuthoratative=_isAuthoratative - In the implementation block
@property (assign,nonatomic) BOOL isFree;                                       //@synthesize isFree=_isFree - In the implementation block
@property (nonatomic,readonly) BOOL isStoreApp; 
@property (assign,nonatomic) BOOL isSystemApp;                                  //@synthesize isSystemApp=_isSystemApp - In the implementation block
@property (assign,nonatomic) BOOL isUserLicensed;                               //@synthesize isUserLicensed=_isUserLicensed - In the implementation block
@property (assign,nonatomic) BOOL needsRedownload;                              //@synthesize needsRedownload=_needsRedownload - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)appMetadataWithAppAssetDeclaration:(id)arg1 ;
+(id)appMetadataWithAppStoreDaemonDictionary:(id)arg1 ;
+(id)appMetadataWithLSApplicationProxy:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(NSString *)displayName;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSNumber *)externalVersionIdentifier;
-(void)setExternalVersionIdentifier:(NSNumber *)arg1 ;
-(void)setIsFree:(BOOL)arg1 ;
-(BOOL)isFree;
-(BOOL)needsRedownload;
-(BOOL)isSystemApp;
-(BOOL)isStoreApp;
-(void)setIsSystemApp:(BOOL)arg1 ;
-(void)setAppStoreIdentifier:(NSNumber *)arg1 ;
-(NSNumber *)appStoreIdentifier;
-(void)updateWithAppStoreDaemonDictionary:(id)arg1 ;
-(void)setIsUserLicensed:(BOOL)arg1 ;
-(void)setIsAuthoratative:(BOOL)arg1 ;
-(BOOL)isAuthoratative;
-(BOOL)isUserLicensed;
-(void)setNeedsRedownload:(BOOL)arg1 ;
@end
