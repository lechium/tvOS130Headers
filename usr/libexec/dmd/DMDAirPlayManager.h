/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:35 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/dmd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface DMDAirPlayManager : NSObject {

	BOOL mDeviceIDIsMAC;
	NSString* _currentlyPickedDestinationName;
	NSString* _currentlyPickedDestinationDeviceID;

}

@property (nonatomic,copy) NSString * currentlyPickedDestinationName;                  //@synthesize currentlyPickedDestinationName=_currentlyPickedDestinationName - In the implementation block
@property (nonatomic,copy) NSString * currentlyPickedDestinationDeviceID;              //@synthesize currentlyPickedDestinationDeviceID=_currentlyPickedDestinationDeviceID - In the implementation block
+(id)shared;
-(id)initPrivate;
-(void*)_outputContextForSessionType:(unsigned long long)arg1 ;
-(void)setCurrentlyPickedDestinationName:(NSString *)arg1 ;
-(void)setCurrentlyPickedDestinationDeviceID:(NSString *)arg1 ;
-(NSString *)currentlyPickedDestinationDeviceID;
-(id)_discoverDeviceWithDestinationDeviceID:(id)arg1 scanWaitTime:(double)arg2 error:(id*)arg3 ;
-(NSString *)currentlyPickedDestinationName;
-(id)_discoverDeviceWithDestinationName:(id)arg1 scanWaitTime:(double)arg2 sessionType:(unsigned long long)arg3 ;
-(BOOL)_setOutputDevices:(id)arg1 forSessionType:(unsigned long long)arg2 password:(id)arg3 error:(id*)arg4 ;
-(void)_promptUserToMirrorOnDisplayNamed:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(BOOL)startAirPlaySessionWithDestinationName:(id)arg1 destinationDeviceID:(id)arg2 password:(id)arg3 scanWaitTime:(double)arg4 sessionType:(unsigned long long)arg5 force:(BOOL)arg6 error:(id*)arg7 ;
-(BOOL)stopAirPlaySessionOfType:(unsigned long long)arg1 error:(id*)arg2 ;
@end

