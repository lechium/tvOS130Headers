/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:36 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/dmd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class DMDConfigurationOrganization, NSString, DMDPayload, NSDate, NSDictionary, NSSet;

@interface DMDPayloadMetadata : NSManagedObject

@property (assign,nonatomic) BOOL pendingStatusUpdate; 
@property (assign,nonatomic) BOOL requiresNetworkTether; 
@property (assign,nonatomic) BOOL requiresUnlockedKeychain; 
@property (nonatomic,retain) DMDConfigurationOrganization * organization; 
@property (nonatomic,copy) NSString * status; 
@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,copy) NSString * type; 
@property (nonatomic,retain) DMDPayload * payload; 
@property (nonatomic,retain) NSDate * stateChangeTimestamp; 
@property (assign,nonatomic) BOOL available; 
@property (assign,nonatomic) BOOL installed; 
@property (nonatomic,copy) NSDictionary * stateDictionary; 
@property (nonatomic,copy) NSDate * lastStatusReportTimestamp; 
@property (nonatomic,copy) NSSet * outgoingPayloadMetadataReferences; 
@property (nonatomic,copy) NSSet * incomingPayloadMetadataReferences; 
@property (nonatomic,retain) id installMetadata; 
+(id)keyPathsForValuesAffectingStatus;
+(id)fetchRequestForPayloadMetadatasPendingStatusUpdateFromOrganizationWithIdentifier:(id)arg1 ;
+(id)metadataWithPayloadDictionary:(id)arg1 organizationIdentifier:(id)arg2 context:(id)arg3 error:(id*)arg4 ;
+(id)fetchRequestForPayloadMetadatasFromOrganizationWithIdentifier:(id)arg1 matchingPredicate:(id)arg2 ;
+(id)fetchRequestForActivePayloadMetadatasFromOrganizationWithIdentifier:(id)arg1 withIdentifier:(id)arg2 ;
+(BOOL)automaticallyNotifiesObserversOfStateDictionary;
+(BOOL)automaticallyNotifiesObserversOfLastStatusReportTimestamp;
-(id)description;
-(id)init;
-(NSString *)status;
-(id)initWithContext:(id)arg1 ;
-(id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2 ;
-(void)willSave;
-(BOOL)validateForDelete:(id*)arg1 ;
-(BOOL)validateForInsert:(id*)arg1 ;
-(BOOL)validateForUpdate:(id*)arg1 ;
-(void)setStateDictionary:(NSDictionary *)arg1 ;
-(void)setLastStatusReportTimestamp:(NSDate *)arg1 ;
-(id)descriptiveProperties;
-(void)applyPayloadDictionary:(id)arg1 ;
-(void)setNeedsRefreshStatus;
-(BOOL)validateProperties:(id*)arg1 ;
@end
