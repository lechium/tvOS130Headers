//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep  9 2019 14:18:44).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MPAVItem, MPCPlaybackEngine, NSError;

@protocol MPCPlaybackEngineDelegate <NSObject>

@optional
- (void)engine:(MPCPlaybackEngine *)arg1 requiresAuthorizationToPlayItem:(MPAVItem *)arg2 reason:(long long)arg3 authorizationHandler:(void (^)(_Bool, NSError *))arg4;
- (void)engine:(MPCPlaybackEngine *)arg1 requiresAuthorizationToPlayItem:(MPAVItem *)arg2 authorizationHandler:(void (^)(_Bool, NSError *))arg3;
- (void)engine:(MPCPlaybackEngine *)arg1 didFailToPlayItem:(MPAVItem *)arg2 withError:(NSError *)arg3;
- (void)engine:(MPCPlaybackEngine *)arg1 didFailToPlayFirstItem:(MPAVItem *)arg2 withError:(NSError *)arg3;
- (void)engine:(MPCPlaybackEngine *)arg1 didFailToActivateWithError:(NSError *)arg2 resolution:(void (^)(_Bool))arg3;
- (void)engine:(MPCPlaybackEngine *)arg1 prepareForActivationWithCompletion:(void (^)(_Bool, NSError *))arg2;
- (void)engine:(MPCPlaybackEngine *)arg1 didPauseForLeaseEndWithError:(NSError *)arg2;
- (void)engineDidPauseForLeaseEnd:(MPCPlaybackEngine *)arg1;
@end

