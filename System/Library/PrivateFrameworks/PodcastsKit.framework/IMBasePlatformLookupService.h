/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:58 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PodcastsKit/IMBaseStoreService.h>

@class NSString;

@interface IMBasePlatformLookupService : IMBaseStoreService {

	NSString* _protocolVersion;

}

@property (nonatomic,retain) NSString * protocolVersion;              //@synthesize protocolVersion=_protocolVersion - In the implementation block
-(id)init;
-(void)setProtocolVersion:(NSString *)arg1 ;
-(NSString *)protocolVersion;
-(id)urlRequest;
-(id)baseUrl;
-(void)performRequest:(/*^block*/id)arg1 ;
-(id)platformAction;
@end
