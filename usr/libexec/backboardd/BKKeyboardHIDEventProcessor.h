/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:32 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/backboardd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <backboardd/backboardd-Structs.h>
#import <backboardd/BKIOHIDServiceMatchObserver.h>
#import <backboardd/BKIOHIDServiceDisappearanceObserver.h>
#import <backboardd/BKHIDEventProcessor.h>

@protocol OS_dispatch_queue;
@class NSMutableArray, NSObject, NSString, BKIOHIDServiceMatcher, BKHIDEventDeliveryManager, BKKeyboardInfo;

@interface BKKeyboardHIDEventProcessor : NSObject <BKIOHIDServiceMatchObserver, BKIOHIDServiceDisappearanceObserver, BKHIDEventProcessor> {

	NSMutableArray* _allKeyboards;
	NSMutableArray* _usableKeyboards;
	NSMutableArray* _eventRecognizers;
	NSObject*<OS_dispatch_queue> _queue;
	NSString* _keyboardLayout;
	long long _countOfKeyboardsRequiringAllSmartCoverHESDisengagedForOpen;
	BOOL _systemAppConsumesAllKeyboardEvents;
	BKIOHIDServiceMatcher* _keyboardServiceMatcher;
	BKHIDEventDeliveryManager* _deliveryManager;
	BKKeyboardInfo* _primaryKeyboardInfo;

}

@property (nonatomic,retain) BKIOHIDServiceMatcher * keyboardServiceMatcher;              //@synthesize keyboardServiceMatcher=_keyboardServiceMatcher - In the implementation block
@property (nonatomic,retain) BKHIDEventDeliveryManager * deliveryManager;                 //@synthesize deliveryManager=_deliveryManager - In the implementation block
@property (nonatomic,retain) BKKeyboardInfo * primaryKeyboardInfo;                        //@synthesize primaryKeyboardInfo=_primaryKeyboardInfo - In the implementation block
@property (assign,nonatomic) BOOL systemAppConsumesAllKeyboardEvents;                     //@synthesize systemAppConsumesAllKeyboardEvents=_systemAppConsumesAllKeyboardEvents - In the implementation block
@property (retain) NSString * keyboardLayout; 
@property (getter=isCapsLockLightOn) BOOL capsLockLightOn; 
@property (readonly) BOOL capsLockKeyHasLanguageSwitchLabel; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)debugDescription;
-(id)init;
-(void)dealloc;
-(NSString *)keyboardLayout;
-(void)setKeyboardLayout:(NSString *)arg1 ;
-(void)setCapsLockLightOn:(BOOL)arg1 ;
-(void)setCapsLockDelayOverride:(double)arg1 ;
-(long long)processEvent:(IOHIDEventRef)arg1 sender:(id)arg2 dispatcher:(id)arg3 ;
-(void)serviceDidDisappear:(id)arg1 ;
-(void)matcher:(id)arg1 servicesDidMatch:(id)arg2 ;
-(void)handleUnicodeEvent:(IOHIDEventRef)arg1 fromSender:(id)arg2 ;
-(void)setKeyboardLightsSupended:(BOOL)arg1 ;
-(id)primaryHardwareKeyboardLanguage;
-(void)setRomanCapsLockSwitchModeActive:(BOOL)arg1 ;
-(BOOL)isCapsLockLightOn;
-(BOOL)capsLockKeyHasLanguageSwitchLabel;
-(id)_queue_keyboardInfoForSenderID:(unsigned long long)arg1 ;
-(void)_queue_setKeyboardLightsSuspended:(BOOL)arg1 ;
-(void)_queue_keyboardsDetected:(id)arg1 ;
-(void)_queue_keyboardRemoved:(id)arg1 ;
-(void)_queue_setPrimaryKeyboard:(id)arg1 ;
-(void)_queue_usableKeyboardAttached:(id)arg1 ;
-(void)_queue_usableKeyboardDetached:(id)arg1 ;
-(id)_queue_destinationsForKeyboardEvent:(IOHIDEventRef)arg1 keyboard:(id)arg2 senderInfo:(id)arg3 ;
-(void)_queue_handleUnicodeEvent:(IOHIDEventRef)arg1 fromSender:(id)arg2 ;
-(void)_queue_handleKeyEvent:(IOHIDEventRef)arg1 fromSender:(id)arg2 ;
-(void)_queue_watchForGestures:(id)arg1 ;
-(void)_queue_stopWatchingForGestures:(id)arg1 ;
-(void)smartKeyboardAttachmentStateDidChange:(id)arg1 ;
-(BKIOHIDServiceMatcher *)keyboardServiceMatcher;
-(void)setKeyboardServiceMatcher:(BKIOHIDServiceMatcher *)arg1 ;
-(BKHIDEventDeliveryManager *)deliveryManager;
-(void)setDeliveryManager:(BKHIDEventDeliveryManager *)arg1 ;
-(BKKeyboardInfo *)primaryKeyboardInfo;
-(void)setPrimaryKeyboardInfo:(BKKeyboardInfo *)arg1 ;
-(BOOL)systemAppConsumesAllKeyboardEvents;
-(void)setSystemAppConsumesAllKeyboardEvents:(BOOL)arg1 ;
@end
