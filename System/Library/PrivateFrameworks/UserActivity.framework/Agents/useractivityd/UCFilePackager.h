/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:35 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UserActivity.framework/Agents/useractivityd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UCFilePacketReceiver, OS_dispatch_queue, OS_dispatch_semaphore;
@class NSString, NSFileHandle, NSDictionary, NSMutableArray, NSObject;

@interface UCFilePackager : NSObject {

	long long _totalPacketCount;
	long long _tag;
	NSString* _uuid;
	id<UCFilePacketReceiver> _receiver;
	NSFileHandle* _file;
	NSDictionary* _options;
	long long _packetSize;
	long long _packetPreLoadCount;
	NSMutableArray* _queuedPackets;
	long long _nextPacketNumber;
	long long _nextPacketToDeliver;
	long long _currentPacketNumber;
	NSObject*<OS_dispatch_queue> _fetchQ;
	NSObject*<OS_dispatch_semaphore> _nextPacketReady;

}

@property (assign) long long totalPacketCount;                                    //@synthesize totalPacketCount=_totalPacketCount - In the implementation block
@property (__weak) id<UCFilePacketReceiver> receiver;                             //@synthesize receiver=_receiver - In the implementation block
@property (retain) NSFileHandle * file;                                           //@synthesize file=_file - In the implementation block
@property (retain) NSDictionary * options;                                        //@synthesize options=_options - In the implementation block
@property (assign) long long packetSize;                                          //@synthesize packetSize=_packetSize - In the implementation block
@property (assign) long long packetPreLoadCount;                                  //@synthesize packetPreLoadCount=_packetPreLoadCount - In the implementation block
@property (retain) NSMutableArray * queuedPackets;                                //@synthesize queuedPackets=_queuedPackets - In the implementation block
@property (assign) long long nextPacketNumber;                                    //@synthesize nextPacketNumber=_nextPacketNumber - In the implementation block
@property (assign) long long nextPacketToDeliver;                                 //@synthesize nextPacketToDeliver=_nextPacketToDeliver - In the implementation block
@property (assign) long long currentPacketNumber;                                 //@synthesize currentPacketNumber=_currentPacketNumber - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> fetchQ;                           //@synthesize fetchQ=_fetchQ - In the implementation block
@property (retain) NSObject*<OS_dispatch_semaphore> nextPacketReady;              //@synthesize nextPacketReady=_nextPacketReady - In the implementation block
@property (assign) long long tag;                                                 //@synthesize tag=_tag - In the implementation block
@property (retain) NSString * uuid;                                               //@synthesize uuid=_uuid - In the implementation block
-(NSDictionary *)options;
-(void)setOptions:(NSDictionary *)arg1 ;
-(NSString *)uuid;
-(NSFileHandle *)file;
-(long long)tag;
-(void)setUuid:(NSString *)arg1 ;
-(void)setTag:(long long)arg1 ;
-(void)setFile:(NSFileHandle *)arg1 ;
-(long long)currentPacketNumber;
-(void)setCurrentPacketNumber:(long long)arg1 ;
-(void)setReceiver:(id<UCFilePacketReceiver>)arg1 ;
-(id<UCFilePacketReceiver>)receiver;
-(BOOL)deliverNextPacket;
-(id)initWithFile:(id)arg1 fileSize:(long long)arg2 packetSize:(long long)arg3 options:(id)arg4 receiver:(id)arg5 ;
-(long long)totalPacketCount;
-(void)setPacketSize:(long long)arg1 ;
-(void)setTotalPacketCount:(long long)arg1 ;
-(void)setNextPacketNumber:(long long)arg1 ;
-(void)setNextPacketToDeliver:(long long)arg1 ;
-(void)setFetchQ:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setNextPacketReady:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(void)setPacketPreLoadCount:(long long)arg1 ;
-(long long)packetPreLoadCount;
-(void)setQueuedPackets:(NSMutableArray *)arg1 ;
-(void)checkShouldFetch;
-(long long)nextPacketToDeliver;
-(NSObject*<OS_dispatch_semaphore>)nextPacketReady;
-(NSMutableArray *)queuedPackets;
-(long long)nextPacketNumber;
-(NSObject*<OS_dispatch_queue>)fetchQ;
-(long long)packetSize;
-(void)prepNextPacket;
@end

