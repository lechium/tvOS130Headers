/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:46:33 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/Support/medialibraryd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class NSString, MLDDatabaseIntegrityCheck, NSError;

@interface MLDDatabaseIntegrityCheckOperation : NSOperation {

	BOOL _repairFaults;
	NSString* _databasePath;
	MLDDatabaseIntegrityCheck* _check;
	NSError* _error;

}

@property (nonatomic,readonly) NSString * databasePath;                        //@synthesize databasePath=_databasePath - In the implementation block
@property (nonatomic,readonly) MLDDatabaseIntegrityCheck * check;              //@synthesize check=_check - In the implementation block
@property (nonatomic,readonly) NSError * error;                                //@synthesize error=_error - In the implementation block
-(NSError *)error;
-(void)main;
-(NSString *)databasePath;
-(MLDDatabaseIntegrityCheck *)check;
-(id)_createSQLiteErrorWithCode:(int)arg1 description:(id)arg2 ;
-(id)initWithDatabasePath:(id)arg1 repairFaults:(BOOL)arg2 ;
@end

