/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:51:00 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSValueTransformer.h>

@class NSValueTransformer;

@interface VSFailableValueTransformer : NSValueTransformer {

	NSValueTransformer* _objectValueTransformer;

}

@property (nonatomic,retain) NSValueTransformer * objectValueTransformer;              //@synthesize objectValueTransformer=_objectValueTransformer - In the implementation block
+(BOOL)allowsReverseTransformation;
+(Class)transformedValueClass;
-(id)transformedValue:(id)arg1 ;
-(NSValueTransformer *)objectValueTransformer;
-(void)setObjectValueTransformer:(NSValueTransformer *)arg1 ;
@end

