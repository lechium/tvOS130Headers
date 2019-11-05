/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:29 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSet, NSLocale;

@interface PGTimeTitleOptions : NSObject {

	BOOL _filterDates;
	NSSet* _eventNodes;
	NSSet* _locationNodes;
	unsigned long long _allowedFormats;
	NSLocale* _locale;

}

@property (nonatomic,retain) NSSet * eventNodes;                             //@synthesize eventNodes=_eventNodes - In the implementation block
@property (nonatomic,retain) NSSet * locationNodes;                          //@synthesize locationNodes=_locationNodes - In the implementation block
@property (assign,nonatomic) unsigned long long allowedFormats;              //@synthesize allowedFormats=_allowedFormats - In the implementation block
@property (assign,nonatomic) BOOL filterDates;                               //@synthesize filterDates=_filterDates - In the implementation block
@property (nonatomic,retain) NSLocale * locale;                              //@synthesize locale=_locale - In the implementation block
-(id)init;
-(void)setLocale:(NSLocale *)arg1 ;
-(NSLocale *)locale;
-(NSSet *)eventNodes;
-(void)setEventNodes:(NSSet *)arg1 ;
-(NSSet *)locationNodes;
-(void)setLocationNodes:(NSSet *)arg1 ;
-(unsigned long long)allowedFormats;
-(void)setAllowedFormats:(unsigned long long)arg1 ;
-(BOOL)filterDates;
-(void)setFilterDates:(BOOL)arg1 ;
@end
