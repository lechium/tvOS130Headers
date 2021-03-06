/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:23 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXMediaUtilities/AXMEvaluationNode.h>

@class VNDetectHorizonRequest;

@interface AXMHorizonDetectorNode : AXMEvaluationNode {

	VNDetectHorizonRequest* __detectHorizonRequest;

}

@property (setter=_setDetectHorizonRequest:,nonatomic,retain) VNDetectHorizonRequest * _detectHorizonRequest;              //@synthesize _detectHorizonRequest=__detectHorizonRequest - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)title;
+(BOOL)isSupported;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)evaluate:(id)arg1 ;
-(void)nodeInitialize;
-(BOOL)validateVisionKitSoftLinkSymbols;
-(VNDetectHorizonRequest *)_detectHorizonRequest;
-(void)_setDetectHorizonRequest:(id)arg1 ;
-(BOOL)requiresVisionFramework;
@end

