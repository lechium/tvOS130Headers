/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:21 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSSet;

@interface CLSEICategory : NSManagedObject

@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSSet * subCategories; 
@property (nonatomic,retain) CLSEICategory * parentCategory; 
@property (nonatomic,retain) NSSet * events; 
@end

