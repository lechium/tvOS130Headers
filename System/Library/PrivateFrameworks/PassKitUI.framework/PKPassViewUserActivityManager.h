/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:09 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKForegroundActiveArbiterObserver.h>

@protocol OS_dispatch_queue;
@class NSUserActivity, NSObject, NSString;

@interface PKPassViewUserActivityManager : NSObject <PKForegroundActiveArbiterObserver> {

	NSUserActivity* _currentUserActivity;
	NSObject*<OS_dispatch_queue> _queue;
	BOOL _isForegroundActive;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(id)_init;
-(void)foregroundActiveArbiter:(id)arg1 didUpdateForegroundActiveState:(SCD_Struct_PK4)arg2 ;
-(void)startedViewingPass:(id)arg1 ;
-(void)endedViewingPass;
-(id)_currentUserActivityPassUniqueID;
-(void)_endedViewingPass;
-(BOOL)_shouldDonateActivity:(id)arg1 ;
-(id)_displayNameForPass:(id)arg1 ;
-(id)_templateNameForPass:(id)arg1 ;
@end
