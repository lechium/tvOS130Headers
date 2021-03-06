/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:54 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContentKit/DCMapsLink.h>

@class NSURL, NSArray, NSString;

@interface DCNewGoogleMapsLink : DCMapsLink {

	BOOL _showsTransit;
	BOOL _showsBicycling;
	BOOL _showsStreetView;
	BOOL _showsTraffic;
	BOOL _parsed;
	int _linkType;
	unsigned long long _mapType;
	unsigned long long _directionsMode;
	long long _zoomLevel;
	NSURL* _URL;
	NSArray* _mapsURLComponents;
	NSString* _location;

}

@property (nonatomic,retain) NSURL * URL;                              //@synthesize URL=_URL - In the implementation block
@property (nonatomic,retain) NSArray * mapsURLComponents;              //@synthesize mapsURLComponents=_mapsURLComponents - In the implementation block
@property (nonatomic,retain) NSString * location;                      //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) BOOL parsed;                            //@synthesize parsed=_parsed - In the implementation block
@property (nonatomic,readonly) int linkType;                           //@synthesize linkType=_linkType - In the implementation block
+(BOOL)isMapsURL:(id)arg1 ;
+(id)mapsLinkWithURL:(id)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(void)parse;
-(int)linkType;
-(id)destinationAddress;
-(NSString *)location;
-(void)setLocation:(NSString *)arg1 ;
-(unsigned long long)mapType;
-(id)searchLocation;
-(id)searchQuery;
-(long long)zoomLevel;
-(id)startAddress;
-(BOOL)showsTraffic;
-(id)dataString;
-(unsigned long long)directionsMode;
-(id)searchNearQuery;
-(id)centerLocation;
-(BOOL)showsTransit;
-(BOOL)showsStreetView;
-(BOOL)showsBicycling;
-(id)streetViewLocation;
-(NSArray *)mapsURLComponents;
-(id)mapsURLComponentAtIndex:(long long)arg1 ;
-(void)parseLinkType;
-(id)latLonZoomString;
-(void)parseLatLonZoom;
-(void)parseMapsData;
-(void)setMapsURLComponents:(NSArray *)arg1 ;
-(BOOL)parsed;
@end

