/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:47 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Support/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <appstored/Task.h>

@class NSMutableDictionary, NSArray;

@interface SystemAppBootstrapTask : Task {

	NSMutableDictionary* _installs;
	NSArray* _results;

}

@property (copy,readonly) NSArray * results;              //@synthesize results=_results - In the implementation block
+(id)_messageForError:(id)arg1 ;
-(NSArray *)results;
-(void)main;
-(void)_showInternalConnectionDialogWithError:(id)arg1 ;
-(id)initWithInstalls:(id)arg1 ;
@end
