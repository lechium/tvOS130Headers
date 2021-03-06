/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:29 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/NSSecureCoding.h>
#import <AVFoundation/NSCopying.h>
#import <AVFoundation/NSMutableCopying.h>
#import <AVFoundation/AVVideoCompositionInstruction.h>
@class NSArray;


@protocol AVVideoCompositionInstruction <NSObject>
@property (nonatomic,readonly) SCD_Struct_AV8 timeRange; 
@property (nonatomic,readonly) BOOL enablePostProcessing; 
@property (nonatomic,readonly) BOOL containsTweening; 
@property (nonatomic,readonly) NSArray * requiredSourceTrackIDs; 
@property (nonatomic,readonly) int passthroughTrackID; 
@required
-(SCD_Struct_AV8)timeRange;
-(BOOL)enablePostProcessing;
-(BOOL)containsTweening;
-(NSArray *)requiredSourceTrackIDs;
-(int)passthroughTrackID;

@end


@class NSArray, AVVideoCompositionInstructionInternal, NSString;

@interface AVVideoCompositionInstruction : NSObject <NSSecureCoding, NSCopying, NSMutableCopying, AVVideoCompositionInstruction> {

	AVVideoCompositionInstructionInternal* _instruction;

}

@property (nonatomic,readonly) SCD_Struct_AV8 timeRange; 
@property (nonatomic,retain,readonly) CGColorRef backgroundColor; 
@property (nonatomic,copy,readonly) NSArray * layerInstructions; 
@property (nonatomic,readonly) BOOL enablePostProcessing; 
@property (nonatomic,readonly) NSArray * requiredSourceTrackIDs; 
@property (nonatomic,readonly) int passthroughTrackID; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL containsTweening; 
+(void)initialize;
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)dictionaryRepresentation;
-(CGColorRef)backgroundColor;
-(void)setBackgroundColor:(CGColorRef)arg1 ;
-(void)setTimeRange:(SCD_Struct_AV8)arg1 ;
-(SCD_Struct_AV8)timeRange;
-(id)_deepCopy;
-(NSArray *)layerInstructions;
-(BOOL)enablePostProcessing;
-(void)setEnablePostProcessing:(BOOL)arg1 ;
-(void)_setValuesFromDictionary:(id)arg1 ;
-(void)setLayerInstructions:(NSArray *)arg1 ;
-(BOOL)containsTweening;
-(NSArray *)requiredSourceTrackIDs;
-(int)passthroughTrackID;
@end

