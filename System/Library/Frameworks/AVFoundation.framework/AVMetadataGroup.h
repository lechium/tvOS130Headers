/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:31 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class NSString, NSArray;

@interface AVMetadataGroup : NSObject

@property (nonatomic,readonly) NSString * classifyingLabel; 
@property (nonatomic,readonly) NSString * uniqueID; 
@property (nonatomic,copy,readonly) NSArray * items; 
+(void)initialize;
-(NSArray *)items;
-(NSString *)uniqueID;
-(NSString *)classifyingLabel;
-(opaqueCMFormatDescriptionRef)copyFormatDescription;
@end

