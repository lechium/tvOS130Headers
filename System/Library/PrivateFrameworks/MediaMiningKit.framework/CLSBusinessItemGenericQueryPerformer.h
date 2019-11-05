/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:22 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaMiningKit/MediaMiningKit-Structs.h>
#import <MediaMiningKit/CLSQueryPerformerProtocol.h>

@protocol GEOMapServiceBatchSpatialLookupTicket, OS_os_log;
@class NSArray, NSObject, CLSBusinessCategoryCache, NSString;

@interface CLSBusinessItemGenericQueryPerformer : NSObject <CLSQueryPerformerProtocol> {

	BOOL _isCancelled;
	NSArray* _locationGeoParameters;
	id<GEOMapServiceBatchSpatialLookupTicket> _businessGenericTicket;
	NSArray* _regions;
	double _precision;
	NSObject*<OS_os_log> _loggingConnection;
	SCD_Struct_CL2 _statistics;

}

@property (nonatomic,readonly) NSArray * locationGeoParameters;                                              //@synthesize locationGeoParameters=_locationGeoParameters - In the implementation block
@property (nonatomic,readonly) id<GEOMapServiceBatchSpatialLookupTicket> businessGenericTicket;              //@synthesize businessGenericTicket=_businessGenericTicket - In the implementation block
@property (nonatomic,copy,readonly) NSArray * regions;                                                       //@synthesize regions=_regions - In the implementation block
@property (nonatomic,readonly) CLSBusinessCategoryCache * cache; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL isCancelled;                                                             //@synthesize isCancelled=_isCancelled - In the implementation block
@property (assign,nonatomic) SCD_Struct_CL2 statistics;                                                      //@synthesize statistics=_statistics - In the implementation block
@property (assign,nonatomic) double precision;                                                               //@synthesize precision=_precision - In the implementation block
@property (assign,nonatomic) NSObject*<OS_os_log> loggingConnection;                                         //@synthesize loggingConnection=_loggingConnection - In the implementation block
+(id)categories;
+(id)queryWithTemplate:(id)arg1 forRegions:(id)arg2 ;
+(unsigned long long)numberOfRegionsPerBatch;
+(double)defaultPrecision;
-(id)init;
-(void)cancel;
-(BOOL)isCancelled;
-(CLSBusinessCategoryCache *)cache;
-(double)precision;
-(NSArray *)regions;
-(SCD_Struct_CL2)statistics;
-(void)setStatistics:(SCD_Struct_CL2)arg1 ;
-(void)setPrecision:(double)arg1 ;
-(void)submitWithHandler:(/*^block*/id)arg1 ;
-(NSObject*<OS_os_log>)loggingConnection;
-(void)setLoggingConnection:(NSObject*<OS_os_log>)arg1 ;
-(BOOL)shouldQueryItemsForRegion:(id)arg1 selectedRegions:(id)arg2 ;
-(unsigned long long)cacheItems:(id)arg1 ;
-(void)logAggdGeoLookupCounterAndDurationWithLookupDuration:(id)arg1 ;
-(void)logAggdGeoLookupFailureResult;
-(id)initWithRegions:(id)arg1 categories:(id)arg2 precision:(double)arg3 ;
-(NSArray *)locationGeoParameters;
-(id<GEOMapServiceBatchSpatialLookupTicket>)businessGenericTicket;
@end
