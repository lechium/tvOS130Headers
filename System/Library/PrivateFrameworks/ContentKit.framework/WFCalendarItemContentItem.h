/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:53 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContentKit/ContentKit-Structs.h>
#import <ContentKit/WFGenericFileContentItem.h>
#import <ContentKit/WFContentItemClass.h>

@class EKEventStore, EKCalendarItem, NSString;

@interface WFCalendarItemContentItem : WFGenericFileContentItem <WFContentItemClass> {

	EKEventStore* _eventStore;

}

@property (nonatomic,retain) EKEventStore * eventStore;                    //@synthesize eventStore=_eventStore - In the implementation block
@property (nonatomic,readonly) EKCalendarItem * calendarItem; 
@property (nonatomic,readonly) NSString * location; 
+(id)typeDescription;
+(id)outputTypes;
+(id)propertyBuilders;
+(id)pluralTypeDescription;
+(id)countDescription;
+(id)contentCategories;
+(BOOL)supportedTypeMustBeDeterminedByInstance:(id)arg1 ;
-(NSString *)location;
-(EKEventStore *)eventStore;
-(EKCalendarItem *)calendarItem;
-(void)setEventStore:(EKEventStore *)arg1 ;
-(id)generateObjectRepresentationsForClass:(Class)arg1 options:(id)arg2 error:(id*)arg3 ;
-(void)generateObjectRepresentations:(/*^block*/id)arg1 options:(id)arg2 forClass:(Class)arg3 ;
-(BOOL)canGenerateRepresentationForType:(id)arg1 ;
-(id)copyWithName:(id)arg1 zone:(NSZone*)arg2 ;
-(id)generateFileRepresentationForType:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
@end

