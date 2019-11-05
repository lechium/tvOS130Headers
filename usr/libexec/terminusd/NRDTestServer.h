/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:58 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/terminusd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_nw_service_connector, OS_dispatch_source;
@class NSObject, NSMutableDictionary;

@interface NRDTestServer : NSObject {

	BOOL _started;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_nw_service_connector> _serviceConnector;
	NSObject*<OS_nw_service_connector> _cloudServiceConnector;
	NSMutableDictionary* _allConnections;
	NSObject*<OS_dispatch_source> _udpInputSource;
	NSObject*<OS_dispatch_source> _udpInputSourceCloud;

}

@property (assign,nonatomic) BOOL started;                                                          //@synthesize started=_started - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                    //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_nw_service_connector> serviceConnector;                   //@synthesize serviceConnector=_serviceConnector - In the implementation block
@property (nonatomic,retain) NSObject*<OS_nw_service_connector> cloudServiceConnector;              //@synthesize cloudServiceConnector=_cloudServiceConnector - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * allConnections;                                  //@synthesize allConnections=_allConnections - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> udpInputSource;                          //@synthesize udpInputSource=_udpInputSource - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> udpInputSourceCloud;                     //@synthesize udpInputSourceCloud=_udpInputSourceCloud - In the implementation block
-(void)dealloc;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)cancel;
-(void)start;
-(BOOL)started;
-(void)setStarted:(BOOL)arg1 ;
-(id)copyStatusString;
-(id)initTestServerWithQueue:(id)arg1 ;
-(id)createServiceConnector:(BOOL)arg1 ;
-(void)setupTestServer;
-(void)handleNewConnection:(id)arg1 forService:(id)arg2 forServiceConnector:(id)arg3 ;
-(void)setReadHandlerOnConnection:(id)arg1 forService:(id)arg2 ;
-(void)pushDownloadOnConnection:(id)arg1 ;
-(void)sendTokenOnConnection:(id)arg1 connection:(id)arg2 ;
-(NSObject*<OS_nw_service_connector>)serviceConnector;
-(void)setServiceConnector:(NSObject*<OS_nw_service_connector>)arg1 ;
-(NSObject*<OS_nw_service_connector>)cloudServiceConnector;
-(void)setCloudServiceConnector:(NSObject*<OS_nw_service_connector>)arg1 ;
-(NSMutableDictionary *)allConnections;
-(void)setAllConnections:(NSMutableDictionary *)arg1 ;
-(NSObject*<OS_dispatch_source>)udpInputSource;
-(void)setUdpInputSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_source>)udpInputSourceCloud;
-(void)setUdpInputSourceCloud:(NSObject*<OS_dispatch_source>)arg1 ;
@end
