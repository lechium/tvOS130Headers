//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep  9 2019 14:18:44).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSDate, NSObject, NSString, TVPAudioOption, TVPChapter, TVPChapterCollection, TVPDateRange, TVPInterstitial, TVPPlaybackState, TVPPlaylist, TVPSubtitleOption, TVPTimeRange;
@protocol TVPASyncPlaybackDelegate, TVPMediaItem, TVPPlaybackDelegate;

@protocol TVPPlayback <NSObject>
@property(nonatomic) _Bool limitReadAhead;
@property(nonatomic) _Bool updatesMediaRemoteInfoAutomatically;
@property(nonatomic) _Bool preventsSleepDuringVideoPlayback;
@property(nonatomic) double maximumBitRate;
@property(retain, nonatomic) TVPSubtitleOption *selectedSubtitleOption;
@property(readonly, nonatomic) NSArray *subtitleOptions;
@property(retain, nonatomic) TVPAudioOption *selectedAudioOption;
@property(readonly, nonatomic) NSArray *audioOptions;
@property(nonatomic) long long mediaItemEndAction;
@property(readonly, nonatomic) double reversePlaybackEndTime;
@property(readonly, nonatomic) double forwardPlaybackEndTime;
@property(readonly, nonatomic) TVPDateRange *seekableDateRange;
@property(readonly, nonatomic) TVPTimeRange *seekableTimeRange;
@property(readonly, nonatomic) TVPTimeRange *bufferedTimeRange;
@property(readonly, nonatomic) TVPInterstitial *currentInterstitial;
@property(readonly, nonatomic) TVPChapter *currentChapter;
@property(retain, nonatomic) TVPChapterCollection *currentChapterCollection;
@property(readonly, nonatomic) NSArray *chapterCollections;
@property(nonatomic) float volume;
@property(nonatomic) _Bool muted;
@property(readonly, nonatomic) _Bool isLive;
@property(readonly, nonatomic) double duration;
@property(copy, nonatomic) NSDate *playbackDate;
@property(readonly, nonatomic) double elapsedTime;
@property(nonatomic) _Bool waitsAfterPreparingMediaItems;
@property(nonatomic) double rateUsedForPlayback;
@property(readonly, nonatomic) double rate;
@property(nonatomic) _Bool interactive;
@property(nonatomic) long long errorBehavior;
@property(readonly, nonatomic) TVPPlaybackState *state;
@property(readonly, nonatomic) _Bool currentMediaItemHasDates;
@property(readonly, nonatomic) struct CGSize currentMediaItemPresentationSize;
@property(readonly, nonatomic) _Bool currentMediaItemIsStreaming;
@property(readonly, nonatomic) _Bool currentMediaItemHasVideoContent;
@property(readonly, nonatomic) _Bool currentMediaItemInitialLoadingComplete;
@property(readonly, nonatomic) _Bool currentMediaItemPreparedForLoading;
@property(retain, nonatomic) NSObject<TVPMediaItem> *currentMediaItem;
@property(retain, nonatomic) TVPPlaylist *playlist;
@property(nonatomic) __weak id <TVPASyncPlaybackDelegate> asyncDelegate;
@property(nonatomic) __weak id <TVPPlaybackDelegate> delegate;
@property(readonly, nonatomic) NSString *name;
- (_Bool)currentMediaItemSupportsScrubbingUsingPlayer;
- (void)updateSubtitleOptions;
- (void)setSelectedSubtitleOption:(TVPSubtitleOption *)arg1 setGlobalPreference:(_Bool)arg2;
- (void)skipToNextChapterInDirection:(long long)arg1;
- (void)removeBoundaryTimeObserverWithToken:(id)arg1;
- (id)addBoundaryTimeObserverForDates:(NSArray *)arg1 withHandler:(void (^)(_Bool))arg2;
- (id)addBoundaryTimeObserverForTimes:(NSArray *)arg1 withHandler:(void (^)(_Bool))arg2;
- (void)removeElapsedTimeObserverWithToken:(id)arg1;
- (id)addElapsedTimeObserver:(void (^)(double, NSDate *, double, _Bool))arg1;
- (void)setElapsedTime:(double)arg1 seekPrecision:(CDStruct_198678f7)arg2 ignoreDelegate:(_Bool)arg3;
- (void)setElapsedTime:(double)arg1 seekPrecision:(CDStruct_198678f7)arg2;
- (void)setElapsedTime:(double)arg1 precise:(_Bool)arg2;
- (void)setElapsedTime:(double)arg1;
- (void)stopWithVolumeRampDuration:(double)arg1;
- (void)stop;
- (void)scanWithRate:(double)arg1;
- (void)togglePlayPause;
- (void)pauseWithVolumeRampDuration:(double)arg1;
- (void)pauseIgnoringDelegate:(_Bool)arg1;
- (void)pause;
- (void)playIgnoringDelegate:(_Bool)arg1;
- (void)play;
- (void)continueLoadingCurrentItem;
- (void)changeMediaInDirection:(long long)arg1 reason:(NSString *)arg2;
- (void)changeMediaInDirection:(long long)arg1;
- (void)invalidate;
- (id)initWithName:(NSString *)arg1;
- (id)init;

@optional
- (void)changeToMediaAtIndex:(unsigned long long)arg1 reason:(NSString *)arg2;
@end

