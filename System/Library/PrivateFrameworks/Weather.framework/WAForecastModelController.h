/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:57 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <Weather/Weather-Structs.h>
@class NSOperationQueue, NSObject, NSMutableSet, NSMutableDictionary, WFServiceConnection, NSString, WFWeatherStoreService;

@interface WAForecastModelController : NSObject {

	NSOperationQueue* _forecastOperationQueue;
	NSObject*<OS_dispatch_queue> _incomingRequestQueue;
	NSObject*<OS_dispatch_queue> _completionHandlerQueue;
	NSMutableSet* _updatingCities;
	NSMutableDictionary* _completionHandlersForCity;
	WFServiceConnection* _connection;
	ct_green_tea_logger_sRef _greenTeaLogger;
	NSString* _trackingParameter;
	WFWeatherStoreService* _store;

}

@property (retain) NSOperationQueue * forecastOperationQueue;                        //@synthesize forecastOperationQueue=_forecastOperationQueue - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> incomingRequestQueue;                //@synthesize incomingRequestQueue=_incomingRequestQueue - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> completionHandlerQueue;              //@synthesize completionHandlerQueue=_completionHandlerQueue - In the implementation block
@property (retain) NSMutableSet * updatingCities;                                    //@synthesize updatingCities=_updatingCities - In the implementation block
@property (retain) NSMutableDictionary * completionHandlersForCity;                  //@synthesize completionHandlersForCity=_completionHandlersForCity - In the implementation block
@property (nonatomic,retain) WFServiceConnection * connection;                       //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic) ct_green_tea_logger_sRef greenTeaLogger;                //@synthesize greenTeaLogger=_greenTeaLogger - In the implementation block
@property (copy) NSString * trackingParameter;                                       //@synthesize trackingParameter=_trackingParameter - In the implementation block
@property (readonly) WFWeatherStoreService * store;                                  //@synthesize store=_store - In the implementation block
-(id)init;
-(void)dealloc;
-(void)setConnection:(WFServiceConnection *)arg1 ;
-(WFServiceConnection *)connection;
-(WFWeatherStoreService *)store;
-(NSString *)trackingParameter;
-(void)setTrackingParameter:(NSString *)arg1 ;
-(void)setIncomingRequestQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)incomingRequestQueue;
-(BOOL)isCityBeingUpdated:(id)arg1 ;
-(void)cancelAllFetchRequests;
-(BOOL)fetchForecastForCity:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)fetchForecastForCities:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setForecastOperationQueue:(NSOperationQueue *)arg1 ;
-(NSOperationQueue *)forecastOperationQueue;
-(void)setCompletionHandlerQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setUpdatingCities:(NSMutableSet *)arg1 ;
-(void)setCompletionHandlersForCity:(NSMutableDictionary *)arg1 ;
-(NSMutableSet *)updatingCities;
-(ct_green_tea_logger_sRef)greenTeaLogger;
-(id)_queue_executeFetchForCity:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSMutableDictionary *)completionHandlersForCity;
-(id)_commaSeparatedUpdatingCitiesNames;
-(void)_handleForecastOperationCompletion:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)completionHandlerQueue;
-(void)setGreenTeaLogger:(ct_green_tea_logger_sRef)arg1 ;
@end

