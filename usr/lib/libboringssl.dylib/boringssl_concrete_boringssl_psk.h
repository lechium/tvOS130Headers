/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:28:37 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/lib/libboringssl.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libboringssl.dylib/OS_boringssl_psk.h>

@protocol OS_dispatch_data;
@class NSObject, NSString;

@interface boringssl_concrete_boringssl_psk : NSObject <OS_boringssl_psk> {

	NSObject*<OS_dispatch_data> key;
	NSObject*<OS_dispatch_data> identity;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@end
