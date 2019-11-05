/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:54:28 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/PineBoard.app/PineBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PineBoard/BSWatchdogProviding.h>

@class NSString;

@interface PBSAnimationWatchdogProvider : NSObject <BSWatchdogProviding> {

	double _timeout;

}

@property (nonatomic,readonly) double timeout;                      //@synthesize timeout=_timeout - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)timeout;
-(double)watchdogTimeout;
-(BOOL)shouldWatchdog:(id*)arg1 ;
-(id)initWithTimeout:(double)arg1 ;
@end
