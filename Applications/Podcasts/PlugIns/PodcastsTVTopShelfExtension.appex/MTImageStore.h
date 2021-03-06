/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:50:16 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/Podcasts.app/PlugIns/PodcastsTVTopShelfExtension.appex/PodcastsTVTopShelfExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PodcastsTVTopShelfExtension/PodcastsTVTopShelfExtension-Structs.h>
#import <PodcastsTVTopShelfExtension/IMImageStore.h>

@interface MTImageStore : IMImageStore
+(id)defaultStore;
+(id)defaultBasePath;
+(double)defaultMaxImageDimensionInPixels;
+(unsigned long long)defaultMaxConcurrentOperations;
+(id)defaultPodcastArtworkWithWidth:(double)arg1 ;
-(void)addImage:(id)arg1 forKey:(id)arg2 ;
-(BOOL)requireSquareImages;
-(id)imageForKey:(id)arg1 size:(CGSize)arg2 resizeOptions:(int)arg3 modifier:(id)arg4 ;
-(void)asyncImageForKey:(id)arg1 size:(CGSize)arg2 resizeOptions:(int)arg3 modifier:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)initWithName:(id)arg1 basePath:(id)arg2 maxImageDimensionInPixels:(double)arg3 maxConcurrentOperations:(unsigned long long)arg4 alternativeSizeBlock:(/*^block*/id)arg5 ;
@end

