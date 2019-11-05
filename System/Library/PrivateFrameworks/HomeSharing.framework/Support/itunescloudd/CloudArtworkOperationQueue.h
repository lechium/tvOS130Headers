/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:48 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperationQueue.h>

@class ICConnectionConfiguration;

@interface CloudArtworkOperationQueue : NSOperationQueue {

	long long _sourceType;
	ICConnectionConfiguration* _configuration;

}

@property (nonatomic,readonly) long long sourceType;                                   //@synthesize sourceType=_sourceType - In the implementation block
@property (nonatomic,readonly) ICConnectionConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
-(void)addOperation:(id)arg1 ;
-(ICConnectionConfiguration *)configuration;
-(long long)sourceType;
-(id)initWithSourceType:(long long)arg1 ;
-(void)addOperations:(id)arg1 ;
-(id)initWithSourceType:(long long)arg1 configuration:(id)arg2 ;
-(BOOL)_hasValidUserIdentity:(id)arg1 forSourceType:(long long)arg2 ;
-(id)_artworkURLForInfoDictionary:(id)arg1 ;
@end
