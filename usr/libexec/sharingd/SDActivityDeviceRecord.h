/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:55 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <sharingd/sharingd-Structs.h>
@class NSDate, IDSDevice, NSData, NSUUID, SDActivityDecryptionKey, NSDictionary, SFActivityAdvertisement;

@interface SDActivityDeviceRecord : NSObject {

	NSDate* _lastReceivedAdvertisementDate;
	BOOL _deviceTracked;
	BOOL _disableDuplicateFilterOnce;
	IDSDevice* _idsDevice;
	NSData* _lastRawAdvertisementData;
	NSUUID* _lastUsedKeyIdentifier;
	NSData* _lastAdvertisementData;

}

@property (nonatomic,retain) NSUUID * lastUsedKeyIdentifier;                               //@synthesize lastUsedKeyIdentifier=_lastUsedKeyIdentifier - In the implementation block
@property (nonatomic,readonly) SDActivityDecryptionKey * decryptionKey; 
@property (nonatomic,copy,readonly) NSData * lastAdvertisementData;                        //@synthesize lastAdvertisementData=_lastAdvertisementData - In the implementation block
@property (nonatomic,readonly) SCD_Struct_SD37 lastActivityAdvertisement; 
@property (nonatomic,readonly) unsigned short lastCounter; 
@property (nonatomic,copy,readonly) NSData * lastAdvertisementPayload; 
@property (nonatomic,copy,readonly) NSDictionary * lastAdvertisementOptions; 
@property (nonatomic,retain) IDSDevice * idsDevice;                                        //@synthesize idsDevice=_idsDevice - In the implementation block
@property (assign,nonatomic) BOOL deviceTracked;                                           //@synthesize deviceTracked=_deviceTracked - In the implementation block
@property (assign,nonatomic) BOOL disableDuplicateFilterOnce;                              //@synthesize disableDuplicateFilterOnce=_disableDuplicateFilterOnce - In the implementation block
@property (nonatomic,copy,readonly) NSData * lastRawAdvertisementData;                     //@synthesize lastRawAdvertisementData=_lastRawAdvertisementData - In the implementation block
@property (nonatomic,readonly) SFActivityAdvertisement * clientAdvertisement; 
-(id)description;
-(id)initWithDevice:(id)arg1 ;
-(SDActivityDecryptionKey *)decryptionKey;
-(IDSDevice *)idsDevice;
-(void)setIdsDevice:(IDSDevice *)arg1 ;
-(void)updateWithRawAdvertisementData:(id)arg1 receivedViaScanning:(BOOL)arg2 isReplay:(BOOL)arg3 newAdvertisementHandler:(/*^block*/id)arg4 ;
-(SFActivityAdvertisement *)clientAdvertisement;
-(unsigned short)lastCounter;
-(SCD_Struct_SD37)lastActivityAdvertisement;
-(NSData *)lastAdvertisementPayload;
-(NSDictionary *)lastAdvertisementOptions;
-(void)updateWithRawAdvertisementData:(id)arg1 receivedViaScanning:(BOOL)arg2 newAdvertisementHandler:(/*^block*/id)arg3 ;
-(BOOL)deviceTracked;
-(void)setDeviceTracked:(BOOL)arg1 ;
-(BOOL)disableDuplicateFilterOnce;
-(void)setDisableDuplicateFilterOnce:(BOOL)arg1 ;
-(NSData *)lastRawAdvertisementData;
-(NSUUID *)lastUsedKeyIdentifier;
-(void)setLastUsedKeyIdentifier:(NSUUID *)arg1 ;
-(NSData *)lastAdvertisementData;
@end

