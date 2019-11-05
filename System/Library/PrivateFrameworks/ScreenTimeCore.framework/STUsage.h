/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:40 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSDate, NSSet, STCoreDevice, STCoreUser;

@interface STUsage : NSManagedObject

@property (nonatomic,retain) NSDate * lastEventDate; 
@property (nonatomic,retain) NSSet * blocks; 
@property (nonatomic,retain) NSDate * lastUpdatedDate; 
@property (nonatomic,retain) STCoreDevice * device; 
@property (nonatomic,retain) STCoreUser * user; 
+(id)fetchRequestMatchingUser:(id)arg1 device:(id)arg2 ;
@end
