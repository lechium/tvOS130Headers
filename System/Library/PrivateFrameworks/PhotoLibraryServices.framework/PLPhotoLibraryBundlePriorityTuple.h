/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:23 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PLPhotoLibraryBundle;

@interface PLPhotoLibraryBundlePriorityTuple : NSObject {

	PLPhotoLibraryBundle* _bundle;
	unsigned long long _priority;

}

@property (nonatomic,readonly) PLPhotoLibraryBundle * bundle;              //@synthesize bundle=_bundle - In the implementation block
@property (nonatomic,readonly) unsigned long long priority;                //@synthesize priority=_priority - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(unsigned long long)priority;
-(PLPhotoLibraryBundle *)bundle;
-(id)initWithBundle:(id)arg1 priority:(unsigned long long)arg2 ;
@end

