/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:57 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GEODefaultsDBCollection, NSString;

@interface GEODefaultsDBValue : NSObject {

	GEODefaultsDBCollection* _parent;
	long long _dbId;
	NSString* _type;
	id _value;

}

@property (nonatomic,__weak,readonly) GEODefaultsDBCollection * parent;              //@synthesize parent=_parent - In the implementation block
@property (assign,nonatomic) long long dbId;                                         //@synthesize dbId=_dbId - In the implementation block
@property (nonatomic,retain) NSString * type;                                        //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) id value;                                               //@synthesize value=_value - In the implementation block
+(id)dbValue:(id)arg1 type:(id)arg2 value:(id)arg3 ;
-(GEODefaultsDBCollection *)parent;
-(NSString *)type;
-(void)setType:(NSString *)arg1 ;
-(id)value;
-(void)setValue:(id)arg1 ;
-(id)initWithParent:(id)arg1 type:(id)arg2 value:(id)arg3 ;
-(long long)dbId;
-(void)setDbId:(long long)arg1 ;
@end
