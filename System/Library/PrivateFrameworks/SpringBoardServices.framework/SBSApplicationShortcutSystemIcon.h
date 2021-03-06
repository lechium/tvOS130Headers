/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:08 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardServices/SBSApplicationShortcutIcon.h>

@class NSString;

@interface SBSApplicationShortcutSystemIcon : SBSApplicationShortcutIcon {

	long long _type;
	NSString* _systemImageName;

}

@property (nonatomic,readonly) long long type;                          //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * systemImageName;              //@synthesize systemImageName=_systemImageName - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(long long)type;
-(id)initWithType:(long long)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(id)initWithSystemImageName:(id)arg1 ;
-(id)_initForSubclass;
-(NSString *)systemImageName;
@end

