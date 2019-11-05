/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:09 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/NSSecureCoding.h>

@class NSDate, NSDictionary;

@interface AFOpportuneSpeakingModelFeedback : NSObject <NSSecureCoding> {

	NSDate* _lastNegativeFeedback;
	NSDictionary* _negativeFeedbackByContact;

}

@property (nonatomic,retain) NSDate * lastNegativeFeedback;                         //@synthesize lastNegativeFeedback=_lastNegativeFeedback - In the implementation block
@property (nonatomic,retain) NSDictionary * negativeFeedbackByContact;              //@synthesize negativeFeedbackByContact=_negativeFeedbackByContact - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)lastNegativeFeedback;
-(void)setLastNegativeFeedback:(NSDate *)arg1 ;
-(NSDictionary *)negativeFeedbackByContact;
-(void)setNegativeFeedbackByContact:(NSDictionary *)arg1 ;
@end
