/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:47 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/locationd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <locationd/locationd-Structs.h>
#import <LocationSupport/CLIntersiloService.h>
#import <locationd/CLTransitMacMonitorProtocol.h>

@protocol CLWifiServiceProtocol, CLTransitMacTileDataProviderProtocol;
@class NSMutableSet, NSMutableArray, CLLocation, NSString;

@interface CLTransitMacMonitor : CLIntersiloService <CLTransitMacMonitorProtocol> {

	id<CLWifiServiceProtocol> _wifiServiceProxy;
	unique_ptr<CLWifiService_Type::Client, std::__1::default_delete<CLWifiService_Type::Client> >* _wifiServiceClient;
	id<CLTransitMacTileDataProviderProtocol> _transitMacTileDataProviderProxy;
	unique_ptr<CLFilteredLocationController_Type::Client, std::__1::default_delete<CLFilteredLocationController_Type::Client> >* _locationClient;
	unsigned long long _currentState;
	NSMutableSet* _clients;
	NSMutableArray* _observedTransitAccessPointsCache;
	CLLocation* _mostRecentLocation;

}

@property (assign,nonatomic) unsigned long long currentState;                                //@synthesize currentState=_currentState - In the implementation block
@property (nonatomic,retain) NSMutableSet * clients;                                         //@synthesize clients=_clients - In the implementation block
@property (nonatomic,retain) NSMutableArray * observedTransitAccessPointsCache;              //@synthesize observedTransitAccessPointsCache=_observedTransitAccessPointsCache - In the implementation block
@property (nonatomic,retain) CLLocation * mostRecentLocation;                                //@synthesize mostRecentLocation=_mostRecentLocation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL valid; 
+(BOOL)isSupported;
+(void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2 ;
+(id)getSilo;
+(void)performSyncOnSilo:(id)arg1 invoker:(/*^block*/id)arg2 ;
-(id)init;
-(void)setClients:(NSMutableSet *)arg1 ;
-(NSMutableSet *)clients;
-(unsigned long long)currentState;
-(void)setCurrentState:(unsigned long long)arg1 ;
-(void)beginService;
-(void)endService;
-(void)onWifiServiceNotification:(int)arg1 data:(NotificationData*)arg2 ;
-(void)onLocationNotification:(int)arg1 data:(NotificationData*)arg2 ;
-(void)setObservedTransitAccessPointsCache:(NSMutableArray *)arg1 ;
-(NSMutableArray *)observedTransitAccessPointsCache;
-(CLLocation *)mostRecentLocation;
-(void)processNewAccessPoints:(const vector<CLWifiService_Type::AccessPoint, std::__1::allocator<CLWifiService_Type::AccessPoint> >*)arg1 transitTileResults:(id)arg2 ;
-(void)setMostRecentLocation:(CLLocation *)arg1 ;
-(void)startMonitoringTransitStateForClient:(R)arg1 :(id)arg2 ;
-(void)stopMonitoringTransitStateForClient:(R)arg1 :(id)arg2 ;
@end

