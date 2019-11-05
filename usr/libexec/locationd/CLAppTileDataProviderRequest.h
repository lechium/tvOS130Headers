/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:47 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/locationd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CLAppTileDataProviderRequest : NSObject {

	BOOL _includeRegionalApps;
	BOOL _marqueeAppsOnly;
	float _radiusMeters;
	double _lat;
	double _lon;
	/*^block*/id _handler;
	double _timestamp;

}

@property (assign,nonatomic) double lat;                            //@synthesize lat=_lat - In the implementation block
@property (assign,nonatomic) double lon;                            //@synthesize lon=_lon - In the implementation block
@property (assign,nonatomic) float radiusMeters;                    //@synthesize radiusMeters=_radiusMeters - In the implementation block
@property (assign,nonatomic) BOOL includeRegionalApps;              //@synthesize includeRegionalApps=_includeRegionalApps - In the implementation block
@property (assign,nonatomic) BOOL marqueeAppsOnly;                  //@synthesize marqueeAppsOnly=_marqueeAppsOnly - In the implementation block
@property (nonatomic,copy) id handler;                              //@synthesize handler=_handler - In the implementation block
@property (assign,nonatomic) double timestamp;                      //@synthesize timestamp=_timestamp - In the implementation block
-(void)dealloc;
-(id)handler;
-(void)setHandler:(id)arg1 ;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(void)setLat:(double)arg1 ;
-(void)setLon:(double)arg1 ;
-(double)lat;
-(double)lon;
-(float)radiusMeters;
-(void)setRadiusMeters:(float)arg1 ;
-(void)setIncludeRegionalApps:(BOOL)arg1 ;
-(void)setMarqueeAppsOnly:(BOOL)arg1 ;
-(BOOL)includeRegionalApps;
-(BOOL)marqueeAppsOnly;
@end
