/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:29 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MRTransactionSourceDelegate;
@class MRTransactionPacketizer, NSMutableArray, _MRNowPlayingPlayerPathProtobuf;

@interface MRTransactionSource : NSObject {

	unsigned long long _name;
	MRTransactionPacketizer* _packetizer;
	NSMutableArray* _packets;
	id<MRTransactionSourceDelegate> _delegate;
	_MRNowPlayingPlayerPathProtobuf* _playerPath;

}

@property (nonatomic,readonly) unsigned long long name;                                   //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) _MRNowPlayingPlayerPathProtobuf * playerPath;              //@synthesize playerPath=_playerPath - In the implementation block
-(unsigned long long)name;
-(void)_begin;
-(_MRNowPlayingPlayerPathProtobuf *)playerPath;
-(void)_processMessage:(id)arg1 ;
-(id)initWithName:(unsigned long long)arg1 playerPath:(id)arg2 packets:(id)arg3 delegate:(id)arg4 ;
@end

