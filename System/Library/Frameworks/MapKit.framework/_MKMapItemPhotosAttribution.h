/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:08 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/_MKMapItemAttribution.h>

@class GEOMapItemPhotosAttribution, NSArray;

@interface _MKMapItemPhotosAttribution : _MKMapItemAttribution {

	GEOMapItemPhotosAttribution* _geoPhotosAttribution;

}

@property (nonatomic,readonly) NSArray * addPhotoURLs; 
-(NSArray *)addPhotoURLs;
-(id)urlsForPhotoWithIdentifier:(id)arg1 ;
-(id)initWithGEOMapItemAttribution:(id)arg1 ;
@end
