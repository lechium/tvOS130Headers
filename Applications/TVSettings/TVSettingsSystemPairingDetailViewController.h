/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:59:23 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/TVSettings.app/TVSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVSettingKit/TSKViewController.h>

@class TVSettingsSystemPairingsPairing;

@interface TVSettingsSystemPairingDetailViewController : TSKViewController {

	TVSettingsSystemPairingsPairing* _device;

}

@property (nonatomic,retain) TVSettingsSystemPairingsPairing * device;              //@synthesize device=_device - In the implementation block
-(TVSettingsSystemPairingsPairing *)device;
-(void)setDevice:(TVSettingsSystemPairingsPairing *)arg1 ;
-(void)unpairDevice:(id)arg1 ;
-(id)loadSettingGroups;
@end
