/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:55 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface VTVoiceProfileMigration : NSObject
+(unsigned long long)getCurrentVoiceProfileVersionForLanguageCode:(id)arg1 ;
+(void)updateVoiceProfileVersionFileForLanguageCode:(id)arg1 ;
+(BOOL)checkIfMigrationNecessaryForCompatibilityVersion:(unsigned long long)arg1 forLanguageCode:(id)arg2 ;
+(BOOL)migrateVoiceProfileToVersion:(unsigned long long)arg1 forLanguageCode:(id)arg2 ;
@end

