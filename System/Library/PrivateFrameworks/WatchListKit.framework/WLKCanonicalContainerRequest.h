/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:56 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WatchListKit/WLKRequest.h>

@class NSString;

@interface WLKCanonicalContainerRequest : WLKRequest {

	NSString* _canonicalID;

}

@property (nonatomic,copy,readonly) NSString * canonicalID;              //@synthesize canonicalID=_canonicalID - In the implementation block
-(NSString *)canonicalID;
-(void)makeRequestWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithCanonicalID:(id)arg1 ;
@end

