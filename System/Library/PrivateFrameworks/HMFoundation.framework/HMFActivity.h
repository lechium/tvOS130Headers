/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:23 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFoundation-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <HMFoundation/HMFLogging.h>
#import <HMFoundation/HMFObject.h>

@protocol OS_os_activity, OS_voucher;
@class HMFUnfairLock, NSObject, NSMutableSet, NSUUID, NSString, NSArray, NSDate;

@interface HMFActivity : HMFObject <HMFLogging, HMFObject> {

	HMFUnfairLock* _lock;
	NSObject*<OS_os_activity> _internal;
	os_activity_scope_state_s* _state;
	NSObject*<OS_voucher> _voucher;
	NSMutableSet* _threadContexts;
	BOOL _valid;
	NSUUID* _identifier;
	HMFActivity* _parent;
	NSString* _name;
	unsigned long long _options;
	NSArray* _internalAssertions;
	NSDate* _startDate;

}

@property (nonatomic,readonly) NSArray * internalAssertions;                      //@synthesize internalAssertions=_internalAssertions - In the implementation block
@property (readonly) NSDate * startDate;                                          //@synthesize startDate=_startDate - In the implementation block
@property (copy,readonly) NSUUID * identifier;                                    //@synthesize identifier=_identifier - In the implementation block
@property (__weak,readonly) HMFActivity * parent;                                 //@synthesize parent=_parent - In the implementation block
@property (copy,readonly) NSString * name;                                        //@synthesize name=_name - In the implementation block
@property (readonly) unsigned long long assertions; 
@property (readonly) unsigned long long options;                                  //@synthesize options=_options - In the implementation block
@property (getter=isValid,readonly) BOOL valid;                                   //@synthesize valid=_valid - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSString * shortDescription; 
@property (copy,readonly) NSString * privateDescription; 
@property (copy,readonly) NSString * propertyDescription; 
@property (nonatomic,copy,readonly) NSArray * attributeDescriptions; 
+(void)initialize;
+(id)bundleIdentifier;
+(id)currentActivity;
+(id)shortDescription;
+(id)logCategory;
+(void)activityWithName:(id)arg1 parent:(id)arg2 options:(unsigned long long)arg3 block:(/*^block*/id)arg4 ;
+(void)activityWithName:(id)arg1 block:(/*^block*/id)arg2 ;
+(void)activityWithName:(id)arg1 parent:(id)arg2 block:(/*^block*/id)arg3 ;
+(void)activityWithName:(id)arg1 parent:(id)arg2 assertions:(unsigned long long)arg3 block:(/*^block*/id)arg4 ;
-(NSString *)name;
-(unsigned long long)hash;
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(HMFActivity *)parent;
-(unsigned long long)options;
-(BOOL)isValid;
-(id)initWithName:(id)arg1 ;
-(NSUUID *)identifier;
-(void)end;
-(void)begin;
-(NSDate *)startDate;
-(void)performBlock:(/*^block*/id)arg1 ;
-(unsigned long long)assertions;
-(NSString *)shortDescription;
-(id)initWithName:(id)arg1 parent:(id)arg2 ;
-(void)mark;
-(NSArray *)attributeDescriptions;
-(id)logIdentifier;
-(id)initWithName:(id)arg1 parent:(id)arg2 options:(unsigned long long)arg3 ;
-(void)markWithFormat:(id)arg1 ;
-(void)markWithReason:(id)arg1 ;
-(NSArray *)internalAssertions;
-(id)initWithName:(id)arg1 parent:(id)arg2 assertions:(unsigned long long)arg3 ;
@end

