/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:35 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class HMFPairingIdentity, NSMutableArray;

@interface __HMDRegisteredIdentity : HMFObject {

	HMFPairingIdentity* _identity;
	NSMutableArray* _registeredObjects;

}

@property (copy,readonly) HMFPairingIdentity * identity;              //@synthesize identity=_identity - In the implementation block
@property (readonly) NSMutableArray * registeredObjects;              //@synthesize registeredObjects=_registeredObjects - In the implementation block
-(id)debugDescription;
-(id)description;
-(id)init;
-(HMFPairingIdentity *)identity;
-(id)initWithIdentity:(id)arg1 ;
-(NSMutableArray *)registeredObjects;
@end
