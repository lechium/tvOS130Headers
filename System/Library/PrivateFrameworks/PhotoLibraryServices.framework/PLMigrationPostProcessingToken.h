/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:22 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PLPhotoLibraryPathManager;

@interface PLMigrationPostProcessingToken : NSObject {

	BOOL _tokenIsKnownToBeMissing;
	PLPhotoLibraryPathManager* _pathManager;

}
-(id)initWithPathManager:(id)arg1 ;
-(void)writeToken;
-(id)_tokenFullPath;
-(BOOL)isTokenPresent;
-(BOOL)isTokenValid;
-(void)incrementToken;
-(void)removeToken;
-(void)invalidateCachedTokenState;
-(void)_writeTokenValue:(int)arg1 ;
-(int)_tokenValue;
@end
