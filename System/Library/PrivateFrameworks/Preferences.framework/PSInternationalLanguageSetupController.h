/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:01 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSSetupController.h>

@class PSLanguageSelector;

@interface PSInternationalLanguageSetupController : PSSetupController {

	PSLanguageSelector* _languageSelector;

}

@property (nonatomic,retain) PSLanguageSelector * languageSelector;              //@synthesize languageSelector=_languageSelector - In the implementation block
-(void)commit;
-(void)setupController;
-(PSLanguageSelector *)languageSelector;
-(void)setLanguage:(id)arg1 specifier:(id)arg2 ;
-(void)setLanguageSelector:(PSLanguageSelector *)arg1 ;
@end

