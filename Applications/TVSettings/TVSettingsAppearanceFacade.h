/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:59:23 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/TVSettings.app/TVSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TSKMappingFormatter, NSArray;

@interface TVSettingsAppearanceFacade : NSObject {

	long long _systemAppearance;
	BOOL _systemAppearanceNeedsUpdate;
	TSKMappingFormatter* _userInterfaceStyleFormatter;

}

@property (assign,nonatomic) long long systemAppearance; 
@property (nonatomic,retain) TSKMappingFormatter * userInterfaceStyleFormatter;              //@synthesize userInterfaceStyleFormatter=_userInterfaceStyleFormatter - In the implementation block
@property (nonatomic,readonly) NSArray * appearanceOptions; 
+(id)sharedInstance;
-(id)init;
-(void)setSystemAppearance:(long long)arg1 ;
-(long long)systemAppearance;
-(void)_updateSystemAppearance;
-(TSKMappingFormatter *)userInterfaceStyleFormatter;
-(void)invalidateSystemAppearance;
-(NSArray *)appearanceOptions;
-(void)setUserInterfaceStyleFormatter:(TSKMappingFormatter *)arg1 ;
@end

