/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:54:30 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/PineBoard.app/PineBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PineBoard/MCProfileConnectionObserver.h>

@class NSString;

@interface PBRetailDemoModeObserver : NSObject <MCProfileConnectionObserver> {

	NSString* _lastTriggerValue;

}

@property (nonatomic,copy) NSString * lastTriggerValue;              //@synthesize lastTriggerValue=_lastTriggerValue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)startObserving;
-(void)stopObserving;
-(void)profileConnectionDidReceiveDefaultsChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(id)_currentTriggerValue;
-(void)_configureForDemoMode:(unsigned long long)arg1 ;
-(void)_demoModeTriggerDidChange;
-(NSString *)lastTriggerValue;
-(void)setLastTriggerValue:(NSString *)arg1 ;
@end
