/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:33 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKObject.h>
#import <EventKit/NSCopying.h>

@class NSDate;

@interface EKExceptionDate : EKObject <NSCopying>

@property (nonatomic,retain) NSDate * date; 
+(Class)frozenClass;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSDate *)date;
-(id)initWithDate:(id)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
@end

