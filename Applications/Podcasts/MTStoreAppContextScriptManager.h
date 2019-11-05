/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:50:17 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PodcastsTVTopShelfExtension/MTSingleton.h>

@class MusicJSNativeViewEventRegistry, MusicJSNowPlayingController, MusicJSPlaybackCoordinator;

@interface MTStoreAppContextScriptManager : MTSingleton {

	MusicJSNativeViewEventRegistry* _jsNativeViewEventRegistry;
	MusicJSNowPlayingController* _jsNowPlayingController;
	MusicJSPlaybackCoordinator* _jsPlaybackCoordinator;

}

@property (nonatomic,readonly) MusicJSNativeViewEventRegistry * jsNativeViewEventRegistry;              //@synthesize jsNativeViewEventRegistry=_jsNativeViewEventRegistry - In the implementation block
@property (nonatomic,readonly) MusicJSNowPlayingController * jsNowPlayingController;                    //@synthesize jsNowPlayingController=_jsNowPlayingController - In the implementation block
@property (nonatomic,readonly) MusicJSPlaybackCoordinator * jsPlaybackCoordinator;                      //@synthesize jsPlaybackCoordinator=_jsPlaybackCoordinator - In the implementation block
-(void)appContext:(id)arg1 evaluateAppJavaScriptInContext:(id)arg2 ;
-(MusicJSNativeViewEventRegistry *)jsNativeViewEventRegistry;
-(MusicJSNowPlayingController *)jsNowPlayingController;
-(MusicJSPlaybackCoordinator *)jsPlaybackCoordinator;
@end
