/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:59:24 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/TVSettings.app/TVSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSFormatter;

@interface TVSettingsAppleRemoteFacade : NSObject

@property (assign,nonatomic) long long sensitivity; 
@property (nonatomic,readonly) NSArray * availableSensitivityValues; 
@property (nonatomic,readonly) NSFormatter * sensitivityFormatter; 
+(id)sharedInstance;
-(NSArray *)availableSensitivityValues;
-(id)availableSensitivityLabels;
-(void)setSensitivity:(long long)arg1 ;
-(long long)sensitivity;
-(NSFormatter *)sensitivityFormatter;
@end

