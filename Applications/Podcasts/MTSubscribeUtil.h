/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:50:17 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MTSubscribeUtil : NSObject
+(id)identifierForDictionary:(id)arg1 ;
+(void)subscribeToPodcastWithFeedUrl:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)subscribeToPodcastWithStorePlatformDictionary:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)unsubscribeToPodcastWithStorePlatformDictionary:(id)arg1 ;
+(BOOL)isSubscribedToPodcastWithStorePlatformDictionary:(id)arg1 ;
@end
