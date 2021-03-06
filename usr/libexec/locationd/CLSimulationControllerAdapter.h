/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:45 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/locationd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <locationd/locationd-Structs.h>
#import <LocationSupport/CLIntersiloService.h>
#import <locationd/CLSimulationControllerProtocol.h>
#import <locationd/NSXPCListenerDelegate.h>
#import <locationd/CLSimulationXPCServerInterface.h>

@class NSXPCListener, NSXPCConnection, NSString;

@interface CLSimulationControllerAdapter : CLIntersiloService <CLSimulationControllerProtocol, NSXPCListenerDelegate, CLSimulationXPCServerInterface> {

	NSXPCListener* _listener;
	NSXPCConnection* _connection;
	CLSimulationController* _controller;

}

@property (nonatomic,retain) NSXPCListener * listener;                        //@synthesize listener=_listener - In the implementation block
@property (nonatomic,retain) NSXPCConnection * connection;                    //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic) CLSimulationController* controller;              //@synthesize controller=_controller - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL valid; 
+(void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2 ;
+(id)getSilo;
+(void)performSyncOnSilo:(id)arg1 invoker:(/*^block*/id)arg2 ;
-(id)init;
-(NSXPCListener *)listener;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)setListener:(NSXPCListener *)arg1 ;
-(NSXPCConnection *)connection;
-(void)shutdown;
-(void)setController:(CLSimulationController*)arg1 ;
-(void)beginService;
-(void)endService;
-(void)setSimulationScenario:(id)arg1 ;
-(void)setLocationDeliveryBehavior:(unsigned char)arg1 ;
-(void)setIntermediateLocationDistance:(double)arg1 ;
-(void)setLocationInterval:(double)arg1 ;
-(void)setLocationTravellingSpeed:(double)arg1 ;
-(void)setLocationRepeatBehavior:(unsigned char)arg1 ;
-(void)clearSimulatedLocations;
-(void)appendSimulatedLocations:(id)arg1 ;
-(void)startLocationSimulation;
-(void)stopLocationSimulation;
-(void)simulateVisit:(id)arg1 ;
-(void)simulateSignificantLocationChange:(id)arg1 ;
-(void)getFencesForBundleID:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)simulateFenceWithBundleID:(id)arg1 andFenceID:(id)arg2 eventType:(unsigned char)arg3 atLocation:(id)arg4 ;
-(void)simulateBeaconWithProximityUUID:(id)arg1 major:(long long)arg2 minor:(long long)arg3 eventType:(unsigned char)arg4 ;
-(CLSimulationController*)controller;
@end

