/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:47 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class NSOperationQueue;

@interface HMDMPCSessionController : HMFObject {

	NSOperationQueue* _speakerGroupCommandOperationQueue;

}

@property (nonatomic,readonly) NSOperationQueue * speakerGroupCommandOperationQueue;              //@synthesize speakerGroupCommandOperationQueue=_speakerGroupCommandOperationQueue - In the implementation block
-(id)init;
-(void)executeSessionWithSessionData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSOperationQueue *)speakerGroupCommandOperationQueue;
@end

