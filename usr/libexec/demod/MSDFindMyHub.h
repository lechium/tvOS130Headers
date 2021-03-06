/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:34 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/demod
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray, NSMutableDictionary, MSDTargetDevice, NSDictionary;

@interface MSDFindMyHub : NSObject {

	BOOL _useLocalHub;
	BOOL _isLogicSync;
	NSString* _server;
	NSString* _port;
	NSString* _bonjourName;
	NSArray* _serverList;
	NSMutableDictionary* _deviceOptions;
	MSDTargetDevice* _device;
	NSDictionary* _fmhDict;

}

@property (retain) MSDTargetDevice * device;                         //@synthesize device=_device - In the implementation block
@property (retain) NSDictionary * fmhDict;                           //@synthesize fmhDict=_fmhDict - In the implementation block
@property (assign) BOOL isLogicSync;                                 //@synthesize isLogicSync=_isLogicSync - In the implementation block
@property (retain) NSString * server;                                //@synthesize server=_server - In the implementation block
@property (retain) NSString * port;                                  //@synthesize port=_port - In the implementation block
@property (retain) NSString * bonjourName;                           //@synthesize bonjourName=_bonjourName - In the implementation block
@property (retain) NSArray * serverList;                             //@synthesize serverList=_serverList - In the implementation block
@property (retain) NSMutableDictionary * deviceOptions;              //@synthesize deviceOptions=_deviceOptions - In the implementation block
@property (assign) BOOL useLocalHub;                                 //@synthesize useLocalHub=_useLocalHub - In the implementation block
+(id)sharedInstance;
-(NSString *)port;
-(void)setPort:(NSString *)arg1 ;
-(NSString *)server;
-(void)setServer:(NSString *)arg1 ;
-(MSDTargetDevice *)device;
-(void)setDevice:(MSDTargetDevice *)arg1 ;
-(NSString *)bonjourName;
-(void)setBonjourName:(NSString *)arg1 ;
-(BOOL)discoverAndEnrollWithHub:(id*)arg1 ;
-(void)setIsLogicSync:(BOOL)arg1 ;
-(BOOL)askFindMyHubForHubInfoAndDeviceOptions;
-(BOOL)enrollAndSetup:(id*)arg1 ;
-(BOOL)useLocalHub;
-(BOOL)compareSavedHubHostNameWithNewHostName;
-(BOOL)compareSavedHubHostIPsWithNewHostIPs;
-(NSMutableDictionary *)deviceOptions;
-(BOOL)isLogicSync;
-(void)setFmhDict:(NSDictionary *)arg1 ;
-(NSDictionary *)fmhDict;
-(void)setServerList:(NSArray *)arg1 ;
-(void)setUseLocalHub:(BOOL)arg1 ;
-(void)setDeviceOptions:(NSMutableDictionary *)arg1 ;
-(NSArray *)serverList;
-(unsigned long long)queryFindMyHubAndDetermineLogicSyncResult;
@end

