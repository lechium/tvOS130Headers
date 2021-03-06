/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:33 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/backboardd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <backboardd/backboardd-Structs.h>
#import <backboardd/BKHIDEventDispatcher.h>

@protocol OS_dispatch_queue, OS_dispatch_mach;
@class NSObject, BKHIDEventStudyLogger, BKHIDEventDeliveryManager, BKHumanPresenceHIDEventProcessor, BKKeyboardHIDEventProcessor, BKGenericGestureHIDEventProcessor, BKButtonHIDEventProcessor, BKSmartCoverHIDEventProcessor, BKExternalHIDEventProcessor, BKHIDEventSenderCache, BKHIDEventRecognizerEngine, NSString;

@interface BKHIDSystemInterface : NSObject <BKHIDEventDispatcher> {

	IOHIDEventSystemRef _HIDEventSystem;
	IOHIDEventSystemClientRef _HIDEventSystemClient;
	NSObject*<OS_dispatch_queue> _gsEventQueue;
	BKHIDEventStudyLogger* _studyLogger;
	BOOL _open;
	BOOL _fullyInitialized;
	BKHIDEventDeliveryManager* _deliveryManager;
	BKHumanPresenceHIDEventProcessor* _humanPresenceEventProcessor;
	BKKeyboardHIDEventProcessor* _keyboardEventProcessor;
	BKGenericGestureHIDEventProcessor* _genericGestureEventProcessor;
	BKButtonHIDEventProcessor* _buttonEventProcessor;
	BKSmartCoverHIDEventProcessor* _smartCoverEventProcessor;
	BKExternalHIDEventProcessor* _externalEventProcessor;
	BKHIDEventSenderCache* _senderCache;
	BKHIDEventRecognizerEngine* _recognizerEngine;
	NSObject*<OS_dispatch_mach> _HIDSystemChannel;

}

@property (getter=isOpen) BOOL open;                                                                        //@synthesize open=_open - In the implementation block
@property (getter=isFullyInitialized) BOOL fullyInitialized;                                                //@synthesize fullyInitialized=_fullyInitialized - In the implementation block
@property (getter=HIDSystemChannel,retain) NSObject*<OS_dispatch_mach> HIDSystemChannel;                    //@synthesize HIDSystemChannel=_HIDSystemChannel - In the implementation block
@property (retain) BKHIDEventDeliveryManager * deliveryManager;                                             //@synthesize deliveryManager=_deliveryManager - In the implementation block
@property (nonatomic,retain) BKHumanPresenceHIDEventProcessor * humanPresenceEventProcessor;                //@synthesize humanPresenceEventProcessor=_humanPresenceEventProcessor - In the implementation block
@property (nonatomic,retain) BKKeyboardHIDEventProcessor * keyboardEventProcessor;                          //@synthesize keyboardEventProcessor=_keyboardEventProcessor - In the implementation block
@property (nonatomic,retain) BKGenericGestureHIDEventProcessor * genericGestureEventProcessor;              //@synthesize genericGestureEventProcessor=_genericGestureEventProcessor - In the implementation block
@property (nonatomic,retain) BKButtonHIDEventProcessor * buttonEventProcessor;                              //@synthesize buttonEventProcessor=_buttonEventProcessor - In the implementation block
@property (nonatomic,retain) BKSmartCoverHIDEventProcessor * smartCoverEventProcessor;                      //@synthesize smartCoverEventProcessor=_smartCoverEventProcessor - In the implementation block
@property (nonatomic,retain) BKExternalHIDEventProcessor * externalEventProcessor;                          //@synthesize externalEventProcessor=_externalEventProcessor - In the implementation block
@property (retain) BKHIDEventSenderCache * senderCache;                                                     //@synthesize senderCache=_senderCache - In the implementation block
@property (retain) BKHIDEventRecognizerEngine * recognizerEngine;                                           //@synthesize recognizerEngine=_recognizerEngine - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(BOOL)isOpen;
-(id)_mainDisplay;
-(void)setOpen:(BOOL)arg1 ;
-(void)startServer;
-(BKHIDEventDeliveryManager *)deliveryManager;
-(void)setDeliveryManager:(BKHIDEventDeliveryManager *)arg1 ;
-(id)destinationsForEvent:(IOHIDEventRef)arg1 fromSender:(id)arg2 ;
-(void)postEvent:(IOHIDEventRef)arg1 toDestination:(id)arg2 ;
-(void)postEvent:(IOHIDEventRef)arg1 fromSender:(id)arg2 ;
-(void)startHIDSystem;
-(void)startEventProcessors;
-(id)systemPropertyForKey:(id)arg1 ;
-(void)setSystemProperty:(id)arg1 forKey:(id)arg2 ;
-(void)injectHIDEvent:(IOHIDEventRef)arg1 ;
-(void)injectGSEvent:(GSEventRef)arg1 ;
-(IOHIDEventRef)systemEventOfType:(unsigned)arg1 matchingEvent:(IOHIDEventRef)arg2 options:(unsigned)arg3 ;
-(void)_beginHandlingEvents;
-(id)_processorForKeyboardEvent:(IOHIDEventRef)arg1 ;
-(long long)_processKeyboardEvent:(IOHIDEventRef)arg1 sender:(id)arg2 ;
-(id)IOHIDServicesMatching:(id)arg1 ;
-(void)registerIOHIDServicesCallback:(/*function pointer*/void*)arg1 matchingDictionary:(id)arg2 target:(void*)arg3 refCon:(void*)arg4 ;
-(void)unregisterIOHIDServicesCallback:(/*function pointer*/void*)arg1 matchingDictionary:(id)arg2 target:(void*)arg3 refCon:(void*)arg4 ;
-(void)registerWatchdog;
-(BKHumanPresenceHIDEventProcessor *)humanPresenceEventProcessor;
-(void)setHumanPresenceEventProcessor:(BKHumanPresenceHIDEventProcessor *)arg1 ;
-(BKKeyboardHIDEventProcessor *)keyboardEventProcessor;
-(void)setKeyboardEventProcessor:(BKKeyboardHIDEventProcessor *)arg1 ;
-(BKGenericGestureHIDEventProcessor *)genericGestureEventProcessor;
-(void)setGenericGestureEventProcessor:(BKGenericGestureHIDEventProcessor *)arg1 ;
-(BKButtonHIDEventProcessor *)buttonEventProcessor;
-(void)setButtonEventProcessor:(BKButtonHIDEventProcessor *)arg1 ;
-(BKSmartCoverHIDEventProcessor *)smartCoverEventProcessor;
-(void)setSmartCoverEventProcessor:(BKSmartCoverHIDEventProcessor *)arg1 ;
-(BKExternalHIDEventProcessor *)externalEventProcessor;
-(void)setExternalEventProcessor:(BKExternalHIDEventProcessor *)arg1 ;
-(BKHIDEventSenderCache *)senderCache;
-(void)setSenderCache:(BKHIDEventSenderCache *)arg1 ;
-(BKHIDEventRecognizerEngine *)recognizerEngine;
-(void)setRecognizerEngine:(BKHIDEventRecognizerEngine *)arg1 ;
-(BOOL)isFullyInitialized;
-(void)setFullyInitialized:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_mach>)HIDSystemChannel;
-(void)setHIDSystemChannel:(NSObject*<OS_dispatch_mach>)arg1 ;
@end

