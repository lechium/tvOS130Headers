/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:57 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SDXPCClientInterface
@required
-(void)triggerProximityAutoFillDetectedWithURL:(id)arg1 completion:(/*^block*/id)arg2;
-(void)activateAssertionWithIdentifier:(id)arg1;
-(void)activityStateWithCompletion:(/*^block*/id)arg1;
-(void)appleIDInfoWithCompletion:(/*^block*/id)arg1;
-(void)contactIDForEmailHash:(id)arg1 phoneHash:(id)arg2 completion:(/*^block*/id)arg3;
-(void)displayNameForEmailHash:(id)arg1 phoneHash:(id)arg2 completion:(/*^block*/id)arg3;
-(void)displayStringForContactIdentifier:(id)arg1 deviceIdentifier:(id)arg2 completion:(/*^block*/id)arg3;
-(void)findContact:(id)arg1 completion:(/*^block*/id)arg2;
-(void)getDeviceAssets:(id)arg1 completion:(/*^block*/id)arg2;
-(void)getPeopleSuggestions:(id)arg1 completion:(/*^block*/id)arg2;
-(void)openSetupURL:(id)arg1 completion:(/*^block*/id)arg2;
-(void)preventExitForLocaleReason:(id)arg1;
-(void)reenableProxCardType:(unsigned char)arg1 completion:(/*^block*/id)arg2;
-(void)repairDevice:(id)arg1 flags:(unsigned)arg2 completion:(/*^block*/id)arg3;
-(void)retriggerProximityPairing:(/*^block*/id)arg1;
-(void)retriggerProximitySetup:(/*^block*/id)arg1;
-(void)setupDevice:(id)arg1 homeIdentifier:(id)arg2 completion:(/*^block*/id)arg3;
-(void)showDevicePickerWithInfo:(id)arg1 completion:(/*^block*/id)arg2;
-(void)testContinuityKeyboardBegin:(BOOL)arg1;
-(void)triggerHomeKitDeviceDetectedWithURL:(id)arg1 completion:(/*^block*/id)arg2;
-(void)wifiPasswordSharingAvailabilityWithCompletion:(/*^block*/id)arg1;
-(void)preheatXPCConnection;

@end

