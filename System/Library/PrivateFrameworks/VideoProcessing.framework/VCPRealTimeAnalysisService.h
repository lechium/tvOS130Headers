/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:44 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <VideoProcessing/VCPRealTimeAnalysisClientProtocol.h>

@class NSLock, NSXPCConnection;

@interface VCPRealTimeAnalysisService : NSObject <VCPRealTimeAnalysisClientProtocol> {

	NSLock* _connectionLock;
	NSXPCConnection* _connection;

}
+(id)analysisService;
+(id)errorWithStatus:(int)arg1 andDescription:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(id)connection;
-(void)requestAnalysis:(unsigned long long)arg1 ofPixelBuffer:(CVBufferRef)arg2 withProperties:(id)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
@end
