/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:50 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsFoundation/NSLocking.h>

@protocol OS_dispatch_semaphore;
@class NSObject, NSString;

@interface CNBinarySemaphoreLock : NSObject <NSLocking> {

	NSObject*<OS_dispatch_semaphore> _semaphore;
	NSString* _name;

}

@property (copy) NSString * name;              //@synthesize name=_name - In the implementation block
-(NSString *)name;
-(id)description;
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(void)lock;
-(void)unlock;
-(void)setName:(NSString *)arg1 ;
@end

