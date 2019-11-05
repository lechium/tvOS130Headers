/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:29 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/TVSettingKit.framework/TVSettingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSFormatter.h>

@class NSString;

@interface TSKBoolFormatter : NSFormatter {

	NSString* _onTitle;
	NSString* _offTitle;

}

@property (nonatomic,copy,readonly) NSString * onTitle;               //@synthesize onTitle=_onTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * offTitle;              //@synthesize offTitle=_offTitle - In the implementation block
+(id)formatterWithOnTitle:(id)arg1 offTitle:(id)arg2 ;
+(id)onOffFormatter;
+(id)yesNoFormatter;
-(id)stringForObjectValue:(id)arg1 ;
-(BOOL)getObjectValue:(out id*)arg1 forString:(id)arg2 errorDescription:(out id*)arg3 ;
-(NSString *)offTitle;
-(NSString *)onTitle;
-(id)initWithOnTitle:(id)arg1 andOffTitle:(id)arg2 ;
@end
