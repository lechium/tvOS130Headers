/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:21 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/TVHomeSharingServices.framework/TVHomeSharingServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSValueTransformer.h>

@class NSArray;

@interface TVHSCompoundValueTransformer : NSValueTransformer {

	NSArray* _valueTransformers;

}

@property (nonatomic,copy) NSArray * valueTransformers;              //@synthesize valueTransformers=_valueTransformers - In the implementation block
-(id)init;
-(id)transformedValue:(id)arg1 ;
-(id)reverseTransformedValue:(id)arg1 ;
-(void)setValueTransformers:(NSArray *)arg1 ;
-(NSArray *)valueTransformers;
@end
