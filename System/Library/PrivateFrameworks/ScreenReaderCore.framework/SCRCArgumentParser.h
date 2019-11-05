/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:37 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScreenReaderCore/SCRCArgumentSubcommand.h>

@class NSMutableArray, NSString, SCRCArgumentSubcommand;

@interface SCRCArgumentParser : SCRCArgumentSubcommand {

	int _argc;
	char** _argv;
	NSMutableArray* _subcommandArray;
	NSMutableArray* _argumentArray;
	NSString* _appName;
	SCRCArgumentSubcommand* _subcommand;
	BOOL _isLaunchedAtLogin;

}
+(id)processIdentifier;
+(id)versionString;
+(id)commandPath;
-(void)dealloc;
-(int)run;
-(void)stop;
-(BOOL)parse;
-(id)appName;
-(void)setAppName:(id)arg1 ;
-(id)initWithArgc:(int)arg1 argv:(const char**)arg2 ;
-(id)_displayHelp:(id)arg1 ;
-(char**)argv;
-(id)_displayVersion:(id)arg1 ;
-(int)argc;
-(BOOL)isLaunchedAtLogin;
-(void)addSubcommand:(id)arg1 ;
-(id)setRunningAtStartup:(id)arg1 ;
@end
