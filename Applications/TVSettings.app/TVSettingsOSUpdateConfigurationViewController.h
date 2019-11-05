/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:59:24 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/TVSettings.app/TVSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVSettingKit/TSKViewController.h>

@class TVSettingsOSUpdateConfiguration;

@interface TVSettingsOSUpdateConfigurationViewController : TSKViewController {

	TVSettingsOSUpdateConfiguration* _currentConfiguration;
	unsigned long long _configurationCheckState;
	unsigned long long _configurationLoadingState;

}

@property (nonatomic,retain) TVSettingsOSUpdateConfiguration * currentConfiguration;              //@synthesize currentConfiguration=_currentConfiguration - In the implementation block
@property (assign,nonatomic) unsigned long long configurationCheckState;                          //@synthesize configurationCheckState=_configurationCheckState - In the implementation block
@property (assign,nonatomic) unsigned long long configurationLoadingState;                        //@synthesize configurationLoadingState=_configurationLoadingState - In the implementation block
-(void)dealloc;
-(TVSettingsOSUpdateConfiguration *)currentConfiguration;
-(void)setCurrentConfiguration:(TVSettingsOSUpdateConfiguration *)arg1 ;
-(void)viewDidLoad;
-(id)loadSettingGroups;
-(void)setConfigurationCheckState:(unsigned long long)arg1 ;
-(unsigned long long)configurationCheckState;
-(void)_warnAboutMissingAppleConnectCredentials;
-(void)_configurationWillChange:(id)arg1 ;
-(void)_configurationDidChange:(id)arg1 ;
-(void)setConfigurationLoadingState:(unsigned long long)arg1 ;
-(void)_updateConfigurationItem:(id)arg1 withValue:(id)arg2 ;
-(void)_checkConfiguration:(id)arg1 ;
-(void)_updateCheckConfigurationItem:(id)arg1 ;
-(void)_clearTextSettingItem:(id)arg1 ;
-(unsigned long long)configurationLoadingState;
-(void)_warnAboutMissingVPNProfile;
-(void)_warnAboutMissingCarryProfile;
-(void)_warnAboutWrongURLs;
@end
