/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:23 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <itunesstored/itunesstored-Structs.h>
@class NSObject, NSString;

@interface WiFiManager : NSObject {

	int _clientType;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	WiFiManagerClientRef _wifiClient;

}

@property (assign) int clientType; 
@property (readonly) NSString * IPAddress; 
+(id)sharedWiFiManager;
-(id)init;
-(void)dealloc;
-(void)setClientType:(int)arg1 ;
-(int)clientType;
-(id)_wifiInterfaceName;
-(void*)_wifiClient;
-(NSString *)IPAddress;
-(long long)_wifiClientTypeForManagerType:(int)arg1 ;
@end
