/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:59:24 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/TVSettings.app/TVSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, TVCSEndpointManager;

@interface TVSettingsRemoteAppFacade : NSObject {

	NSArray* _pairedDevices;
	NSArray* _pairableDevices;
	TVCSEndpointManager* _endpointManager;

}

@property (nonatomic,readonly) TVCSEndpointManager * endpointManager;              //@synthesize endpointManager=_endpointManager - In the implementation block
@property (nonatomic,copy) NSArray * pairedDevices;                                //@synthesize pairedDevices=_pairedDevices - In the implementation block
@property (nonatomic,copy) NSArray * pairableDevices;                              //@synthesize pairableDevices=_pairableDevices - In the implementation block
+(id)deviceStatusFormatter;
-(id)init;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSArray *)pairedDevices;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)setPairedDevices:(NSArray *)arg1 ;
-(void)_unpairDevice:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_pairDevice:(id)arg1 withPasscode:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_updateRemotesSynchronously:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)remoteStatusUpdated:(id)arg1 ;
-(TVCSEndpointManager *)endpointManager;
-(NSArray *)pairableDevices;
-(void)setPairableDevices:(NSArray *)arg1 ;
@end

