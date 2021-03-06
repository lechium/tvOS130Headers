/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:51 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Support/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <appstored/appstored-Structs.h>
#import <appstored/NSCopying.h>

@class NSMutableSet, NSSet;

@interface ODRDatabaseChangeset : NSObject <NSCopying> {

	NSMutableSet* _deletedAssetPackURLs;
	NSMutableSet* _deletedStorageIDs;

}

@property (copy,readonly) NSSet * deletedAssetPackURLs; 
@property (copy,readonly) NSSet * deletedStorageIDs; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)unionChangeset:(id)arg1 ;
-(NSSet *)deletedAssetPackURLs;
-(NSSet *)deletedStorageIDs;
-(void)addDeletedAssetPackURL:(id)arg1 ;
-(void)addDeletedStorageID:(id)arg1 ;
@end

