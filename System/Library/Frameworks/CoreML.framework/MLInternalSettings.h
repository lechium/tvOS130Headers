/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:09 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MLInternalSettings : NSObject {

	BOOL _restrictNeuralNetworksToUseCPUOnly;
	BOOL _restrictNeuralNetworksFromUsingANE;
	BOOL _isNeuralNetworkGPUPathForbidden;

}

@property (assign) BOOL restrictNeuralNetworksToUseCPUOnly;                       //@synthesize restrictNeuralNetworksToUseCPUOnly=_restrictNeuralNetworksToUseCPUOnly - In the implementation block
@property (assign) BOOL restrictNeuralNetworksFromUsingANE;                       //@synthesize restrictNeuralNetworksFromUsingANE=_restrictNeuralNetworksFromUsingANE - In the implementation block
@property (nonatomic,readonly) BOOL isNeuralNetworkGPUPathForbidden;              //@synthesize isNeuralNetworkGPUPathForbidden=_isNeuralNetworkGPUPathForbidden - In the implementation block
+(id)globalSettings;
+(BOOL)deviceHasANE;
-(id)init;
-(BOOL)restrictNeuralNetworksToUseCPUOnly;
-(void)setRestrictNeuralNetworksToUseCPUOnly:(BOOL)arg1 ;
-(BOOL)restrictNeuralNetworksFromUsingANE;
-(void)setRestrictNeuralNetworksFromUsingANE:(BOOL)arg1 ;
-(BOOL)isNeuralNetworkGPUPathForbidden;
@end

