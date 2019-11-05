/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:36 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/dmd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, DMDConfigurationOrganization, NSDate, NSDictionary;

@interface DMDSubscriptionEvent : NSManagedObject

@property (nonatomic,copy) NSString * payloadIdentifier; 
@property (nonatomic,retain) DMDConfigurationOrganization * organization; 
@property (nonatomic,copy) NSString * eventType; 
@property (nonatomic,copy) NSDate * date; 
@property (nonatomic,copy) NSDictionary * details; 
+(id)fetchRequestMatchingEventsFromOrganizationWithIdentifier:(id)arg1 ;
-(id)dictionaryRepresentation;
@end
