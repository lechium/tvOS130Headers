/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:50 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Support/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <appstored/appstored-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <appstored/NSCopying.h>

@class NSString, TFMemoryUsage, TFDisplay;

@interface TFDevice : PBCodable <NSCopying> {

	NSString* _architecture;
	unsigned _batteryPercentage;
	NSString* _carrier;
	NSString* _cellularNetworkType;
	int _connection;
	TFMemoryUsage* _disk;
	TFDisplay* _display;
	NSString* _locale;
	NSString* _model;
	NSString* _osVersion;
	NSString* _timezone;
	SCD_Struct_TF8 _has;

}

@property (nonatomic,readonly) BOOL hasModel; 
@property (nonatomic,retain) NSString * model;                            //@synthesize model=_model - In the implementation block
@property (nonatomic,readonly) BOOL hasOsVersion; 
@property (nonatomic,retain) NSString * osVersion;                        //@synthesize osVersion=_osVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasArchitecture; 
@property (nonatomic,retain) NSString * architecture;                     //@synthesize architecture=_architecture - In the implementation block
@property (nonatomic,readonly) BOOL hasDisplay; 
@property (nonatomic,retain) TFDisplay * display;                         //@synthesize display=_display - In the implementation block
@property (nonatomic,readonly) BOOL hasLocale; 
@property (nonatomic,retain) NSString * locale;                           //@synthesize locale=_locale - In the implementation block
@property (nonatomic,readonly) BOOL hasTimezone; 
@property (nonatomic,retain) NSString * timezone;                         //@synthesize timezone=_timezone - In the implementation block
@property (nonatomic,readonly) BOOL hasCarrier; 
@property (nonatomic,retain) NSString * carrier;                          //@synthesize carrier=_carrier - In the implementation block
@property (nonatomic,readonly) BOOL hasCellularNetworkType; 
@property (nonatomic,retain) NSString * cellularNetworkType;              //@synthesize cellularNetworkType=_cellularNetworkType - In the implementation block
@property (assign,nonatomic) BOOL hasConnection; 
@property (assign,nonatomic) int connection;                              //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) BOOL hasDisk; 
@property (nonatomic,retain) TFMemoryUsage * disk;                        //@synthesize disk=_disk - In the implementation block
@property (assign,nonatomic) BOOL hasBatteryPercentage; 
@property (assign,nonatomic) unsigned batteryPercentage;                  //@synthesize batteryPercentage=_batteryPercentage - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)setLocale:(NSString *)arg1 ;
-(NSString *)locale;
-(void)setConnection:(int)arg1 ;
-(int)connection;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(TFDisplay *)display;
-(void)setDisplay:(TFDisplay *)arg1 ;
-(NSString *)model;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)carrier;
-(BOOL)hasConnection;
-(BOOL)hasLocale;
-(void)setModel:(NSString *)arg1 ;
-(BOOL)hasModel;
-(NSString *)timezone;
-(void)setTimezone:(NSString *)arg1 ;
-(BOOL)hasTimezone;
-(NSString *)osVersion;
-(void)setOsVersion:(NSString *)arg1 ;
-(BOOL)hasOsVersion;
-(NSString *)architecture;
-(void)setArchitecture:(NSString *)arg1 ;
-(unsigned)batteryPercentage;
-(void)setBatteryPercentage:(unsigned)arg1 ;
-(void)setCarrier:(NSString *)arg1 ;
-(NSString *)cellularNetworkType;
-(void)setCellularNetworkType:(NSString *)arg1 ;
-(void)setDisk:(TFMemoryUsage *)arg1 ;
-(BOOL)hasArchitecture;
-(BOOL)hasDisplay;
-(BOOL)hasCarrier;
-(BOOL)hasCellularNetworkType;
-(void)setHasConnection:(BOOL)arg1 ;
-(id)connectionAsString:(int)arg1 ;
-(int)StringAsConnection:(id)arg1 ;
-(BOOL)hasDisk;
-(void)setHasBatteryPercentage:(BOOL)arg1 ;
-(BOOL)hasBatteryPercentage;
-(TFMemoryUsage *)disk;
@end
