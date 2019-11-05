/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:58 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreAccessories.framework/Support/accessoryd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AccessoryNowPlayingXPCServerProtocol <NSObject>
@required
-(void)initConnection:(/*^block*/id)arg1;
-(void)mediaItemAttributesHaveChanged:(id)arg1 withReply:(/*^block*/id)arg2;
-(void)mediaItemArtworkHasChanged:(id)arg1 withReply:(/*^block*/id)arg2;
-(void)playbackAttributesHaveChanged:(id)arg1 withReply:(/*^block*/id)arg2;
-(void)playbackQueueListChanged;
-(void)playbackQueueListInfoResponse:(id)arg1 requestID:(id)arg2 info:(id)arg3;

@end
