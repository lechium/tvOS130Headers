/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:50:16 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/Podcasts.app/PlugIns/PodcastsTVTopShelfExtension.appex/PodcastsTVTopShelfExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MTLibraryMigrationUtil : NSObject
+(BOOL)isMomCompatible:(id)arg1 ;
+(BOOL)isNewInstall;
+(BOOL)createPersistentStoreForModel:(id)arg1 attemptMigration:(BOOL)arg2 ;
+(BOOL)needsCoreDataMigration;
+(BOOL)needsDataMigration;
@end
