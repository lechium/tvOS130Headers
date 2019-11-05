/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:33 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Celestial/Celestial-Structs.h>
@interface BWEspressoInferenceAdapter : NSObject
+(void)initialize;
+(id)celestialClassifiersBundle;
+(id)celestialClassifiersSubdirectory;
+(id)platformIdentifier;
+(id)espressoNetworkURLForPlatformedResource:(id)arg1 bundle:(id)arg2 subdirectory:(id)arg3 ;
-(id)inferenceProviderForType:(int)arg1 version:(SCD_Struct_BW92)arg2 configuration:(id)arg3 resourceProvider:(id)arg4 status:(int*)arg5 ;
-(int)_mostAcceleratedExecutionTargetForSmartCameraFromResourceProvider:(id)arg1 ;
@end
